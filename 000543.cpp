#include<bits/stdc++.h>
#include<bitset>

using namespace std;

typedef long long int ll;
typedef  vector<int>  vi;

ll _sieve_size;
bitset<10000000> bs;
//vi primes;

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
       // primes.push_back(i);
    }
}
return;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve(10000000);
    ll a,a1,a2;
    int st,i,j,size;
    size=10000000;
    while(true){
        cin>>a;
        if(a==0)break;
        for(i=3;i<a;i++)
        {
            st=0;
            //a1=primes[i];
            a1=i;
            if(bs[i])
            {
                a2=a-a1;
                if(bs[a2]){
                cout<<a<<" = "<<a1<<" + "<<a2<<"\n";
                break;
                }
             }
          }
            }
    return 0;
}

