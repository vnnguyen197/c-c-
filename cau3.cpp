#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
#define max 100
 void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
 bool kiemtrasnt(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int demsnt(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (kiemtrasnt(a[i]) == true)
            count++;
    }
    return count;
} void inmang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
  void XoaPhanTu(int a[], int &n, int pos){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}
int main(){
    int a[100];
    int n,pos;
    cout<<"Nhap n: ";
    cin>>n;
    nhapmang(a, n);
    cout<<"\n================In mang============="<<endl;
    inmang(a, n);
    cout<<"\nSo nguyen to co trong mang la: "<<demsnt(a,n)<<endl;
    cout<<"\n================Xoa Phan Tu================";
    cout<<"\nNhap vi tri muon xoa: ";
    cin>>pos;
    XoaPhanTu(a, n, pos);
    cout<<"\nMang sau khi xoa la: "<<endl;
    inmang(a,n); 
    system("pause");
    return 0;
}

