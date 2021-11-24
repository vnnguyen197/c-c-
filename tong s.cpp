
#include<iostream>;
using namespace std;
int Tong (int n)  
{

    if(n==1)
        return 1;

    return Tong(n-1) + n;

}
int main(){
    int n;
    cout<<" moi nhap n: ";cin>>n;
    cout<<"  s = "<<Tong(n);
    }

 


