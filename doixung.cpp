#include <iostream>
using namespace std;
main()
{
for(int i=1;i<=900;i++)
{
 		int m,k;
 		k=i;
 		m=0;
while(k>0)
{
 m=10*m+k%10;
 k=k/10;
	}
	if(i==m)
	cout<<"  "<<i;
	}
	}
	 	
