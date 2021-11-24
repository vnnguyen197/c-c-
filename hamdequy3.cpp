#include<iostream>
using namespace std;
 int tinhtong(int n){
 	float s=0;
 	for(int i=1;i<=n;i++){
 		s+=i*i;
}
    return s;
}
 int giaithua(int n){
 	if(n==1){
 		return 1;
	 }
    return n*giaithua(n-1);
}
 float dequy(int n){
 	if(n==1)
 	return 1;
 	return giaithua(n)+ dequy(n-1);
 }
  int main(){
  	int n;
  	cout<<"nhap n ";
  	cin>>n;
  	cout<<"s ="<<dequy(n);
}
