#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* derp = "onetwo";
  char herp[20];
  int offset = 1;
  strcpy(herp, argv[2]);
  if(argc != strlen(derp)){
    printf("Wrong\n");
    exit(0);
  }else{
    if(argc != (strlen(derp)+offset)){
      printf(argv[0]);
      printf("damn that was not easy!\n");
    }else{
      printf(argv[1]);
      printf("damn that was easy!\n");
    }
  }

  return 0;
}
