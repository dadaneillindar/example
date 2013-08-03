#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	while(cin>>a){
		cout<<fixed<<setprecision(3)<<5*(a-32)/9<<endl;
	}

	return 0;
}
