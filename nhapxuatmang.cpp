#include<iostream>
#include<math.h>
using namespace std;
#define max 100
 void nhapmang(int a[],int n){
 	for(int i=0;i<n;i++){
 		cout<<"a["<<i<<"]=";
 		cin>>a[i];
	 }
 }
 void xuatmang(int a[],int n){
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<"\t";
	 }
 }
void ThemPhanTu(int a[], int &n, int val, int pos){
    if(n<=0){
      return;
    }
    if(pos<0){
      pos=0;
    }
    else if(pos>n){
      pos=n;
    }
    for(int i=n; i>pos; i--){
      a[i]=a[i-1];
    }
    a[pos]=val;
    ++n;
}
 
void XoaPhanTu(int a[], int &n, int pos){
    if(n<=0){
        return;
    }
    if(pos<0){
        pos=0;
    }
    else if(pos>=n){
        pos=n-1;
    }
    for(int i=pos; i<n-1; i++){
        a[i]=a[i+1];
    }
    --n;
}
 int main(){
 	int a[1000];
 	int n;
 	cout<<"nhap n: ";
 	cin>>n;
 	nhapmang(a,n);
 	cout<<"-----Xuat mang-----"<<endl;
 	xuatmang(a,n);
 	cout<<"\n=====Them Phan Tu====="<<endl;
 	int val,pos;
 	cout<<"nhap vi tri can them: ";
 	cin>>val;
 	cout<<"nhap vi tri muon chen: ";
 	cin>>pos;
 	ThemPhanTu(a,n,val,pos);
 	cout<<"mang sau khi them: ";
 	xuatmang(a,n);
 	cout<<"\n===Xoa Phan Tu==="<<endl;
 	cout<<"nhap vi tri can xoa: ";
 	cin>>pos;
 	XoaPhanTu(a,n,pos);
 	cout<<"mang sau khi xoa: ";
 	xuatmang(a,n);
 	system("pause");
 	return 0;
 }
