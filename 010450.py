t=int(input())
t1=0
a=[0]*54
a[1]=2
a[2]=3
a[3]=5
for i in range(4,54):
    a[i]=a[i-1]+a[i-2]
while(t1!=t):
    t1=t1+1
    n=int(input())
    print("Scenario #"+str(t1)+":",end="",sep="")
    print()
    print(a[n])
    print()
    