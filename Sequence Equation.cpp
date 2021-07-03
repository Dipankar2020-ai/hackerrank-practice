#include<iostream>
using namespace std;
int main()
{
    int i,n,x=1;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        int j=1;
       while(x!=arr[j])
       {
           j++;
       }
       int m=1;
       while(j!=arr[m])
       {
           m++;
       }
       cout<<m<<endl;
       x++;
        
    }
    
}