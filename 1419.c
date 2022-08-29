#include <stdio.h>
int main() {
    int i, love=0;
    char a[101];
    fgets(a, 100, stdin);
    for(i=0;i<100;i++) {
        if(a[i+3] == '\0') break;
        else if(a[i]=='l'&&a[i+1]=='o'&&a[i+2]=='v'&&a[i+3]=='e') {
            love++;
        }
    }
    printf("%d", love);
}