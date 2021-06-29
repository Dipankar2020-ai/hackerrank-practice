#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count[101]={0};
    //sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(i=0;i<101;i++)
    {
       // cout<<count[i]<<" ";
        if(count[i]>=2)
        {
            int ans=count[i]/2;
            sum=sum+ans;
        }
    }
    cout<<sum;
    
   
    
   
    
}