#include<bits/stdc++.h>
using namespace std;
int main() {
  
int n, i, j, first = 0;
while(cin>>n) {
if(first)   cout<<"\n";
first = 1;
cout<<"n="<<n<<", sum="<<n*(n*n+1)/2<<"\n";
int sqr[20][20], x = 0, y = n/2;
memset(sqr, 0, sizeof(sqr));
for(i = 1; i <= n*n; i++) {
    if(sqr[x][y]) {
        x+=2, y--;
            if(x>=n) x -= n;
            if(y<0) y += n;
				sqr[x][y] = i;
			} else
				sqr[x][y] = i;
			x--, y++;
			if(x < 0)	x += n;
			if(y >= n)	y -= n;

		}
if(n*n <= 9) {
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%2d", sqr[i][j]);
    cout<<"\n";
    }
}
else if(n*n >= 10 && n*n <= 100) {
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%3d", sqr[i][j]);
		
    cout<<"\n";
    }
}
else {
    for(i = 0; i < n; i++){
                for(j = 0; j < n; j++)
                    printf("%4d", sqr[i][j]);
    cout<<"\n";}
}
}
    return 0;
}