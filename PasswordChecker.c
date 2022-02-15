#include <stdio.h>
#include "passwords.c"

int main(int argc, char *argv[]) {

  char *str = argv[1];
  int found = 0;

  
  int i = 0;
  while(i < (int)( sizeof(passwords) / sizeof(passwords[0]) ) && found == 0) {
  int ctr = 0;
  char *current = passwords[i];
  
    while(current[ctr] == str[ctr]) {
      if(current[ctr]=='\0'|| str[ctr]=='\0') {
            break;
      }
      ctr++;
  }
    if(current[ctr]=='\0' && str[ctr]=='\0')
        found = 1;
  i++;
}

  if (found == 1) {
    printf("is present in this array.\n");
  } else{
    printf("is present in this array.\n");

  }
}
