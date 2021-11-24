#include<iostream>
using namespace std;
int x[100], n, dem=0, D[100];
void xuat(int x[], int n){
	if(n>0){
		xuat(x,n-1);
		cout<<x[n];
	}else cout<<endl<<(++dem)<<":";
} 
void khoiTao(){
	for(int i=1; i<=n; i++) D[i]=0;
}
void HoanVi(int i){
	for(int j=1; j<=n; j++){
		if(D[j]==0){
			x[i]=j;
			if(i==n) xuat(x,n);
			else HoanVi(i+1);
		}
	}
}
int main(){
	cout<<"nhap n>0: ";
	cin>>n;
	khoiTao();
	HoanVi(1);
}
