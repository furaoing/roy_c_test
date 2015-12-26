#include <iostream>
using namespace std;
float* saxpy(int n, float a, float *x, float *y)
{ int i;
int j;
  if (i < n)
  {
    for(j=0;j<10000000;j++)
    {
      y[i] = a*x[i] + y[i];
      y[i] = y[i] + 1;
      y[i] = a*0.3 + y[i];
      y[i] = 0.7*y[i];
      }
  }
  return y;
}

int main(void)
{
  clock_t t;
  t = clock();
  int N = 1<<20;
  float *x, *y;
  x = (float*)malloc(N*sizeof(float));
  y = (float*)malloc(N*sizeof(float));

  for (int i = 0; i < N; i++) {
    x[i] = 1.0f;
    y[i] = 2.0f;
  }

  saxpy(N, 2.0, x, y);
  clock_t tm = clock() - t;
  printf("%d", tm);

  float maxError = 0.0f;
  /*
  for (int i = 0; i < N; i++)
    maxError = max(maxError, abs(y[i]-4.0f));
  printf("Max error: %fn", maxError);
  */
}
