/*
  StackOverrun.c
  This program shows an example of how a stack-based 
  buffer overrun can be used to execute arbitrary code.  Its 
  objective is to find an input string that executes the function bar.
*/


#include <stdio.h>
#include <string.h>

void foo(const char* input, int num, int num2)
{
		
    char buf[200];
	
	printf("\naddress of buf is: %x\n", &buf);
	printf("address of input is: %x\n\n", &input);
	
    //What? No extra arguments supplied to printf?
    //It's a cheap trick to view the stack 8-)
    //We'll see this trick again when we look at format strings.
    //printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
	printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
    //Pass the user input straight to secure code public enemy #1.
    strcpy(buf, input);
    printf("%s\n", buf);

	printf("Now the stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
    //printf("Now the stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
}

void bar(void)
{
    printf("Augh! I've been hacked!\n");
}

int main(int argc, char* argv[])
{
    //Blatant cheating to make life easier on myself
	//printf("Address of main = %p\n", (void *)&main);
    printf("Address of foo = %p\n", foo);
    printf("Address of bar = %p\n", bar);
	
    if (argc != 2) 
 {
        printf("Please supply a string as an argument!\n");
        return -1;
	} 
	foo(argv[1], 2147483647, 2147483648);
	printf("back in main after calling foo...");
    return 0;
}
