#include<conio.h>
#include<stdio.h>
int main(){
    int x;
    int n;
    int lt = 1;
    int s = 0;
    printf("Nhap x: ");
    scanf("%d",&x);
    printf("Nhap n: ");
    scanf("%d",&n);
    //Nhap gia tri x, n
    for(int i = 1; i <= n; i++){
        lt = lt * x;
        s += lt;
    }
    //Tinh s = x^1 + x^2 + .. + x^n
    printf("%d",s);
}
