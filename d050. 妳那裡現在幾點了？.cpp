#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a){
		if(a<=14){
			cout<<a+9<<endl;
		}
		else{
			cout<<a-15<<endl;
		}
	}

	return 0;
}

