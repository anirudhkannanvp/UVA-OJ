t=int(input())
while(t):
    t=t-1
    a,b=input().split()
    a,b=int(a),int(b)
    if(b%a==0):
        print(a,b,sep=" ")
    else:
        print("-1")
        