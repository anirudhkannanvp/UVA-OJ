import sys
from fractions import gcd
for line in sys.stdin:
    a=list(map(int,line.split()))
    #print(a)
    if(a==[0]):
        break
    a=a[0:len(a)-1]
    #print(a)
    ans=0
    a.sort()
    for i in range(1,len(a)):
        ans=gcd(ans,a[i]-a[i-1])
    print(ans)