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
 void chen(int x, int p, int a[], int &n){
 	for(int i=n; i>=p; i--)
 	    a[i+1] = a[i];
 	a[p]=x;
 	n++;
 }
 void chenDQ(int x, int p, int a[], int &n){
 	if(n>=p){
 		a[n+1] = a[n];
 		int b = n-1;
 		chenDQ(x,p,a,b);
	} 
	else a[p]=x;
	n++;
 }
 int main(){
 	int x[100], n;
 	nhapMang(x,n);
 	cout<<endl;
 	xuatDQ(x,n);
 	int a, k;
 	cout<<"\nNhap vi tri can chen: ";
 	cin>>a>>k;
 	chen(a,k,x,n);
 	xuatDQ(x,n);
 	
 }
