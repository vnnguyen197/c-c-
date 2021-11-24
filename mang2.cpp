#include<iostream>
using namespace std ;
#define max 100
void nhapmang(int a[], int n){
    for(int i=0;i<n;i++){
	    cout<<"a["<<i<<"]=";
	    cin>>a[i];
}
}
void inmang(int a[], int n){
     for(int i=0;i<n;i++){
	     cout<<a[i]<<"\t";
}
}
 int main(){
    int a[1000];
    int n;
    cout << "Nhap n: ";
    cin>>n;
    nhapmang(a,n);
    cout << "Xuat mang: " << endl;
    inmang(a,n);
    system("pause");
    return 0;
}
 
