#include <stdio.h>
int main() {
    int T, i;
    char t[201]={'\0',};
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        printf("%s\n", t);
        if(i+1!=T) {
            printf("AMOLED\n");
        }
    }
}
