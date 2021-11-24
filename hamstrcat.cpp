#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char HoLot[15],Ten[8];
 cout<<"Nhap Ho Lot";gets(HoLot);
 cout<<"Nhap Ten";gets(Ten);
 strcat(HoLot, Ten); 
 cout<<"Ho Ten la";puts(HoLot);
 return 0;	
}
