import sys
for line in sys.stdin:
	n=int(line)
	if(n<=-1):
		break
	a=[]
	if(n==0):
		print(0)
	else:
		while(n>0):
			a.append(str(int(n%3)))
			n//=3
		print("".join(a[::-1]))
	