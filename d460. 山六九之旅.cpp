#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a){
		if(a<6){
			cout<<0<<endl;
		}
		else if(a<12){
			cout<<590<<endl;
		}
		else if(a<18){
			cout<<790<<endl;
		}
		else if(a<60){
			cout<<890<<endl;
		}
		else{
			cout<<399<<endl;
		}
	}

	return 0;
}


