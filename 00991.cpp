#include<bits/stdc++.h>
using namespace std;
 
long long int factorial(long long int n)
{
	if(n==1) return 1;
	return n*factorial(n-1);
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i=0,n;
	while(cin>>n){
	if(i)cout<<"\n";
	i=1;
	cout<<factorial(2*n)/(factorial(n)*factorial(n)*(n+1))<<"\n";
	}
return 0;
}
