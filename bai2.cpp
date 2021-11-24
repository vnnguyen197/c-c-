#include<iostream>
#include<stdio.h>
using namespace std;
int x[100], n, a[]={0,7, 5, 6};
int dem=0;
void xuat(int x[], int n){
	if(n>0){
		xuat(x,n-1);
		if(x[n]==1)cout<< a[n]<<" ";
	}
	else cout<< endl<<(++dem)<<": ";
}
void NhiPhan(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n) xuat(x,n);
		else NhiPhan(i+1);
	}
}
int main(){
	x[0]=0, n=3;
	NhiPhan(1);
}
