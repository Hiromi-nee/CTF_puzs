#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* derp = "onetwo";
  if(argc != strlen(derp)){
    printf("Wrong\n");
    exit(0);
  }else{
    if(argc != (strlen(derp)+1)){
      printf(argv[0]);
      printf("damn that was easy!\n");
    }else{
      printf(argv[1]);
      printf("damn that was easy!\n");
    }
  }

  return 0;
}
