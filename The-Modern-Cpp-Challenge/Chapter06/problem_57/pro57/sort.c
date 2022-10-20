/**
 * pro57.c
 * Sort algorithm  
 * 2022-06-01 K.OHWADA
 */

// gcc pro57.c

#include <stdio.h>


// prototype
int partition(int *v, int size, int first, int last);
void quicksortp(int *v, int size, int first, int last);
void quicksort(int *v, int size);
void dump(int* data, int size);


/**
 * partition
 */
int partition(int *v, int size, int first, int last)
{
   int pivot = v[first];
   int i = first + 1;
   int j = last;

   while (i <= j)
   {
      while (i <= j && v[i] <= pivot) i++;
      while (i <= j && v[j] > pivot) j--;

        if (i< j) {
            int tmp = v[i];
            v[i] = v[j];
            v[j] = tmp;
        }
   } // while

            int tmp = v[i-1];
            v[i-1] = v[first];
            v[first] = tmp;

   return (i - 1);
}


/**
 * quicksortp
 */
void quicksortp(int *data, int size, int first, int last)
{

   if (first < last)
   {
      int p = partition(data, size, first, last);
      quicksortp(data, size, first, p);
      quicksortp(data, size, p + 1, last);
   }

}


/**
 * quicksort
 */
void quicksort(int *data, int size)
{
    int first = 0;
    int last = size-1;
    quicksortp(data, size, first, last);
}


/**
 *  dump
 */
void dump(int* data, int size)
{

    for (int i = 0; i < size; i++) {
        printf("%2d, ", data[i]);
    }
    printf("\n");
}


/**
 *  main
 */
int main(void)
{

     const int COUNT = 100;
       int d1[COUNT];
      int d2[COUNT];

{
     int v[]={ 9, 1, 5, 3, 8, 6, 2, 7, 4, 0 };
    int size = sizeof(v) / sizeof(v[0]);
	dump(v, size);
      quicksort(v, size);
	dump(v, size);
}

{
  int v[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(v) / sizeof(v[0]);
printf("\n");
	dump(v, size);
      quicksort(v, size);
	 dump(v, size);
}

{
     int v[] = { 9,8,7,6,5,4,3,2,1 };
    int size = sizeof(v) / sizeof(v[0]);
printf("\n");
	dump(v, size);
      quicksort(v, size);
	 dump(v, size);
}

	return 0;
}

