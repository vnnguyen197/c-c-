#include<iostream>
#include<iomanip>
#define max 20
using namespace std;
typedef struct
{  char bienso[20];
   char tenxe[50];
   char mauxe[50];
}  xemay;
void themmoi(xemay a[],int &n ){
	xemay xm;
	cout<<"nhap bien so "; gets(xm.bienso);
	cout<<"nhap ten xe: "; gets(xm.tenxe);
	cout<<"mau xe "; gets(xm.mauxe);
    a[n]=xm;
}
void indanhsach(xemay a[], int n){
	for(int i=0;i<n;i++)
	cout<<setw(5)<<++i<<setw(10)<<a[i].bienso<<setw(10)<<a[i].tenxe<<setw(10)<<a[i].mauxe;
	cout<<endl;
}
void menu(){
  	int chon;
  	xemay a[max];
  	int n=0;
  	do{
  		cout<<"1. Them moi\n";
  		cout<<"In danh sach\n";
  		cout<<"0. Dung chuong trinh\n";
  		cout<<"moi chon chuc nang chuong trinh: ";cin>>chon;
 	switch(chon){
  		case 1: themmoi(a,n);break;
  		case 2: indanhsach(a,n);break;
}
}   while(chon!=0);
}   
   
  	int main(){
  		int n=0;
  		xemay a[max];
  		menu();
  		return 0;
}
