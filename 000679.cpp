#include<bits/stdc++.h>
using namespace std;

int last;

int search(int at,int balls){
    int left=2*at;
    int right=left+1;
    if(left<=last && right<=last){
        if(balls%2)return search(left,balls/2+1);
        else return search(right,balls/2);
    }
    else{
        return at;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    int d;
    cin>>tt;
    while(tt--){
        int i;
        cin>>d>>i;
        int lastnodenum=pow(2,d)-1;
        last=lastnodenum;
        //cout<<last<<endl;
        cout<<search(1,i)<<"\n";
    }
    cin>>d;
return 0;
}