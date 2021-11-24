#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
char doixung(char s1[100])
{
    int i;
    for(i=0; i<strlen(s1)/2; i++)
{
    if(s1[i]!=s1[strlen(s1)-1-i])
{
    return 0;
}
}
    return 1;
}
int main(){
    char s1[100];
    cout<<"nhap chuoi: ";
    gets(s1);
    if(doixung(s1)==0)
    {
    cout<<"chuoi vua nhap khong phai chuoi doi xung\n";
    }
    if(doixung(s1)==1)
    {
    cout<<"chuoi vua nhap la chuoi doi xung\n";
    }
    return 0 ;
}
