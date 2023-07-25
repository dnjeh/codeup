#include <stdio.h>
int main() {
    char a[3][4]={"*x*", " xx", "* *"};
    int i, j, k, ki;
    scanf("%d", &k);
    for(i=0;i<3*k;i++) {
        for(j=0;j<3;j++) {
            for(ki=0;ki<k;ki++)
                printf("%c", a[i/k][j]);
        }
        printf("\n");
    }
}