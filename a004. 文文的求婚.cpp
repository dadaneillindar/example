#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{    
	int a;
	while(cin>>a){
		if((a%4)==0){
			if((a%100)==0&&(a%400)!=0){
			cout<<"���~\n"; 
			}
			else{
			cout<<"�|�~\n"; 
			}
		}
		else{
			cout<<"���~\n"; 
		}
	}	
	return 0;
}


