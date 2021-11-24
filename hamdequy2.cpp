#include<iostream>
using namespace std;
 int tinhtong(int n){
 	float s=0;
 	for(int i=1;i<=n;i++){
 		s+=1.0/2*i;
}
    return s;
}
 float dequy(int n){
 	if(n==1){
 		return 0.5;
	 }
    return 1.0/(2*n) + dequy(n-1);
}
  int main(){
  	int n;
  	cout<<"nhap n ";
  	cin>>n;
  	cout<<"s ="<<dequy(n);
}
