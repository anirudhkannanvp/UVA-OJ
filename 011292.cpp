#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	int n,m,d,k,gol,i;
	int dragon[100000],knight[100000];
	while(cin>>n>>m){
	    if(n==0 && m==0)
	    break;
	    for(i=0;i<n;i++)
	    cin>>dragon[i];
	    for(i=0;i<m;i++)
	    cin>>knight[i];
	    sort(dragon,dragon+n);
	    sort(knight,knight+m);
	    d=k=gol=0;
	    while(d<n && k<m){//
	        while(dragon[d]>knight[k] && k<m)k++;//GO TO THAT PARTICULAR MINIMUM KNIGHT
	        if(k==m)break;//IF NO KNIGHT EXISTS BREAK;
	        gol+=knight[k];
	        d++;k++;
	    }
	    if(d==n)//ALL DRAGONS ARE KILLED
	    cout<<gol<<"\n";
	    else
	    cout<<"Loowater is doomed!"<<"\n";
	}
	return 0;
}
