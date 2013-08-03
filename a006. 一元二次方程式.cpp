#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c;
	
	while(cin>>a>>b>>c){
		
		if(pow(b,2)-4*a*c>0){
			cout<<"Two different roots x1=";
			cout<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<" , x2=";
			cout<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<"\n";
			
		}
		else if(pow(b,2)-4*a*c<0){
			cout<<"No real root\n" ;
		} 
		else{
			cout<<"Two same roots x=";
			if((-b/(2*a))==-0){
				cout<<0<<"\n";
			}
			else{
				cout<<-b/(2*a)<<"\n";
			}
			
		}

		}
	return 0;
}


