/* testenv.c */

#include <unistd.h>

 

int main()

{
   char *descr = getenv("EGG");
   if (descr)
     printf("Value of EGG is: %s\n", descr);
   else
     printf("The environment variable not defined lor!\n");
  return 0;

}