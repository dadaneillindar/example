#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a){
		int max[a];
		for(int i=0;i<=a-1;i++){
			cin>>max[i];
		}
		for(int j=0;j<=a-1;j++){
			for(int k=0;k<=a-2;k++){
			
				
				if(max[k]>max[k+1]){
					b=max[k];
					max[k]=max[k+1];
					max[k+1]=b;
				}
			}
		}
		cout<<max[a-1]<<endl;
	}
	return 0;
}

