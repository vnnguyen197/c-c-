#include<iostream>
#include<string.h>
#define max 100
using namespace std;
void nhapchuoi(char st[]){
   cout<<"nhap chuoi: ";
   gets(st); //nhap chuoi
}
void inchuoi(char st[]){
	puts(st); //in chuoi
}
void ghepchuoi(char st1[], char st2[]){
	strcat(strcat(st1," "),st2);
}
int main(){
	char st1[max],st2[max];
	nhapchuoi(st1);
	nhapchuoi(st2);
	inchuoi(st1);
	inchuoi(st2);
	ghepchuoi(st1,st2);
}
