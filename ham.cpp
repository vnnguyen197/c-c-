#include<iostream>
using namespace std;
main()
   int Max(int A[],int n)
{ 
  int max=A[0];
 for(int i=1;i<n;i++)
   if(max<A[i])
     max=A[i];
  cout<<"so lon nhat"<<max;
}
  int tim (int A[], int n,int k)
{ 
  int d=0;
  for(int i=0;i<n;i++)
   if(A[10]==k) d++;
   if(d>0)
  return 1;
 else
  return 0;
 }
  void nhap(int A[],int &n)
{ 
  cout<<"nhap n";
  cin>>n;
  for(int i=0;i<n;i++)
{ 
  cout<<"A["<<i<<"]=";
  cin>>A[i];
}
}
  void xuat(int A[],int n)
{ 
  for (int i=0;i<n;i++)
  cout<<A[i]<<" ";
}
man()
{
  int A[10];
	nhap(A,n); 
	xuat(A,n); 
    cout<<"nhap so can tim";
    cin>>k;
   if(tim(a,n,k)==1)
    cout<<"co phan tu"<<k<<"trong mang";
   else
   cout<<"khong co";
}
int snt(int z)
{ 
  for(int i=2;i<sqrt(z);i++)
  if(z%i==0)
   {  
    return 0;break;
   }
  else 
  return 1;
	/*int k==2;
	while(z%k!=0)k++;
	if(z==k)
	  return 1;
	else
	  return 0;*/
} 
  int demsnt(int A[],int n)
{ 
  int d=0;
  for(int i=0;i<n;i++)
  if (snt(A[i])==1,d++);
  return d;
}
main()
{ int A[],n;
 nhap(A,n);
 xuat
     
