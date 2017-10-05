#include<bits/stdc++.h>
#include<bitset>

using namespace std;

typedef long long int ll;
typedef  vector<int>  vi;

ll _sieve_size;
bitset<1000000> bs;
vi primes;

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
    sieve(1000000);
    ll m,n,p,i,ca;
    ca=0;
    while(cin>>m>>n>>p){
                ca++;
                if(m==n && n==p && p==0)
                break;
                cout<<"Case "<<ca<<": "<<2*numdiv(abs(m*n*p*p))-1<<"\n";
                }return 0;
}

