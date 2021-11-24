#include<iostream>
using namespace std;
#define max 100
void nhapMang(int a[], int &n){
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
int XoaX(int a[], int &n,int k) {

            int i, j;

            int dem=0;

            for(i=0; i<n; i++) {

                        if(a[i] == k) {

                                    for(j=i; j<n-1; j++) {

                                                a[j] = a[j+1];

                                    }

                                    dem++;

                                    n--;

                                    i--;

                        }

            }

            if(dem == 0)

                        return -1;

}
int main(){
	int x[100], n;
 	nhapMang(x,n);
 	cout<<endl;
 	xuatDQ(x,n);
 	int a, k;
 	cout<<"\nNhap vi tri can: ";
 	cin>>a>>k;
	XoaX(a,n,k);
	xuatDQ(x,n);
}

