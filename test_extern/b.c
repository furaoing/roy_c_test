#include <stdio.h>
int main()
{
/*
   char c;
   while((c=getchar())!=EOF)
   {
       putchar(c);
   }
*/
   char * c = "abcd";
   if(c[6] == 0)
       printf("%s", "Null Found");
   return 0;
}
