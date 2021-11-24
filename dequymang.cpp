#include<iostream>
using namespace std;
void nhapMang(int a[], int &n){
 	cout<<" Nhap n>0: "; cin>>n;
 	cout<<"Nhap "<<n<<" so: "<<endl;
 	for(int i=1; i<=n; i++)
 	  cin>>a[i];
 }
void xuatMang(int a[], int n){
	cout<<"\n";
	for(int i=1; i<=0; i++)
	    cout<<a[i]<<" ";
}
bool KTSNT(int x){
	if(x<2)
	return false;
	for(int i=2; i<=x/2; i++)
	   if(x%i==0)
	   return false;
	   return true;
}
int tongSNT(int a[], int n){
 	int tong=0;
 	for(int i=1;i<n;i++)
 	   if(KTSNT(a[i])==true) tong = tong + a[i];
 	   return tong;
 }
int tongSNTDQ(int a[], int n){
 	if(n==0) return 0;
 	else if(KTSNT (a[n])== true) return a[n] + tongSNTDQ(a,n-1);
 	  else return tongSNTDQ(a,n-1);
 }
bool tinhKhongGiam(int a[], int n){
 	for(int i=1; i<n; i++)
 	    if(a[i+1]<a[i]) return false;
 	    return true;
 }
 bool tinhKGDQ(int a[], int n){
 	if(n<2) return true;
 	else if(a[n]<a[n-1]) return false;
 	else return tinhKGDQ(a,n-1);
 }
 int giaTriLonNhat(int a[], int n) 
{
	int max = a[0];
	for(int i=1; i<n; i++)		
		if(a[i] > max)
			max = a[i];
	return max;
}
 int main(){
 	int x[100], n;
 	nhapMang(x,n);
 	xuatMang(x,n);
    cout<<"\nTong SNT la:"<<tongSNTDQ(x,n);
//	if(tinhKhongGiam(x,n)==true)
//  cout<<"\nOK";
//  else cout<<"\nNot Ok";
//	if(tinhKGDQ(x,n)==true)
//	 cout<<"\nOK";
//	else cout<<"\nNot Ok";
 	cout<<"gia tri lon nhat la:"<<giaTriLonNhat(x,n);
 }
