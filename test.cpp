#include <iostream>
#include <random>
#include <cmath>
#include "true_random.h"
using namespace std;

__declspec( dllexport ) int add2(int num){
   return num + 2;
}
