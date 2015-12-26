#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

bool Is_bigger(int a, int b)
{
    if(a > b)
    {
        return  true;
    }
    else
    {
        return false;
    }
}

void output(int *pointer_a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << *pointer_a << ", ";
        pointer_a = pointer_a + 1;
    }
    cout << "\n\n\n";
}

int main()
{
    int n = rand() % 100;
    int a[n], i, j, k;
    for(k=0;k<n;k++)
    {
        a[k] = rand() % 100;
    }

    for(i=n; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(Is_bigger(a[j], a[j+1])==true)
            {
                 swap(a[j], a[j+1]);
                 output(a, n);
            }
        }
    }


}


