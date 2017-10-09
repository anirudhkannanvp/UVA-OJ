import sys
from math import floor,sqrt
for line in sys.stdin:
    a1=list(line.split())
    #print(a1)
    a,b=int(a1[0]),int(a1[1])
    if(a==b and b==0):
        break
    print(floor(sqrt(b))-floor(sqrt(a-1)))