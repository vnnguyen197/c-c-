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
 void timX(int x, int a[], int n){
 	for(int i=1; i<=n; i++)
 	    if(a[i]==x) return i;
 	return 0;
 }
 void timXDQ(int x, int a[], int n){
 	if(n==0) return 0;
 	else if(a[n]==x) return n;
 	else return timXDQ(x, a, n-1);
 	
 int main(){
 	int x[100], n;
 	nhapMang(x,n);
 	cout<<endl;
 	xuatDQ(x,n);
 	int a, k;
 	cout<<"\nNhap vi tri can tim: ";
 	cin>>a>>k;
 	timXDQ(a,x,n);
 	xuatDQ(x,n);
 	
 }
