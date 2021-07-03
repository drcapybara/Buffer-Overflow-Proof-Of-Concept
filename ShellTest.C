#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

/**
 * https://www.suchprogramming.com/new-linux-process-c/
 */

int main(int argc, char *argv[]) {
    execl("/usr/bin/tilix", "/THECHILD", NULL);
  return 0;
}