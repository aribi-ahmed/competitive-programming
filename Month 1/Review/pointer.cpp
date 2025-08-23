#include <stdio.h>
#include <cmath>
void update(int *a,int *b) {
    *a =   abs(*a+*b), *b = abs(*a-*b-*b);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
/* link for the problem statment: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem */
