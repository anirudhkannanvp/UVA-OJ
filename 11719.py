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
mod=10000000000000007
#print(mod)
for i in range(t):
    t=t-1
    a,b=input().split()
    a,b=int(a),int(b)
    m=(a*b)//2
    n=(a*b)-m
    ans1=power(m,n-1,mod)
    ans2=power(n,m-1,mod)
    print(int((ans1*ans2)%mod))