#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            long long int a,b,c;
            cin>>a>>b>>c;
            if(a==1)
            {
                cout<<b+c<<endl;
            }
            else if(a==2)
            {
                cout<<b-c<<endl;
            }
            else if(a==3)
            {
                cout<<b*c<<endl;
            }
            else
            {
                cout<<b/c<<endl;
            }    
        }
    }
    
    return 0;
}

