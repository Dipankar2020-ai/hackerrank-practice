#include<iostream>
using namespace std;
int main()
{
    int n,i,d,m,j,sum=0,count,count1=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;
    
    for(i=0;i<n-m+1;i++)
    {
        count=i;
        sum=0;
        while(count!=m+i)
        {
            sum=sum+arr[count];
            count++;
        }
       // cout<<count<<" ";
        if(sum==d)
        {
            count1++;
        }
    }
    cout<<count1;
    
}