#include<stdio.h>
#include<iostream>
using namespace std;
int a[]={5,6,3},dem=0,n,D[100],x[100];
void xuat(int x[],int n){
	if(n>0){
		xuat(x,n-1);
		cout<<a[x[n]]<<" ";
	}
	else cout<<endl<<(++dem)<<": ";
}
void khoiTao(){
	for(int i=1; i<=n; i++) D[i]=0;
}
void HV(int i){
	for(int j=1; j<=n; j++){
		if(D[j]==0){
			x[i]=j;
			D[j]=1;
			if(i==n) xuat(x,n);
			else HV(i+1);
			D[j]=0;
		}
	}
}
int main(){
	x[0]=5,n=3;
	khoiTao();
	HV(1);
}




