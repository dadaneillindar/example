#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{    
	int M,D,S;
	while(cin>>M>>D){	
	    S=(M*2+D)%3;
	    if(S==0){
	    	cout<<"���q\n"; 
	    }
		else if(S==1){
	    	cout<<"�N\n"; 
	    }
		else{
			cout<<"�j�N\n"; 
		}
	}
	return 0;
}
