#11805
t=int(input())
k1=0
while(t):
    t=t-1
    n,k,p=input().split()
    n,k,p=int(n),int(k),int(p)
    k=k-1#CHANGING TO ZERO BASED ARRAY
    ans=(k+p)%n
    print("Case ",end="",sep="")
    print(k1+1,end="",sep="")
    print(": ",end="",sep="")
    k1+=1
    print(ans+1)#PRINTING IN 1 BASED
    