#include<iostream>
using namespace std ;
 int timmax1( int a, int b){
 return a>b?a:b;
 }
 int timmax2(int a, int b, int c, int d){
 return timmax1(d, timmax1(c,timmax1(a,b)));
}
 int main(){
int a, b, c, d;
cin>>a;cin>>b;cin>>c;cin>>d;
cout<<"so lon nhat trong 4 so = "<<timmax2(a,b,c,d);
 }
