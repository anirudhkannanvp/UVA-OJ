import sys
a=[0]*1002
a[0]=0
a[1]=1
for i in range(2,1002):
    a[i]=(2*i*(2*i-1)*a[i-1])//((i+1)*i)
for line in sys.stdin:
    n=int(line)
    print(a.index(n))