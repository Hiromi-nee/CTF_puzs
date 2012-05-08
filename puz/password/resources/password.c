#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *conversion(int *vals){
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", vals[0], vals[1], vals[2], vals[3], vals[4], vals[5], vals[6], vals[7], vals[8], vals[9], vals[10], vals[11], vals[12], vals[13], vals[14], vals[15], vals[16], vals[17],vals[18],vals[19],vals[20],vals[21],vals[22],vals[23]);
} //bloat

int main(){
	char *flag1 = "This is the flag: "; //some text
	char password[21]; //stores user input password
	char *real = "whateverthisis"; //the real password
	printf("Enter password: ");
	scanf("%20s", password);
	int himitsu[] = {116,119,111,101,97,115,121,116,119,111,98,101,116,114,117,101,98,117,116,105,116,105,115};
	if (strcmp(password, real) == 0){
	   printf("%s ", flag1); //prints out bloat
	   conversion(himitsu);
	}else{
	   puts("Wrong password");
	}
}

// Puzzle name: Password
// Desc: Enter the right password, get the flag.
// Solution: In linux terminal, run "strings <binaryfile>"
// password can be seen in plaintext.
// Answer: twoeasytwobetruebutitis
