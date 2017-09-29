import sys
a=[0]*1002
a[0]=1
a[1]=1
a[2]=1
for i in range(3,1002):
    a[i]=(3*(2*i-3)*a[i-1]-(i-3)*a[i-2])//i
b=[0]*1002
b[0]=1
b[1]=1
b[2]=2
for i in range(3,1002):
    b[i]=(2*i*(2*i-1)*(b[i-1]))//((i+1)*i)
for line in sys.stdin:
    n=int(line)
    if(n<3):
        print(0)
    else:
        print(a[n]-b[n-1])