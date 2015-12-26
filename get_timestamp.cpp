#include <stdio.h>
#include <time.h>
#include <iostream>

int main(){

clock_t t;
t = clock();
clock_t tm = clock() - t;
printf("%d", tm);
}
