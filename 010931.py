import sys
for line in sys.stdin:
    line=int(line)
    if(line==0):
        break
    #print(bin(line)[2:])
    a=list(bin(line)[2:]).count('1')
    print("The parity of ",sep="",end="")
    print(bin(line)[2:],end="",sep="")
    print(" is ",sep="",end="")
    print(a,end="",sep="")
    print(" (mod 2).",sep="",end="\n")