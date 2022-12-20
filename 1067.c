#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%s\n%s", a<0?"minus":"plus", a%2==0? "even" : "odd");
}
