#include<iostream>
using namespace std ;
   long int tinhgiaithua(int n){
   	   long int s=1;
    for(int i=1;i<=n;i++)
    {  s*=i;
	}
	return s ;
   }
   float tinhtohop(int k, int n){
   	return tinhgiaithua(n)/(tinhgiaithua(k)*tinhgiaithua(n-k));
   }
   int main(){
   	int n, k;
   	cin>>n; cin>>k;
cout<<"ket qua = "<< tinhtohop(k,n);
}
