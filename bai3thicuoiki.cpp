#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
const long MIN=-1000000000;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
} 
bool checkNT(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i==0)
            return false;
    return true;
}
int Fun(int a[], int n) {
    long max = MIN;
    for (int i = 0; i < n; i++) 
	{
        if (a[i] > max && checkNT(a[i]) )
            max = a[i];
    }
    if( max == MIN )
        return 0;
    else
        return max;
}
void XoaTaiViTri (int a[], int &n, int vitri) {
    for (int i = vitri; i < n-1 ; i++)
    a[i] = a[i+1];
    n--;
}
int main(){
    int a[1000];
    int n,vitri;
    cout << "\nNhap n: ";
    cin >> n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    if (Fun(a, n) == 0)
        cout << "\nMang khong ton tai so nguyen to";
    else
        cout << "\nSo nguyen to lon nhat trong mang la: " << Fun(a, n)<<endl;
    cout<<"\n--------Xoa phan tu---------\n "<<endl;
    cout<<"\nNhap vi tri muon xoa: "<<endl;
    XoaTaiViTri(a,n,vitri);
    system("pause");
    return 0;
}
