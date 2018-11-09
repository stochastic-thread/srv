#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"blocks.h"
#define  TRUE 1
#define FALSE 0

// writes block to disk - every block becomes a blockfile
FILE *write_blockfile(int mode, const char *fname) {
  char *readmode = NULL;
  if (mode == TRUE) 
    readmode = "r";         
  else
    readmode = "w";

  FILE *fp = fopen(*fname, readmode);
  return fp;
}

char *read_blockfile(char *fname) {
}

Block *genesis(int reward) {
  Block *_0 = malloc(sizeof(Block));
  _0->prevhash = calloc(MAXBUF,0);
  _0->prev = NULL;
  return _0;
}

typedef struct Client {
  
};

int main() {
  Block *block1 = genesis(50);
  Block *block
  printf(let_there_be_light);
  printf("Fuck Off\n");
  return 0xdeadbeef;
}
