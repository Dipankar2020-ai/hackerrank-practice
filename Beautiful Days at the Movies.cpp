#include <bits/stdc++.h>

using namespace std;
int reverse(int n)
{
    int rem,rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    return rev;
}

int main()
{
    int i,j,k,m,count=0;
    cin>>i>>j>>k;
    for(m=i;m<=j;m++)
    {
        float ans=abs(m-reverse(m));
         ans=(float)(ans/k);
        //cout<<ans<<" ";
        int h=floor(ans);
        if (ans == h)
        {
            count++;
        }
        
    }
    cout<< count;
}
