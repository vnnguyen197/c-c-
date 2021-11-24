#include<iostream>
using namespace std;
int main()
{ 
int m=3, n=5;
int a1, a2, a3, a4, a5;
float x1, x2, x3, x4;
cout<<"Tim gia tri cac bien"<<endl;
a1=m,n;
a2=m==n;
a3=n%m+n>m;
a4=m*(n>m?m:n);
a5=m*(n<m?n:n);
x1=n/m;
x2=(float)n/m;
x3=(n+0.5)/m;
x4=(int)(n+0.5)/m;
cout<<"\na1="<<a1<<endl;
cout<<"a2="<<a2<<endl;
cout<<"a3="<<a3<<endl;
cout<<"a4="<<a4<<endl;
cout<<"a5="<<a5<<endl;
cout<<"x1="<<x1<<endl;
cout<<"x2="<<x2<<endl;
cout<<"x3="<<x3<<endl;
cout<<"x4="<<x4<<endl;
}
