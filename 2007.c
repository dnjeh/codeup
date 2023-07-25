#include <stdio.h>
int main() {
    int af=1, df=1, n, i, pr, no;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &no);
        if(i&&pr<no) df=0;
        if(i&&pr>no) af=0;
        pr=no;
    }
    if(af==df) printf("섞임");
    else if(af) printf("오름차순");
    else printf("내림차순");
}