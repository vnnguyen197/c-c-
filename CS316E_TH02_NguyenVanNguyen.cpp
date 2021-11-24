//Nguyen Van Nguyen
#include<iostream>
#include <stdio.h>
using namespace std;
const int MAX = 100;

void nhapmang(int a[], int &n){
	cout<<"Nhap n>0:";cin>>n;
	cout<<"Nhap "<<n<<" so:"<<endl;
	for(int i=1;i<=n;i++)
		cin>>a[i];
} 

void xuatDQ(int a[], int n){
	if(n>0){
		xuatDQ(a,n-1);
		cout<<a[n]<<" ";
	}
}
void DaoMang(int a[],int n)
{
   for(int i=1; i<n/2; i++)
{
    int index = n - i - 1;
    int tmp = a[index];
    a[index] = a[i];
    a[i] = tmp;

   }
}
int tongphantu(int a[], int n){
	if(n==2) return a[n] + a[n-1];
	else {
		int e = tongphantu(a,n-1);
		if(e>a[n]+a[n-1]) return e;
		else return a[n] + a[n-1];
	}
}
 int doiXung(int number) {
    int res = 0;
    while (number > 0) {
        res = res * 10 + number % 10;
        number /= 10;
    }
    return res;
}
 
bool kiemTra(int number) {
    if (number == doiXung(number))
        return true;
    return false;
}
int TimKiem(int a[], int n, int v){
    for(int i = 0;i < n; ++i){
        if(a[i] == v){
            return i;
        }
    }
    return -1;
}
int main(){
	int n,a[50], arr[MAX],v;
	int sum = 0;
	nhapmang(a,n);
	xuatDQ(a,n);
	DaoMang(a,n);
    cout<<"\nMang bay gio la: ";
	xuatDQ(a,n);
	cout<<"\n Tong 2 phan tu lien tiep lon nhat: "<<tongphantu(a,n);
	for (int i = 0; i < n; i++)
        if (kiemTra(a[i]))
            sum += a[i];
    cout << "\n Tong cac so doi xung la:  " << sum<<endl;
    return 0;
    cout<<"\n======TIM KIEM======\n";
    cin>>v;
    cout<<"\nNhap vao gia tri can tim: ";
    cin>>v;
    cout<<" So can tim la: "<<v<<TimKiem(arr, n, v);
}

