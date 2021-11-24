#include<iostream>
using namespace std;
void nhap(int A[],int &n)
{ 
cout<<"nhap n";
cin>>n;
for(int i=0;i<n;i++)
{ cout<<"A["<<i<<"]=";
cin>>A[i];
}
}
void xuat(int A[],int n)
{ 
for (int i=0;i<n;i++)
cout<<A[i]<<" ";
cin>>n;
}
man()
{
	int A[10],B[10],n,m;
	nhap(A,n); nhap(B,m);
		xuat(A,n); xuat(B,m);
}
