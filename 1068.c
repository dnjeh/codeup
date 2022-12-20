#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(100>=a&&a>=90) printf("A");
    else if(70<=a) printf("B");
    else if(40<=a) printf("C");
    else printf("D");
}
