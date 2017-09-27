#use zfill(13) as it is 13 digits
t=int(input())
d={'0':"0000",'1':"0001",'2':"0010",'3':"0011",'4':"0100",'5':"0101",'6':"0110",'7':"0111",'8':"1000",'9':"1001",'A':"1010",'B':"1011",'C':"1100",'D':"1101",'E':"1110",'F':"1111"}
while(t):
	t=t-1
	a,b,c=input().split()
	a,c=list(a),list(c)
	a1=[]
	a2=[]
	for i in range(len(a)):
		a1.append(d[a[i]])
	for i in range(len(c)):
		a2.append(d[c[i]])
	a3=("".join(a1))
	a4=("".join(a2))
	#print(a3)
	if(b=='+'):
		print("".join(a1).zfill(13),"+","".join(a2).zfill(13),"=",int(a3,2)+int(a4,2))
	else:
	    print("".join(a1).zfill(13),"-","".join(a2).zfill(13),"=",int(a3,2)-int(a4,2))