#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap phan tu thu "<< i <<": ";
		cin>>a[i];
	}
}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		a[i]=rand()%100 - rand()%100;
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

float TrungBinhPTGTriLe(int a[], int n)
{
	int i, tong=0, dem=0;
	for(i=0; i<n; i++)
		if(a[i]%2!=0)
		{
			tong = tong + a[i];
			dem = dem + 1;
		}
		return (float)tong/dem;
	return -1;
}

void main()
{
	int a[MAX], i, n;
	float kq;
	
	cout<<"Nhap so luong phan tu thuc: "; cin>>n;
		
	NhapMang(a,n);

	//MangNgauNhien(a,n);

	XuatMang(a,n);

	kq=TrungBinhPTGTriLe(a,n);
	cout<<"\nTrung binh cac phan tu co gia tri le trong mang la: "<< kq;

	cout<<endl;
}
