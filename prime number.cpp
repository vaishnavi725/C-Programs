#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("It's a prime number.\n");
    else
    {
        printf("not a prime number.\n");
    }

    return 0;
}