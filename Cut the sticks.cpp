#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkallzero(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n,i,zero=0,min;
    bool condition=true;
    cin>>n;
    int arr[n];
    int length;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(condition)
    {
        int count=0;
        int min=INT_MAX;
        
        for(i=0;i<n;i++)
        {
           // cout<<arr[i]<<" ";
            if(arr[i]<min && arr[i]>0)
            {
                min=arr[i];
            }
        }
        //cout<<min<<" ";
        length=min;
        
        for(i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                arr[i]=arr[i]-length;
                count++;
                
            }
            
             
        }
        cout<<count<<endl;
        condition=checkallzero(arr,n);
        
        
    }
    
}