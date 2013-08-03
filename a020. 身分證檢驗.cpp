#include<iostream>
#include<cstdlib> 
using namespace std;
int main()
{
char id[10];
while(cin>>id)
{
int sum=0;
switch(id[0])
{
 case 'A':
      sum+=1;
      break;            
 case 'B':
      sum+=10;
      break;            
 case 'C':
      sum+=19;
      break;           
 case 'D':
      sum+=28;
      break;
 case 'E':
      sum+=37;
      break;            
 case 'F':
      sum+=46;
      break;            
 case 'G':
      sum+=55;
      break;            
 case 'H':
      sum+=64;
      break;            
 case 'I':
      sum+=39;
      break;            
 case 'J':
      sum+=73;
      break;            
 case 'K':
      sum+=82;
      break;            
 case 'L':
      sum+=2;
      break;            
 case 'M':
      sum+=11;
      break;            
 case 'N':
      sum+=20;
      break;            
 case 'O':
      sum+=48;
      break;            
 case 'P':
      sum+=29;
      break;            
 case 'Q':
      sum+=38;
      break;            
 case 'R':
      sum+=47;
      break;            
 case 'S':
      sum+=56;
      break;            
 case 'T':
      sum+=65;
      break;            
 case 'U':
      sum+=74;
      break;            
 case 'V':
      sum+=83;
      break;            
 case 'W':
      sum+=21;
      break;            
 case 'X':
      sum+=3;
      break;            
 case 'Y':
      sum+=12;
      break;            
 case 'Z':
      sum+=30;
      break;                   
}           
for(int i=1;i<=8;i++)
{
       sum+=(id[i]-48)*(9-i);
}
sum+=(id[9]-48);
((sum%10)==0)?cout<<"real":cout<<"fake";
cout<<"\n";
}

    return 0;
}


