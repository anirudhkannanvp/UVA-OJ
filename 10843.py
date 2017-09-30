def power(a,b,c):
    res=1
    if(a==1):
        return res
    while(b):
        if(b&1):
            res=(res%c*a%c)%c
            b-=1
        else:
            a=(a%c*a%c)%c;
            b>>=1
    return res
t=int(input())
for i in range(t):
    t=t-1
    n=int(input())
    print("Case #",end="",sep="")
    print(i+1,end="",sep="")
    print(": ",end="",sep="")
    if(n==1 or n==2):
        print(1)
    else:
        ans=power(n,n-2,2000000011)
        print(int(ans))