#define A(c)            (c) - 0x19
#define UNHIDE_STR(str) do { char *p = str;  while (*p) *p++ += 0x19; } while (0)
#define HIDE_STR(str)   do { char *p = str;  while (*p) *p++ -= 0x19; } while (0)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//bloatwareftw
int bloat(){
  char str[] = {
                A('a'), A('t'), A('a'), A('r'), A('i'), 0
          };
	UNHIDE_STR(str);
	printf("%s\n", str);
	HIDE_STR(str);
}

int main( int argc, char *argv[]){
	if (argc != 2){
	  printf("Usage: %s password\nEnter Characters only.\n", argv[0]);
	}else{
	if(strlen(argv[1])>6){
	  printf("Password too long.\n");
	}else{
	  char str[] = {
    		A('a'), A('c'), A('c'), A('e'), A('s'),A('s'), 0
  	  };
	  UNHIDE_STR(str);
	  char *flag1 = "This is the flag: "; //some text
	  if (strcmp(argv[1], str) == 0){
	     printf("%s ", flag1); //prints out bloat
	     bloat();
	     HIDE_STR(str);
	     return 0;
	  }else{
	     puts("You got it wrong.");
	     return 1;
	  }
	}
	}
}
// Puzzle name: 500 worst password dot tee ex tee
// Desc: Enter the right password, get the flag.
// Solution: Write a brute forcer for 1 to 6 characters. or use 500-worst-passwords.txt (Google) 
// perl bf.pl | grep flag [bf.pl is provided for internal use]
// Answer: atari

