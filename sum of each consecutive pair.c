#include <stdio.h>
int main()
{
    int num[] = {3, 7, 8, 10, 7};
    int size = sizeof(num) / sizeof(num[0]);

    int num1[10];  

    for(int i = 0; i < size - 1; i++)  
    {
        num1[i] = num[i] + num[i+1];
    }


    for(int i = 0; i < size - 1; i++)
    {
        printf("%d ", num1[i]);
    }

    return 0;
}
