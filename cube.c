#include <stdio.h>
#include <stdlib.h>
//cube numbers from one to the number you entered
int main()
{
    int i, n, cube;
    printf("enter a number");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        cube = i * i * i;
        printf("cube of %d is %d\n", i, cube);

    }
    return 0;
}
