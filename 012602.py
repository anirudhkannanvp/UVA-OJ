#uva 12602
t=int(input())
while(t):
    t=t-1
    a=list(input().split("-"))
    a1=a[0]
    a2=int(a[1])
    s=0
    s+=(ord(a1[2])-65)+((ord(a1[1])-65)*26)+((ord(a1[0])-65)*676)
    if(abs(s-a2)<=100):
        print("nice")
    else:
        print("not nice")