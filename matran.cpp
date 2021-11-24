#include<iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
int a[100][100], h, c;
#define ROW 100
#define COL 100
void nhapMT(){
	cout<<"nhap so hang:";cin>>h;
	cout<<"nhap so cot:";cin>>c;
	for(int i=1; i<=h; i++)
	   for(int j=1; j<=c; j++){
	   	int x;
	   	cout<<"a["<<i<<"]["<<j<<"]:";
	   	cin>>x;
	   	a[i][j]=x;
	   }
}
 void xuatMT(){
 	for(int i=1; i<=h; i++){
 		for(int j=1; j<=c; j++)
 		  cout<<a[i][j]<<" ";
 		cout<<endl;
	 }
 }
 int tongDong(int mt[][COL], int n, int d)
{
	int sum(0);
	for (int j = 0; j < n; j++) 
		sum += mt[d][j];

	return sum;
}
int tongCot(int mt[][COL], int m, int c)
{
	int sum(0);
	for (int i = 0; i < m; i++)
		sum += mt[i][c];

	return sum;
}
void chuyenVi(int F[50][50],int n, int m){
	   for(int j=0; j<m; j++){
	   	for(int i=0; i<n; i++)
	   	cout<<setw(3)<<F[i][j];
	   	cout<<"\n";
	   }
}
 int main(){
 	nhapMT();
 	xuatMT();
 	cout<<"ma tran chuyen vi: \n";
 	chuyenVi(m, r ,c);
 	int d,
 	int mt[ROW][COL]; 
	int nRow, nCol;
	cout << "Nhap dong can tinh tong: ";
	cin >> d;
	cout << "Tong dong: " << tongDong(mt, nCol, d) << endl;
	int c;
	cout << "Nhap dong can tinh tong: ";
	cin >> c;
	cout << "Tong dong: " << tongCot(mt, nRow, c) << endl;
	return 0;
 }
