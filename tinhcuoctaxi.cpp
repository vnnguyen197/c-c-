#include<iostream>
using namespace std ;
 void menu (){
 	int chon ;
 	   do { cout<<"1. Giai PTB2 "<<endl;
 	        cout<<"2. Tinhcuoctaxi"<<endl;
 	        cout<<"chon chuc nang CT "; cin>>chon;
 	     switch(chon){
 	      case 1: { float a, b, c;
 	                cout<<"nhap a= ";cin>>a;
 	                cout<<"nhap b= ";cin>>b;
 	                cout<<"nhap c=";cin>>c;
 	                giaiPTB2(a,b,c);
			        break;
}
		  case 2: { int km;
		            cout<<"nhap km ";cin>>km;
		    cout<<"tien cuoc= "<<tiencuoctaxi(km)<<endl;
			break;
} 
} while(chon!=0);
}
			
