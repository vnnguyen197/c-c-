#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char Chuoi[255],*s;
 cout<<"Nhap Chuoi:";gets(Chuoi);
 s=strupr(Chuoi);
 cout<<"Chuoi chu hoa:";puts(s);
 return 0;	
}
