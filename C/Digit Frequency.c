#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    int ans[256]={0};
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        ans[s[i]-'0']++;
    }   
    for(int i=0;i<10;i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}
