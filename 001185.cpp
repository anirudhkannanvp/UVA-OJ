#include <bits/stdc++.h>
using namespace std;

double a[10000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i;
	
	a[0]=a[1]=1;
	for(i=2;i<=10000001;i++)
	a[i]=a[i-1]+log10(i);
	
	int t,n;
	while(cin>>t){
	while(t--){
	    cin>>n;
	    cout<<(int)a[n]<<"\n";
	}
	}
	return 0;
}
