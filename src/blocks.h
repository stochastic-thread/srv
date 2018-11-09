#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONFIG_LOAD_FILE "init.config"
#define MAXBUF 131072

typedef struct transaction {
  char *sender_pubkey;
  char *encrypted_msg;
} Transaction;

typedef struct block {
  char *prevhash;
  struct block *prev;
} Block;



  
