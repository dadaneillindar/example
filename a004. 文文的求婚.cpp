#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{    
	int a;
	while(cin>>a){
		if((a%4)==0){
			if((a%100)==0&&(a%400)!=0){
			cout<<"平年\n"; 
			}
			else{
			cout<<"閏年\n"; 
			}
		}
		else{
			cout<<"平年\n"; 
		}
	}	
	return 0;
}


