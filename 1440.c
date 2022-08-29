#include <stdio.h>
int main() {
    int a, i, j;
    scanf("%d", &a);
    int b[a];
    char c[a];
    for(i=0;i<a;i++) {
        scanf("%d", &b[i]);
    }
    for(i=0;i<a;i++) {
        printf("%d: ", i+1);
        for(j=0;j<a;j++) {
            if(j!=i) {
                if(b[j]<b[i]) {
                    printf("> ");
                }
                else if(b[j]>b[i]) {
                    printf("< ");
                }
                else {
                    printf("= ");
                }
            }
        }
        printf("\n");
    }
}