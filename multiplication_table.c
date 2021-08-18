#include <stdio.h>
#include <stdlib.h>
//multiplication table of any number
int main()
{
    int i, n, num;
    printf("enter number");
    scanf("%d", &n);
    n=n;
    for(i=1; i<16; i++){
        num = i * n;
        printf("%d * %d = %d\n", i, n, num);
    }
    return 0;
}
