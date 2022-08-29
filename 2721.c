#include <stdio.h>
int main() {
    int i, j;
    char a[3][21];
    for(i=0;i<3;i++) {
        scanf("%s", &a[i]);
    }
    for(i=0;i<3;i++) {
        for(j=0;j<20;j++) {
            if(i!=2&&a[i][j+1]=='\0') {
                if(a[i][j]!=a[i+1][0]) {
                    printf("bad");
                    return 0;
                }
                break;
            }
            else if(i==2&&a[i][j+1]=='\0') {
                if(a[i][j]==a[0][0]) {
                    printf("good");
                    return 0;
                }
                else {
                    printf("bad");
                    return 0;
                }
                break;
            }
        }
    }
}