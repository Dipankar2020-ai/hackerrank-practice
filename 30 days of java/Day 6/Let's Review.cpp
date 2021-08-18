#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string m1="";
        string m2="";
        for(int i=0;i<s.length();i=i+2)
        {
            m1=m1+s[i];
        }
        for(int i=1;i<s.length();i=i+2)
        {
            m2=m2+s[i];
        }
        cout<<m1<<" "<<m2<<endl;
        
    }

    return 0;
}
