#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int a1[100],i,a,b,c,d,e,f,n,c1=0;
    while(1){
        cin>>n;
        if(n==0)
        break;
        if(c1!=0)
        cout<<endl;
        c1=1;
        for(i=0;i<n;i++)
            cin>>a1[i];
        for(a=0;a<n-5;a++){
            for(b=a+1;b<n-4;b++){
                for(c=b+1;c<n-3;c++){
                    for(d=c+1;d<n-2;d++){
                        for(e=d+1;e<n-1;e++){
                            for(f=e+1;f<n;f++){
                                cout<<a1[a]<<" "<<a1[b]<<" "<<a1[c]<<" "<<a1[d]<<" "<<a1[e]<<" "<<a1[f];
                                cout<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
return 0;
}