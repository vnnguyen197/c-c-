#include<iostream>
using namespace std;
int main()
{	
    int a,b;
	cout<<"nhap a,b";
	cin>>a>>b;
	while(a!=b);
	if(a>b)
	a=a-b;
	else
	b=b-a;
	cout<<"uoc so chung lon nhat"<<a;
}
