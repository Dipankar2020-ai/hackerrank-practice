#include<iostream>
using namespace std;
int main()
{
    int n,i,j,max=0,pos=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count[10]={0};
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
       // cout<<count[i]<<" ";
       if(count[i]>max)
       {
           max=count[i];
           pos=i;
       }
        
    }
   cout<< pos;
           
}