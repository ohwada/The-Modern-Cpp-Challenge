/**
 * fizzbuzz.c
 * 2022-06-01 K.OHWADA
 */

// gcc fizzbuzz.c

#include <stdio.h>


/**
 * main
 */
int main()
{
for( int i=1; i<100; i++)
{
    if( i % 15 == 0){
        printf("%d: FizzBuzz \n", i);
   } else if( i % 3 == 0 ){
        printf("%d: Fizz \n", i);
    }else if( i % 5 == 0){
        printf("%d: Buzz \n", i);
    } else {
        printf("%d \n", i);
    }
} // for
    return 0;
}


// 1 
// 2 
// 3: Fizz 
// 4 
// 5: Buzz 


