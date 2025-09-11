#include <stdio.h>

int isPrime(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            c++;
    }
  
     if(c==2)
    return true;
    else
    return false;
    
   
}

int main() {
    int s,e,count = 0,t=0;
    scanf("%d%d", &s,&e);

    for (int num = s; num <= e; num++) {
        if (isPrime(num)) {
            count++;
            if (count % 2 != 0)
            {
			
                printf("%d ", num);
                t++;   
			}
        }
    }
     printf("\nThe total count of alternative prime numbers within range=%d",t);
                

    return 0;
}


