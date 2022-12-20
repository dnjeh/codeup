#include <stdio.h>
int main() {
    int a;
    while(1) {
        scanf("%c ", &a);
        printf("%c\n", a);
        if(a=='q')
            break;
    }
}
