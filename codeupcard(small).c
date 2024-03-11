#include <stdio.h>
int main() {
    int i1, i2, i3, f1=0, f2=0, sum=0, _t;
    char c1, c2, c3, t;
    scanf("%c%d%c", &c1, &i1, &t);
    scanf("%c%d%c", &c2, &i2, &t);
    scanf("%c%d%c", &c3, &i3, &t);
    _t=i1+i2+i3;
    if(i1==i2&&i2==i3) {
        f2=1;
        if(c1==c2&&c2==c3) f1=1;
        else if(c1==c2||c2==c3||c1==c3) f1=2;
    }
    else if(!(_t%3)&&(i1+1==_t||i1==_t||i1-1==_t)&&(i2+1==_t||i2==_t||i2-1==_t)) f1=3;

    switch(_t) {
    case 0: case 8: case 27: case 64: case 216: 
        f2=1;
        break;
    }
    if(!f2&&_t/3) {
        if(!(_t%3)) f2=2;
        else f2=3;
    }
    else if(!f2&&_t) f2=4;
    switch(f1) {
    case 1: sum+=3334;
    case 2: sum+=3333;
    case 3: sum+=3333;
    }
    switch(f2) {
    case 1: sum+=9999;
    case 2: sum+=3999;
    case 3: sum+=3000+(_t%3)*100+3*(_t%3);
    case 4: sum+=1;
    }
    printf("%d", sum);
}