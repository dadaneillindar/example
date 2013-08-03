#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int i;
	while(cin>>i){
	
	int eva[i][5];
	
	for(int j=0;j<=i-1;j++){
		for(int k=0;k<=3;k++){
			cin>>eva[j][k];
		}
		
	}
	for(int h=0;h<=i-1;h++){
		if(eva[h][1]-eva[h][0]==eva[h][2]-eva[h][1]){
			eva[h][4]=eva[h][3]+eva[h][2]-eva[h][1];
		}
		else{
			eva[h][4]=eva[h][3]*(eva[h][2]/eva[h][1]);
		}
		
	}
	for(int j=0;j<=i-1;j++){
		for(int k=0;k<=4;k++){
			cout<<eva[j][k]<<" ";
		}
		cout<<"\n";
	}
	
}
	
	return 0;
}


