#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
/**
 * shell code as hex:
 * \x65\x78\x65\x63\x6c\x28\x22\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x74\x69\x6c\x69\x78\x22\x2c\x20\x22\x2f\x54\x48\x45\x43\x48\x49\x4c\x44\x22\x2c\x20\x4e\x55\x4c\x4c\x29\x3b 
 * 
 * 
 * 
 */

/**
 * https://www.suchprogramming.com/new-linux-process-c/
 */

int main(int argc, char *argv[]) {
    execl("/usr/bin/tilix", "/THECHILD", NULL); 
  return 0;
}