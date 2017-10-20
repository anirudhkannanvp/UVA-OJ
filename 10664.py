def func(W, wt, val, n):
    K = [[0 for x in range(W+1)] for x in range(n+1)]
    for i in range(n+1):
        for w in range(W+1):
            if(i==0 or w==0):
                K[i][w] = 0
            elif(wt[i-1]<= w):
                K[i][w]=max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w])
            else:
                K[i][w]=K[i-1][w]
    return K[n][W]
t=int(input())
while(t):
    t-=1
    a=list(map(int,input().split()))
    m=len(a)
    b=[]
    sum1=0
    for i in range(m):
        b.append(a[i])
        sum1+=a[i]
    if(sum1%2==1):
        print("NO")
    else:
        w=sum1//2
        ans=func(w,a,b,m)
        if(ans==w):
            print("YES")
        else:
            print("NO")