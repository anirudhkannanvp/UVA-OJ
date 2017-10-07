#UVA 11369
t=int(input())
while(t):
    t=t-1
    n=int(input())
    a=list(map(int,input().split()))
    amo=0
    a.sort(reverse=True)
    for i in range(n):
        if(i%3==2):
            amo+=a[i]
    print(amo)