#include <stdio.h>
int a,b,c,d;

int main() {
    int a, b, c, d;
    printf("enter the four numbers: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int result = max_of_four(a, b, c, d);
    printf("Greatest number is: %d\n", result);
    return 0;
}
