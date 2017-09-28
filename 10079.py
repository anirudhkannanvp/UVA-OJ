import sys
for line in sys.stdin:
    n=int(line)
    if(n<0):
        break
    else:
        print((n*(n+1))//2+1)