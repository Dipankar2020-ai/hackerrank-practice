#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int ans=0;
  for(int i=3;i<=n;i++)
  {
      ans=a+b+c;
      a=b;
      b=c;
      c=ans;      
      
  }
  return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
