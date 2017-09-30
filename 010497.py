from math import pow
d=[0]*805
d[0]=1
d[1]=0
d[2]=1
for i in range(3,805):
    temp=int(i%2)
    if(temp==0):
        d[i]=d[i-1]*i+1
    else:
        d[i]=d[i-1]*i-1
    d[i]=int(d[i])
while(True):
    n=int(input())
    if(n==-1):
        break
    else:
        print(d[n])