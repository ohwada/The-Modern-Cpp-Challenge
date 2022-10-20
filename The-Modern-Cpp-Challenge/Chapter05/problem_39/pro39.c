/**
 * gcc pro39.c
 * Measuring function execution time 
 * 2022-06-01 K.OHWADA
 */

// gcc pro39.c -lpthread

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <pthread.h>


/**
 * calc_duration
 */
double calc_duration( struct timespec start_time, struct timespec end_time)
{
    unsigned int  sec = end_time.tv_sec - start_time.tv_sec;
    int nsec = end_time.tv_nsec - start_time.tv_nsec;
    double dsec = (double)sec
        + (double)nsec / (1000 * 1000 * 1000);
    double msec = 1000 * dsec;
    return msec;
}


/**
 * f
 */
void* f(void* x)
{
    sleep(2);
    return x;
}


/**
 * g
 */
void* g(void* y)
{
    sleep(1);
    return y;
}


/**
 * main
 */
int main()
{
    struct timespec start_time, end_time;

    pthread_t t1, t2;

    pthread_create(&t1, NULL, f, NULL);
    pthread_create(&t2, NULL, g, NULL);

    clock_gettime(CLOCK_REALTIME, &start_time);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    clock_gettime(CLOCK_REALTIME, &end_time);

    double msec = calc_duration(start_time, end_time);
    printf("%.3f msec \n", msec);

    return 0;
}

// 2003.684 msec 