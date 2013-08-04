#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a;
	while(cin>>a){
		if(a==0){
			break;
		}
		else{
			for(int i=1;i<a;i++){
				if((i%7)==0){
				 	continue;
				}
				else{
					cout<<i<<' ';
				}
			}
			cout<<endl;
		}
	}
 	return 0;
}

