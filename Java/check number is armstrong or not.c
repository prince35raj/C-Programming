#include <stdio.h>
#include <conio.h>


void main()
{
    int n1, tnum, r, sum = 0, n = 0;
    printf("enter any number:");
    scanf("%d", &n1);
     tnum = n1;  
    while (tnum != 0)
    {
        tnum /= 10;
        ++n;
    }
    tnum = n1;
    while (tnum != 0)
    {
        r = tnum % 10;
        sum += pow(r, n);
        tnum /= 10;
    }
    if(sum == n1)
        printf(" %d is an Armstrong number.\n", n1);
    else
        printf(" %d is not an Armstrong number.\n", n1);

    return 0;
}
