#include<bits/stdc++.h>
#include<bitset>

using namespace std;

typedef long long int ll;

int gcd(int a,int b){
return b==0 ? a : gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i,j,g,n;
    while(true){
    cin>>n;
    g=0;
    if(n==0)break;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++)
        g+=gcd(i,j);
    }
    cout<<g<<endl;
    }
   return 0;
}

