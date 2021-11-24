#include<iostream>
using namespace std;

	int n,x[100],y,z;
	

int Init() {

	for(int i=1;i<=n;i++) {
		x[i]=i;
	}
}

bool check() {
	for(int i=n;i>=1;i--) 
		if(x[i]!=n-i+1) return false;
	return true;
}

void result() {
	for(int i=1;i<=n;i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}


void swap(int &a,int &b) {
	int c;
	c=a;
	a=b;
    b=c;
}


void sinh() {
	int i;
	for(int i=n;i>=1;i--) {
		if(x[i]>x[i-1]) {
		    for(int j=n;j>=i;j--) {
		    	if(x[j]>x[i-1]) {
		    		swap(x[i-1],x[j]);
		    		break;
				}
			}	
		}
	}
	int s=n;
	int r=i; 
	while (s<r) {
		swap(x[s],x[r]);
	    r++;
	    s--;
	}
}


int main() {
	cin>>n;
	Init();
    while(check()!=false) {
	sinh();
	result();
    }
    result();
}
