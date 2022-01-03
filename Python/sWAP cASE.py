def swap_case(s):
    l=len(s)
    ans=""
    for i in range(0,l):
        if(s[i]=="."):
            pass
        if(ord(s[i])>=97):
            ans=ans+(s[i].upper())
        else:
            ans=ans+s[i].lower()
            
    return ans

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
