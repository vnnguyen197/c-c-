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
 int dx(int n)
{
 int m,k;
 k=n;
 m=0;
 while(k>0)
 { m=10*m + k%10;
   k=k/10;
 }
 if(n==m)
   return 1;
  else
   return 0;
}
 int tong(int n)
  { 
     int a=0,b=0,c=0,d=0,e=0;
     a=n/10000;
     b=n%10000/1000;
     c=n%1000/100;
     d=n%100/10;
     e=n%10;
     int s=a+b+c+d+e;
     return s;
   }
int sonut(int b)
{    
    int nut;
    nut=tong(b);
    while(nut>10)
    {
    nut=tong(nut);
    }
    return nut;
}   
main()
{
	int i;
  for(i=10000;i<=99999;i++)
    if((snt(i)==1)&&(dx(i)==1)&&(nut(i)>=8))
     cout<<i<<" ";  
}

 
