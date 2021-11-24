// Nguyen Van Nguyen_2501
#include <iostream>
using namespace std;

void nhapmang(int a[], int n){
	cout<<"nhap "<<n<<" so nguyen:\n";
	for(int i=1;i<=n;i++)
	    cin>>a[i];

}
void xuatmang(int a[], int n){
	if(n>0){
		xuatmang(a,n-1);
		cout<<a[n]<<" ";
	}
}
int tong(int a[], int n){
	if(n==0) return 0;
	else return a[n] + tong(a,n-1);
}
int tongchan(int a[], int n){
	if(n==0) return 0;
	else if(a[n]%2==0) return a[n] + tongchan(a,n-1);
	else return tongchan(a,n-1);
}
int max(int a[],int n){
	if(n==1) return a[n];
	else {
		int c = max(a,n-1);
		if(c>a[n]) return c;
		else return a[n];
	}
}
int min(int a[], int n){
	if(n==1) return a[n];
	else {
		int d = min(a,n-1);
		if(d<a[n]) return d;
		else return a[n];
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
int doixung(int x){
	int y=x,s=0;
	while(y!=0){
		s=s*10 + y%10;
		y=y/10;
	}
	return s==x && s>10;
}
void lietkeSDX(int a[], int n){
	if(n>0){
		lietkeSDX(a,n-1);
		if(doixung(a[n])==1) cout<<a[n]<<" ";
	}
}
void chen(int a[], int &n, int vitricanchen, int socanchen){
	for(int i=n+1;i>=vitricanchen;i--){
		a[i] = a[i-1];
	}
	a[vitricanchen] = socanchen;
	n++;
}
void xoa(int a[], int& n, int vtxoa){
	for(int i=vtxoa;i<=n;i++){
		a[i] = a[i+1];
	}
	n--;
	
}

bool KTSNT(int x){
	if(x<2)
	    return false;
	for(int i=2;i<x/2;i++)
	    if (x%i==0)
		return false;
	return true;	    
}
int tongSNT(int a[], int n){
	int tong=0;
	for(int i=1;i<=n;i++)
	   if(KTSNT(a[i])==true)
	       tong=tong+a[i];
	    return tong;
    return -1;		   
}
void sole(int a[],int n){
	if(n>0)
	{
		sole(a,n-1);
		if(a[n]%2!=0)
			cout<<a[n]<<" ";
	}
	}
int main(){
	int n,vt,gt,vtcanxoa;
	int a[50]; 
	cout<<"nhap n>0: ";cin>>n;
	nhapmang(a,n);
	cout<<"mang vua nhap: ";
	xuatmang(a,n);
	cout<<"\n Tong cac so trong mang: "<<tong(a,n);
	cout<<"\n Tong cac so chan trong mang: "<<tongchan(a,n);
	cout<<"\n Max la: "<<max(a,n);
	cout<<"\n Min la: "<<min(a,n);
	cout<<"\n Tong 2 phan tu lien tiep lon nhat: "<<tongphantu(a,n);
	cout<<"\n Liet ke so doi xung: ";lietkeSDX(a,n);
	cout<<"\n Cac so le trong mang: ";sole(a,n);
	cout<<"\n Xuat mang vua nhap:\n";xuatmang(a,n);
	cout<<"\n Vi tri can chen: ";cin>>vt;
	cout<<"\n Gia tri can chen: ";cin>>gt;
	chen(a,n,vt,gt);
	xuatmang(a,n);
	cout<<"\n Vi tri can xoa: ";cin>>vtcanxoa;
	xoa(a,n,vtcanxoa);
	xuatmang(a,n);
	cout<<"\n Tong cac so nguyen to trong mang: "<<tongSNT(a,n);
	
}
