#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("%d %d %d", rand()%100001, rand()%100001, rand()%100001);
}