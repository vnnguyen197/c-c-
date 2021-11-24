#include<math.h>
#include <conio.h>
using namespace std ;
 int USCLN(int a,int b)
{ if(b==0)
return a;
else return USCLN (b,a%b);
}
int main(){
	cout<<"uoc so chung lon nhat: ";
	USCLN(a,b);
}
