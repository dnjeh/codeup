#include <stdio.h>
int main() {
    int i, a=0, b=0;
    char c[100001];
    scanf("%s", c);
    for(i=0;i<100001;i++) {
        if(c[i] == '(') {
            a++;
        }
        else if(c[i] == ')') {
            b++;
        }
        else if(c[i] == '\0') {
            break;
        }
    }
    printf("%d %d", a, b);
}