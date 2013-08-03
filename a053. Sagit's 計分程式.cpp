#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{	
	int a;
	while(cin>>a){
		if(a<=10){
			cout<<a*6<<endl;
		}
		else if(a<=20){
			cout<<2*a+40<<endl;
		}
		else if(a<=40){
			cout<<60+a<<endl;
		}
		else{
			cout<<100<<endl;
		}
	}

	return 0;
}

