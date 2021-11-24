#include<iostream>
using namespace std;
#define max 100
void nhapMang(int a[], int &n){
	cout<<"Nhap n>0:";cin>>n;
	cout<<"Nhap "<<n<<" so:"<<endl;
	for(int i=1;i<=n;i++)
		cin>>a[i];
} 

void xuatDQ(int a[], int n){
	if(n>0){
		xuatDQ(a,n-1);
		cout<<a[n]<<" ";
	}
}
void xoa(int k, int a[], int &n){
	for(int i=k; i<n; i++)
	   a[i] = a[i+1];
	n--;
}
void xoaDQ(int k, int a[], int &n){
	if(k<n){
		a[k]=a[k+1];
		xoaDQ(k+1,a,n);
	}
	else n--;
}
int main(){
	int x[100], n;
 	nhapMang(x,n);
 	cout<<endl;
 	xuatDQ(x,n);
 	int a, k;
 	cout<<"\nNhap vi tri can: ";
 	cin>>a>>k;
	xoaDQ(k,x,n);
	xuatDQ(x,n);
}
