#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,n;
	while(cin>>a){
		if(a==0){
			cout<<"0"<<"\n";
		}
		else{
			n=log(a+0.5)/log(2);
			int trans[n+1];
			for(int i=0;i<=n;i++){
				trans[i]=a%2;
				a=a/2;
			}
			for(int j=n;j>=0;j--){
				cout<<trans[j];
			}
			cout<<"\n";
		}
	}	
	return 0;
}

