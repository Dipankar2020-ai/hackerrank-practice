#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j;
  int max1=0,max2=0,max3=0;
  int and,or,xor;
  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          and=i&j;
          or=i|j;
          xor=i^j;
          if(and>max1 && and<k)
          {
              max1=and;
          }
          if(or>max2 && or<k)
          {
              max2=or;
          }
          if(xor>max3 && xor<k)
          {
              max3=xor;
          }
          
      }
  }
  printf("%d\n",max1);
  printf("%d\n",max2);
  printf("%d\n",max3);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
