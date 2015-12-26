#include <stdio.h>
#include "lib.h"
#undef MT
/*int max = 10;*/

struct tag_name {
    char a;
    int b;
    };
int main(){
    struct tag_name my_struct;
    my_struct.a = "a";
    my_struct.b = 1;
    printf("%d", my_struct.b);

    int my_hash(char my_key)
    {
        char *key = "abc";
    int value[] = {1,2,3};
         int i = 0;
         for(i<3;i++;)
         {
             if(key[i]==my_key)
             return value[i];
         }
    }
    //printf("%d", my_hash('b'));
}
