#include <stdio.h>
int main() {
    int t_top, t_bot, i, j, t=0;
    for(i=0;i<3;i++) {
        t_top=t_bot=0;
        for(j=0;j<4;j++) {
            t=0;
            scanf("%d", &t);
            if(t) {
                t_bot++;
            }
            else {
                t_top++;
            }
        }
        switch((t_top-t_bot+4)/2) {
            case 4: printf("D\n"); break;
            case 3: printf("C\n"); break;
            case 2: printf("B\n"); break;
            case 1: printf("A\n"); break;
            case 0: printf("E\n"); break;
            default: break;
        }
    }
    return 0;
}