from fractions import gcd
t=int(input())
while(t):
    t=t-1
    a=list(map(int,input().split()))
    n=len(a)
    ans=0
    for i in range(n-1):
        for j in range(i+1,n):
            ans=max(ans,gcd(a[i],a[j]))
    print(ans)