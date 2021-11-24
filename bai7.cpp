#include<stdio.h>
#include<iostream>
using namespace std;
int x[100],n,k,dem;
int a[]={0,7,5,6,8};
void xuat(int x[],int n){
	if(n>0){
		xuat(x,n-1);
		cout<<a[x[n]]<<" ";
	}
	else cout<<endl<<(++dem)<<": ";
}
void ToHop(int i){
	for(int j=x[i-1]+1;j<=n;j++){
		x[i]=j;
		if(i==k) xuat(x,k);
		else ToHop(i+1);
	}
}
main(){
	x[0]=0;n=4;
	cout<<"nhap k: ";
	cin>>k;
	ToHop(1);
}
