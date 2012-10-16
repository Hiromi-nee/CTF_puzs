#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  printf("argc is %d\n", argc);
  if(argc != 4){
    printf("It doesn't add up :[\n");
    exit(0);
  }
  
  if(!strcmp(argv[0], "./somecode")){
    printf("No we don't want this name.\n");
    exit(0);
  }
  if(strcmp(argv[1], "0xcafe")){
    printf("You don't want some drinks?");
    exit(0);
  }
  
  printf("Doesn't come here if wrong\n");
  return 0;
}
