#include <stdio.h>
int main() {
    char ioi[4];
    scanf("%s", ioi);
    if(ioi[0]=='I'&&ioi[1]=='O'&&ioi[2]=='I'&&ioi[3]=='\0') {
        printf("IOI is the International Olympiad in Informatics.");
    }
    else {
        printf("I don't care.");
    }
}