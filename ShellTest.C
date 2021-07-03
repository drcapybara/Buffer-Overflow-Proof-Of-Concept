#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

/**
 * https://www.suchprogramming.com/new-linux-process-c/
 */

int main(int argc, char *argv[]) {
  pid_t child = fork();
  
  if (child) {
    wait(NULL);
    printf("child process terminated\n");
  } else {
    execl("/usr/bin/tilix", "/THECHILD", NULL);
  }
  
  return 0;
}