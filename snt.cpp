#include<iostream>
#include<math.h>
using namespace std;

int kiemTraSoNguyenTo(int);

int main()
{
  int n,i;

  cout << "Nhap vao 1 so nguyen: ";
  cin >> n;
  
  if(kiemTraSoNguyenTo(n)==0)
    cout << n << " la so nguyen to";
  else
    cout << n << " khong phai la so nguyen to.";
  return 0;

{
      if (n<2) return 0;
      for (i=2; i <=(int)sqrt(n); i++)
          if (n%i==0) return 0;
      return 1;

}
}
