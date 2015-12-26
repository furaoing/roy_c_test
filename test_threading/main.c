#include <pthread.h>
#include <stdio.h>

#define ARRAYSIZE 17
#define NUMTHREADS 4

struct ThreadData {
    int start, stop;
    int* array;
};

void* thread_cal(void* arg)
{
    int* array = (int*)arg;
    int i;
    int length = sizeof(array);
    for(i=0; i < length; i++)
    {
        array[i] = array[i] + 1;
    }
    printf("Thead Finished");
    return NULL;
}

void* array_init(int* myarray)
{
    int i;
    int length = sizeof(myarray);
    for(i=0; i < length; i++)
    {
        *(myarray + i) = 1;
    }
    return NULL;
}

int main() {
    pthread_t pth_a;
    pthread_t pth_b;
    int my_array_a[100];
    int my_array_b[100];
    array_init(my_array_a);
    array_init(my_array_b);
    pthread_create(&pth_a, NULL, thread_cal, my_array_a);
    pthread_create(&pth_a, NULL, thread_cal, my_array_b);
    pthread_join(pth_a, NULL);
    // pthread_join(pth_b, NULL);
    printf("Main Thread Finished");
    printf("%d", my_array_a[0]);
    printf("/n");
    return 0;
}