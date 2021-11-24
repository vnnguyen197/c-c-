#include<iostream>
using namespace std;
#include<fstream>
#define max 100
int main(){
   ifstream f;//khai bao 1 bien file ten f
   f.open("intput.txt");//B1: mo file de doc
   f>>n;//cin>>n, nhap kich thuoc mang lay tu file nap cho bien n
   cout<<"kich thuoc mang: "<<n<<endl;
   for(int i=0;i<n;i++){
	f>>a[i];//nap cac tu tu file cho mang a
} 
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";
    f.close;//dong file 
    //yeu cau: tinh tong cac phan va ghi KQ vao 1 file khac 
    ofstream f1;
    //b2: cac thao tac xu ly
    int tong=0;
    for(int i=0;i<n;i++){
    	tong+=a[i];
}       f1<<tong;
        f1.close;
   
