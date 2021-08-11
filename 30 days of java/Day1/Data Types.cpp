#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
     int a;
     cin>>a;
     double b;
     cin>>b;
     string  c;
     cin.ignore(); 
     getline(cin,c);
     cout<<i+a<<endl;
     printf("%.1lf\n",d+b);
     cout<<s+c<<endl;
    return 0;
}
