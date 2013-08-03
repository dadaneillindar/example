#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,S,A;
	while(cin>>a>>b>>c){
		S=(a+b+c)/2;
		A=sqrt((S*(S-a)*(S-b)*(S-c))+0.6);
		cout<<(int)pow(A,2)<<endl;
	}

	return 0;
}


