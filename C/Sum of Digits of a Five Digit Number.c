#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    long int n,sum=0;
    int rem;
    scanf("%ld", &n);
    //Complete the code to calculate the sum of the five digits on n.
    long temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%ld",sum);
    return 0;
}
