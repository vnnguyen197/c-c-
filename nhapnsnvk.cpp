#include<iostream>
using namespace std;
#define max 100
 void nhapmang(int a[],int n){
 	for(int i=0;i<n;i++){
 		cout<<"a["<<i<<"]=";
 		cin>>a[i];
	 }
 }
 void xuatmang(int a[], int n){
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<"\t";
	 }
 }
 int main(){
 	int a[100];
 	int n;
 	cout<<"nhap n: ";
 	cin>>n;
 	nhapmang(a,n);
 	cout<<"----------Xuat Mang----------"<<endl;
 	xuatmang(a,n);
 	system("pause");
 	return 0;
 }
