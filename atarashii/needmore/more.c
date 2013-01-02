#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* derp = "onetwo";
  char herp[1000]; //not o9k :(
  unsigned int d[1000] = {0x00};
  d[100] = 3735941133u;
  d[101] = 3405705229u;
  int offset = 1;
  strcpy(herp, argv[2]);
  if(argc != strlen(derp)){
    printf("Wrong\n");
    exit(0);
  }else{
    if(argc == (strlen(derp))){
      printf(argv[1]);
      printf("damn that was easy!\n");
    }else{
      if(offset != 1){
	setreuid(1000, 1000);
	system("/bin/bash");
      }
    }
  }

  return 0;
}
