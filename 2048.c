#include <stdio.h>
#include <math.h>
int logg(int x, int base) {
	return (int)(log(x)/log(base));
}
int two[20];
int main() {
    int i, t, f=0;
    for(i=0;i<16;i++) {
        scanf("%d", &t);
        if(t) two[logg(t, 2)]++;
    }
    for(i=0;i<19;i++) 
        if(!(two[i]%2)) {
            two[i+1]+=two[i]/2;
            two[i]=0;
        }
    for(i=19;i>=0;i--) {
        if(f&&two[i]) f++;
        if(two[i]==1) f++; 
    }
    if(f==1) printf("yes");
    else printf("no");
}