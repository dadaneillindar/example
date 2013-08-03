#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a){
		for(int i=1;i<=a;i++){
			cin>>b;
			if(b%4==0){
				if(b%100==0&&b%400!=0){
					cout<<"Case "<<i<<": "<<"a normal year"<<endl;
				}
				else{
					cout<<"Case "<<i<<": "<<"a leap year"<<endl;
				}
			}
			else{
				cout<<"Case "<<i<<": "<<"a normal year"<<endl;
			}
		}
	}

	return 0;
}

