a=[0]*52
a[1]=1
a[2]=2
for i in range(3,52):
    a[i]=a[i-1]+a[i-2]
while(True):
    n=int(input())
    if(n==0):
        break
    else:
        print(a[n])