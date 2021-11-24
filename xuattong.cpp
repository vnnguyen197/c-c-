#include<iostream>
using namespace std;
int main()
{ int i,A[10],n,s=0,d=0;
  cout<<"nhap n";
cin>>n;
for(i=0;i<n;i++)
{cout<<"A["<<i<<"]";
cin>>A[i];
}
cout<<"tong phan tu:";
for(i=0;i<n;i++)
s=s+A[i];
cout<<s;
int k=2;
while(A[i]%k!=0)k++;
if(A[i]==k);
d++;
cout<<"co"<<d<<"songuyento";
}

