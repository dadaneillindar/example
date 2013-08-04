#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	int i;
	while(cin>>i){
		int arr[3]={0};
		int a[i];
		for(int l=0;l<=i-1;l++){
			cin>>a[l];
			a[l]%=3;
			if(a[l]==0){
				arr[0]+=1;
			}
			else if(a[l]==1){
				arr[1]+=1;
			}
			else{
				arr[2]+=1;
			}
		}
		cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2];
	}

 	return 0;
}

