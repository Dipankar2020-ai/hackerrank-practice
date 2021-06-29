#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int budget,i,j,max=INT_MIN;
    bool ans=false;
    cin>>budget;
   long long int n,m;
    cin>>n>>m;
    long long int arr[n],brr[m];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i]+brr[j]<=budget && arr[i]+brr[j]>max)
            {
                max=arr[i]+brr[j];
                ans=true;
            }
            
        }
    }
    if(ans)
    {
        cout<<max;
    }
    else
    {
        cout<<-1;
    }
    

}