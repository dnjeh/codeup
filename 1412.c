#include <stdio.h>
int main() {
    int i, a[123] = {0};
    char b[91];
    fgets(b, 90, stdin);
    for(i=0;i<89;i++) {
        if(b[i]<'{'&&b[i]>'`') {
            a[b[i]]++;
        }
        else if(b[i] == '\0') {
            break;
        }
    }
    for(i=97;i<123;i++) {
        printf("%c:%d\n", i, a[i]);
    }
}