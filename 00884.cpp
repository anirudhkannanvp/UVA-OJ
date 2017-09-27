#include<bits/stdc++.h>
#include<bitset>

using namespace std;

typedef long long int ll;
typedef  vector<int>  vi;

ll _sieve_size;
bitset<1000005> bs;
vi primes;
vi nopf;
vi nopfans;

void sieve(ll upper){
_sieve_size=upper+1;

bs.set();
bs[0]=bs[1]=0;

for(ll i=2;i<=_sieve_size;i++){
    if(bs[i]){
        for(ll j=2*i;j<=_sieve_size;j+=i)
        {
            bs[j]=0;
        }
       primes.push_back(i);
    }
}
return;
}

ll numPF(ll N){
ll PF_idx=0,PF=primes[PF_idx],ans=0;
while(PF * PF <=N){
ll power=0;
while(N%PF==0){N/=PF;ans+=1;}
PF=primes[++PF_idx];
}
if(N!=1) ans+=1;
return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve(1000005);
    ll t,l,u,i,ans,a;
    nopf.push_back(0);
    for(i=1;i<=1000005;i++)
    nopf.push_back(numPF(i));
    nopfans.push_back(0);
    nopfans.push_back(0);
    for(i=2;i<=1000004;i++)
    nopfans.push_back(nopf[i]+nopfans[i-1]);
    while(cin>>a){
        cout<<nopfans[a]<<endl;
    }
    
return 0;
}

