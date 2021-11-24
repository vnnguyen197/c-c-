#include<iostream>
using namespace std;
int main()
{ const string pass="abc";
  string mapin;
  int solannhap=0;
  while (solannhap<=2){
  	cout<<"nhap ma pin:";
  	cin>>mapin;
  	  if(mapin==pass){
  	  	cout<<"thuc hien cac giao dich khac";
  	  	break;
  } else 
  solannhap ++;
}
  if(solannhap==3)
  cout<<"nuot the";
}
