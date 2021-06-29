#include<iostream>
using namespace std;
int main()
{
    int n,p,i=1;
    cin>>n>>p;
    int count=0,count1=0;
    if(n%2==1)
    {
        n=n-2;
      while(p<=n)
     {
         count++;
         n=n-2;
     }
    }
    else
    {
        while(p<n)
        {
            count++;
            n=n-2;
        }
    }
   
    while(p>i)
    {
        count1++;
        i=i+2;
    }
    int ans=count1>count?count:count1;
    cout<<ans;
    
    
}