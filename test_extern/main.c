#include <stdio.h>

int g = 1;

int test_global_variable()
{
    int x;
    int c = g + 11;
    return c;
    int xx[3] = {1,2,3};
}

int main(int n)
{
    int my_array[n];
    int a = 1;
    int x = 10;
    int b = test_global_variable();
    printf("%d", b);
    return 0;
}