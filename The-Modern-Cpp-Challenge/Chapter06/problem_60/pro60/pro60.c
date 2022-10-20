/**
 * pro60.c
 * The Game of Life 
 * 2022-06-01 K.OHWADA
 */

// gcc pro60.c  -lncurses ’
// reference : https://github.com/PacktPublishing/The-Modern-Cpp-Challenge/tree/master/Chapter06/problem_60

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ncurses.h>
#include "random.h"


/**
 *    enum seed

 */
   typedef enum
   {
      RANDOM,
      TEN_CELL_ROW,
      SMALL_EXPLORER,
      EXPLORER
   }seed;


void init(size_t const width, size_t const height);
   void run( seed const s,
      int const generations, 
      int const sleep_time );
   void next_generation();
   void reset_display();
   void display();
   void initialize(seed const s);
   void reset();
   int count_alive(unsigned  char c1, unsigned  char c2, unsigned  char c3);
int count_alive_5(unsigned  char c1, unsigned  char c2, unsigned  char c3, unsigned  char c4, unsigned  char c5);
int count_alive_8(unsigned  char c1, unsigned  char c2, unsigned  char c3, unsigned  char c4, unsigned  char c5, unsigned  char c6,  unsigned  char c7,  unsigned  char c8);
   int count_neighbors(size_t const row, size_t const col);
 unsigned char cell(size_t const col, size_t const row);
   void set_cell(size_t const col, size_t const row, unsigned char c);
void replace( unsigned char* newgrid );
seed get_seed(int num);


const size_t WIDTH = 50;
const size_t HIGHT = 20;
const size_t GLID_SIZE = WIDTH * HIGHT;

   const unsigned char ALIVE = 1;
   const unsigned char DEAD = 0;

  size_t rows;
   size_t columns;

   unsigned char grid[GLID_SIZE];


 /**
 * init
 */
void init(size_t const width, size_t const height)
{
      rows = height;
    columns = width;
     initRand();

	int  w, h;
	initscr();
	curs_set(0); 
	getmaxyx(stdscr, h, w);
  timeout(0);

}


/**
 * run
 */
   void run(
      seed const s,
      int const generations, 
      int const sleep_time )
   {
  const char KEY_ESC = 27;

      reset();
      initialize(s);
      display();

      int i = 0;
      do 
      {
         next_generation();
         display();
         usleep(sleep_time);

	if ( getch() == KEY_ESC ){
        break;
    }	

      } while (i++ < generations || generations == 0);

        move(0,0);
        addstr("Press Any key to Quit");
   }


/**
 * next_generation
 */
   void next_generation()
   {
      unsigned char newgrid[GLID_SIZE];

      for (size_t r = 0; r < rows; ++r)
      {
         for (size_t c = 0; c < columns; ++c)
         {
            int count = count_neighbors(r, c);

            if (cell(c, r) == ALIVE)
            {
               newgrid[r * columns + c] = (count == 2 || count == 3) ? ALIVE : DEAD;
            }
            else 
            {
               newgrid[r * columns + c] = (count == 3) ? ALIVE : DEAD;
            }
         }
      }

      replace( (unsigned char *)newgrid );
   }


/**
 * replace
 */
void replace( unsigned char* newgrid )
{
      for (size_t r = 0; r < rows; ++r)
      {
         for (size_t c = 0; c < columns; ++c)
         {
                seed s = (newgrid[r * columns + c] == 1)? ALIVE : DEAD;
                set_cell(c ,r, s );
        } // for c
    } // for r
}



/**
 * reset_display
 */
   void reset_display()
   {
        // none
   }


/**
 * display
 */
   void display()
   {
    const char SQURE = '#';
    const int MARGIN = 10;

      erase();

      for (size_t r = 0; r < rows; ++r)
      {
         for (size_t c= 0; c < columns; ++c)
         {
            if( cell(c, r) ) {
                int x = r + MARGIN;
                int y = c + MARGIN;
	            move(x, y);
                addch(SQURE);	
            }
         } // for c
      } // for r

    refresh();
  }


/**
 * initialize
 */
   void initialize(seed const s)
   {
      if (s == SMALL_EXPLORER)
      {
         int mr = rows / 2;
         int mc = columns / 2;

         set_cell(mc, mr, ALIVE);
         set_cell(mc - 1, mr + 1, ALIVE);
         set_cell(mc, mr + 1, ALIVE);
         set_cell(mc + 1, mr + 1, ALIVE);
         set_cell(mc - 1, mr + 2, ALIVE);
         set_cell(mc + 1, mr + 2, ALIVE);
         set_cell(mc, mr + 3, ALIVE);
      }
      else if (s == EXPLORER)
      {
         size_t mr = rows / 2;
         size_t mc = columns / 2;

         set_cell(mc - 2, mr - 2, ALIVE);
         set_cell(mc    , mr - 2, ALIVE);
         set_cell(mc + 2, mr - 2, ALIVE);

         set_cell(mc - 2, mr - 1, ALIVE);
         set_cell(mc + 2, mr - 1, ALIVE);
         set_cell(mc - 2, mr, ALIVE);
         set_cell(mc + 2, mr, ALIVE);
         set_cell(mc - 2, mr + 1, ALIVE);
         set_cell(mc + 2, mr + 1, ALIVE);

         set_cell(mc - 2, mr + 2, ALIVE);
         set_cell(mc    , mr - 2, ALIVE);
         set_cell(mc + 2, mr + 2, ALIVE);
      }
      else if (s == TEN_CELL_ROW)
      {
         for (size_t c = columns / 2 - 5; c < columns / 2 + 5; c++)
            set_cell(c, rows / 2, ALIVE);
      }
      else
      {
         for (size_t r = 0; r < rows; ++r)
         {
            for (size_t c = 0; c < columns; ++c)
            {
                int rnd = genRandInt(0, 1);
               seed s = (rnd == 0) ? ALIVE : DEAD;
                set_cell(c, r, s);
            } // for c
         } // for r
      }
   }


/**
 * reset
 */
   void reset()
   {
      for (size_t r = 0; r < rows; ++r)
      {
         for (size_t c = 0; c < columns; ++c)
         {
            set_cell(c, r, DEAD);
         }
      }
   }


/**
 * count_alive
 */
int count_alive(unsigned  char c1, unsigned  char c2, unsigned  char c3) 
{
        int count = c1 + c2 + c3;
        return count;
}

/**
 * count_alive_5
 */
int count_alive_5(unsigned  char c1, unsigned  char c2, unsigned  char c3, unsigned  char c4, unsigned  char c5) 
{

    int count = count_alive(c1, c2, c3);
    count += c4 + c5;
    return count;
}


/**
 * count_alive_8
 */
int count_alive_8(unsigned  char c1, unsigned  char c2, unsigned  char c3, unsigned  char c4, unsigned  char c5, unsigned  char c6,  unsigned  char c7,  unsigned  char c8) 
{
    int count = count_alive_5(c1, c2, c3, c4, c5);
    count += c6 + c7 +c8;
    return count;
}


/**
 * count_neighbors
 */
   int count_neighbors(size_t const row, size_t const col)
   {
      if (row == 0 && col == 0) 
         return count_alive(cell(1, 0), cell(1,1), cell(0, 1));
      if (row == 0 && col == columns - 1)
         return count_alive(cell(columns - 2, 0), cell(columns - 2, 1), cell(columns - 1, 1));
      if (row == rows - 1 && col == 0)
         return count_alive(cell(0, rows - 2), cell(1, rows - 2), cell(1, rows - 1));
      if (row == rows - 1 && col == columns - 1)
         return count_alive(cell(columns - 1, rows - 2), cell(columns - 2, rows - 2), cell(columns - 2, rows - 1));
      if (row == 0 && col > 0 && col < columns - 1)
         return count_alive_5(cell(col - 1, 0), cell(col - 1, 1), cell(col, 1), cell(col + 1, 1), cell(col + 1, 0));
      if (row == rows - 1 && col > 0 && col < columns - 1)
         return count_alive_5(cell(col - 1, row), cell(col - 1, row - 1), cell(col, row - 1), cell(col + 1, row - 1), cell(col + 1, row));
      if (col == 0 && row > 0 && row < rows - 1)
         return count_alive_5(cell(0, row - 1), cell(1, row - 1), cell(1, row), cell(1, row + 1), cell(0, row + 1));
      if (col == columns - 1 && row > 0 && row < rows - 1)
         return count_alive_5(cell(col, row - 1), cell(col - 1, row - 1), cell(col - 1, row), cell(col - 1, row + 1), cell(col, row + 1));
         
      return count_alive_8(cell(col - 1, row - 1), cell(col, row - 1), cell(col + 1, row - 1), cell(col + 1, row), cell(col + 1, row + 1), cell(col, row + 1), cell(col - 1, row + 1), cell(col - 1, row));
   }


/**
 * cell
 */
   unsigned char cell(size_t const col, size_t const row)
   {
      return grid[row * columns + col];
   }


/**
 * set_cell
 */
   void set_cell(size_t const col, size_t const row, unsigned char c)
   {
      grid[row * columns + col] = c;
   }


/**
 *  get_seed
 */
seed get_seed(int num)
{
seed s;
switch(num)
{
    case 0:
        s = RANDOM;
        break;
    case 1:
        s =  TEN_CELL_ROW;
        break;
    case 2:
        s = SMALL_EXPLORER;
        break;
    case 3:
        s =  EXPLORER;
        break;
    default:
        s = RANDOM;
        printf("invalid \n");
        break;
}
return s;
}


/**
 * main
 */
int main()
{
    const int GENERATIONS = 1000;
    const int SLEEP = 100 * 1000; // 100 msec

int num;

printf("Seed: \n");
printf("0: Random \n");
printf("1:  Ten_cell_row \n");
printf("2: Small_explorer \n");
printf("3: Explorer \n");
printf("Choose[0-3]");
scanf("%d", &num);

seed s = get_seed(num);

   init(WIDTH, HIGHT);

   run(s, GENERATIONS, SLEEP);

    timeout(1);
	getch();	
    endwin();	

    return 0;
}
