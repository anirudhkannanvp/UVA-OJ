//UVA 102-ECOLOGICAL BIN PARKING

#include <bits/stdc++.h>
using namespace std;

long int func(long int a,long int b,long int c,long int bottles[12])
{
    long int m=0,i;
    for(i=0;i<9;i++)
    {
        if(i!=a && i!=b && i!=c)
        {
            m+=bottles[i];
        }
    }
    return m;
}

int main() {
	ios_base::sync_with_stdio(false);
	long int bottles[12],i,movements[9];
	char movestr[9][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};//MAINTAIN THIS ORDER AS IT SHOULD BE PRINTED ALPHABETICALLY
	    // Brown index : 0 3 6
        // Green index : 1 4 7
        // Clear index : 2 5 8
	while(cin>>bottles[0])
	{
	    for(i=1;i<9;i++)
	    cin>>bottles[i];
	    
        movements[0]=func(0,5,7,bottles);//BCG
        movements[1]=func(0,4,8,bottles);//BGC
        movements[2]=func(2,3,7,bottles);//CBG
        movements[3]=func(2,4,6,bottles);//CGB
        movements[4]=func(1,3,8,bottles);//GBC
        movements[5]=func(1,5,6,bottles);//GCB
        long int min1=movements[0],j=0;
        for(i=1;i<6;i++){
            if(min1>movements[i])
            {
                min1=movements[i];
                j=i;
            }
            
        }
        cout<<movestr[j]<<" "<<min1<<endl;
	    
	}
	return 0;
}
