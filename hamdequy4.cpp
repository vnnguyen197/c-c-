//tính tong cac giai thua S(n)=x1+x2+....+x"n
#include<iostream>
using namespace std;
 int tinhtong(int x, int n){
 	int S=0;{
 	for(int i;i<=0;i++)
 	s+=pow(x,i);
 	return s;
}
int dequy(int x, int n){
	if(n==1)
	return x;
	return pow(x,n)+ dequy(x,n-1);
 }
  int main(){
  	int n;
  	cout<<"nhap n ";
  	cin>>n;
  	cout<<"s ="<<dequy(n);
}
