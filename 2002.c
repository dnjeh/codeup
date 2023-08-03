#include <stdio.h>
int main() {
    int i, k;
    char s[21];
    scanf("%d\n%s", &k, s);
    for(i=0;s[i];i++) {
        printf("%c", (s[i]-65-k-3*(i+1)+26)%26+65);
    }
}