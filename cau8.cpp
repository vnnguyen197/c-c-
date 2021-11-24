#include<stdio.h>
#include<iostream>
using namespace std;
int n,k,x[100],d[100],dem;
int a[5]={0,7,5,6,8};
void xuat(int x[],int n){
	if(n>0){
		xuat(x,n-1);
		cout<<a[x[n]]<<" ";
	}else cout<<endl<<(++dem)<<": ";
}
void khoitao(){
	for(int i=1;i<=n;i++){
		d[i]=0;
	}
}
void HV(int i){
	for(int j=1;j<=n;j++){
		if(d[j]==0){
			x[i]=j;
			d[j]=1;
			if(i==k) xuat(x,k);
			else HV(i+1);	
			d[j]=0;
		}
	}
}
int main(){
	x[0]=0;
	cout<<"Chinh Hop Chap K cua N:\n";
	n=4;k=2;
	khoitao();
	HV(1);
}
