#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a;
	while(a){
		cin>>a;
		if(a!=0){
		
			if(a%4==0){
				if(a%100==0&&a%400!=0){
					cout<<"a normal year"<<endl;
				}
				else{
					cout<<"a leap year"<<endl;
				}
			}
			else{
				cout<<"a normal year"<<endl;
			}
		}
	}

	return 0;
}

