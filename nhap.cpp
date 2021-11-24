#include <stdio.h>
#include <conio.h>
using namespace std;
int USCLN(int a, int b)
{
 if(b==0) return a;
 else return USCLN (b,a%b);
}
int main ()
{
 int tuso,mauso;
 printf("Nhap vao tu so: ");
 scanf("%d",&tuso);
 printf("\nNhap vao mau so: ");
 scanf("%d",&mauso);
 printf("\n---------------------------------------");
 printf("\nKet qua:");
 int usc=USCLN(tuso,mauso);
 printf("\nPhan so toi gian la %d/%d",tuso/usc,mauso/usc);
 printf("\n---------------------------------------");
 printf("\n Nhap phim Enter de ket thuc chuong trinh nay!");
 getch(); return 0;
}
