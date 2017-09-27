#include<bits/stdc++.h>
#include<bitset>

using namespace std;

typedef long long int ll;
typedef  vector<int>  vi;

ll _sieve_size;
bitset<100000> bs;
vi primes;
vi nodf;

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

ll numdiv(ll N){
ll PF_idx=0,PF=primes[PF_idx],ans=1;

while(PF * PF <=N){
ll power=0;
while(N%PF==0){N/=PF;power+=1;}
ans*=(power+1);
PF=primes[++PF_idx];
}
if(N!=1) ans*=2;
return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve(100000);
    ll t,l,u,i,st,first;
    nodf.push_back(1);
    for(i=1;i<=100000;i++)
    nodf.push_back(numdiv(i));
    cin>>t;
    while(t--){
        cin>>l>>u;
        st=0,first=0;
        for(i=l;i<=u;i++){
        if(bs[nodf[i]])
        {
                        st=1;
        if(st==1 && first==1)
        cout<<" "<<i;
            if(first==0)
            {
            cout<<i;
            first=1;
            }
        }
        }
        if(st==0)cout<<"-1\n";
        else
        cout<<"\n";
        
    }
return 0;
}

