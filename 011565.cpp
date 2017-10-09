#include<bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t,x,y,z,a,b,c;
	cin>>t;
while(t){
    t=t-1;
    cin>>a>>b>>c;
    int sol=0;
    for(x=-22;x<23 && sol==0;x++){
            for(y=-100;y<101 && sol==0;y++)
                if(y!=x)
                    for(z=-100;z<101 && sol==0;z++)
                        if(sol==0 && z!=x && y!=x && z!=y && x*x+y*y+z*z==c && x+y+z==a && x*y*z==b)
                            {
                            cout<<x<<" "<<y<<" "<<z<<endl;
                            sol=1;
                            }
    }
    if(sol==0)
        cout<<"No solution."<<endl;
    }
}
