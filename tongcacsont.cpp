#include <iostream>
using namespace std;
main()
 {
 	int n,a[10],i;
 	cout<<" nhap bao nhieu phan tu";
 	cin>>n;
 	for(i=0;i<n;i++)
 	{
	 cout<<"a["<<i<<"]";
 	cin>>a[i];
 	}
 	cout<<"mang vua nhap";
 	for(i=0;i<n;i++)
 	cout<<a[i]<<" ";
 	int S=0;
 	for(i=0;i<n;i++)
 	{
 		int k=2;
 		while(a[i]%k!=0)
 		k++;
 		if(a[i]==k)
 		S=S+a[i];
 	}
	 cout<<"tong cac so nt"<<S;
 }	 
