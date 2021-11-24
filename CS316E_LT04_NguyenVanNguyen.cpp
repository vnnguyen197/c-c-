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
void DaoMang(int a[],int n)
{
   for(int i=1; i<n/2; i++)
{
    int index = n - i - 1;
    int tmp = a[index];
    a[index] = a[i];
    a[i] = tmp;

   }
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
 	DaoMang(x,n);
    cout<<"\nMang bay gio la: ";
	xuatDQ(x,n);
 	int a, k;
 	cout<<"\nNhap vi tri can chen: ";
 	cin>>a>>k;
 	chenDQ(a,k,x,n);
 	cout<<"\nNhap vi tri can xoa: ";
 	cin>>a>>k;
	xoaDQ(k,x,n);
	xuatDQ(x,n);
}
