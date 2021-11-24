#include<iostream>
using namespace std;
 int snt(int n)
{  
 int k=2;
 while(n%k!=0)
   k++;
 if(k==n)
   return 1;
  else
   return 0;
}
main()
{
	int i;
  for(i=1;i<99999;i++)
    if(snt(i)==1)
     cout<<i<<" ";
}
 
