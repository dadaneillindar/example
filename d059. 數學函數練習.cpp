#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		cout<<pow(a,b)<<endl;
		cout<<fixed<<setprecision(3)<<sqrt(c)<<endl;
		cout<<abs(d)<<endl;
		cout<<(e+f)/2<<endl;
	}
	return 0;
}


