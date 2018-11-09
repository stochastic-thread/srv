#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../srv/httpd.h";
#include "../srv/httpd.c";
//#include "../srv/main.c";

int main() {
  char *args[] = {"./server", NULL};
  execvp(args[0],args);
  return 0;
}
