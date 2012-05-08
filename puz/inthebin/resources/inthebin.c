#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
void sfhandler(int signal){
    exit(0);
}

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("==============================\n");
        printf("= inthebin                   =\n");
        printf("=                      ひろみ=\n");
        printf("=Usage: %s <Yourname>=\n", argv[0]);
    }
    signal(SIGSEGV, sfhandler);
    //int score;
    char name[1000];
    unsigned int payload[1000]= {0x00};
    payload[100] = 3735941133u;
    payload[101] = 3405705229u;
    strcpy(name, argv[1]);
    //game routine
    printf("Your name is ");
    printf(name);
    printf("\n");

    return 0;
}
