import sys
from math import pow
for line in sys.stdin:
	if(int(line)==0):
		break
	a=list(line)[0:-1][::-1]
	#print(a)
	k=1
	ans=0
	for i in range(len(a)):
		ans+=(int(a[i])*(pow(2,k)-1))
		k+=1
	print(int(ans))
	
	