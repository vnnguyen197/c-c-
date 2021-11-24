#include<iostream>
using namespace std;
int main()
{ 
int a=10, b=5, c=10, d;
cout<<"Minh hoa cac phep toan tang giam"<<endl;
d=a==(b=c);
cout <<"1: a="<<a<<"b="<<b<<" c="<<
  c<<"d="<<d<<endl;
  a=b=c=5;
  a+=b+=c;
  cout<<"2 : a="<<a<<" b="<<b<<" c="<<c<<endl;
  c=a>b?a++:b++;
  cout<<"3: a="<<a<<" b="<<b<<" c="<<c<<endl;
  c=a>b?a++:b++;
  cout<<"4: a="<<a<<" b="<<b<<" c="<<c<<endl;
  
}
