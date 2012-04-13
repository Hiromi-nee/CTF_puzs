#define A(c) (c) - 0x19
#define UNHIDE_STR(str) do { char *p = str; while (*p) *p++ += 0x19; } while (0)
#define HIDE_STR(str)   do { char *p = str;  while (*p) *p++ -= 0x19; } while (0)

#include <stdio.h>
#include <string.h>

int main(){
  char holder[10];
  puts("Enter your 6 digit pin");
  scanf("%6s", holder);
  //printf("%s\n", holder);

  if(strlen(holder) == 10){
    char str[] ={ A('d'),A('r'),A('m'),A('f'),A('r'),A('e'),A('e'),A('b'),A('i'),A('n'),A('s'),0 };
    UNHIDE_STR(str);
    printf("Flag: %s\n ", str);
    HIDE_STR(str);
    return 0;
  }else{
    printf("Entered %d digits.\nProgram will now return one\n", strlen(holder));
    return 1;
  }

}
