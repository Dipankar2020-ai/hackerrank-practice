#include <bits/stdc++.h>
using namespace std;
void reverse(int* arr,int i,int j)
{
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main()
{
   long int n,d;
    cin>>n>>d;
    int arr[100000];
    for(long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(long int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
