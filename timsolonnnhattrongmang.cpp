#include <iostream>
using namespace std;
void Nhap(int A[],int &n)
{
	cout<<"Nhap n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]=";
		cin>>A[i];
	}	
}	
void Xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
}
     int max(int A[],int n)
	{
	int m=A[0];
    for (int i=1;i<n;i++)
    if(m<A[i])
    m=A[i];
    return m;
	}	
  main()
  {
  	int A[10],n;
  	Nhap(A,n);
  	Xuat (A,n);
  	cout<<"so lon nhat"<<max(A,n);  
  }
  
