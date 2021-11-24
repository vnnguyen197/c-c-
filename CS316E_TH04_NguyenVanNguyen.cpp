#include<iostream>
#include<math.h>
using namespace std;
struct Nut{
	int duLieu;
	Nut *tiep;
};
// tao nut co du lieu la x, truong tiep la con tro p. tra ve dia chi cua nut do
Nut*tao(int x, Nut *p){
	Nut *q = new Nut;
	q->duLieu = x;
	q->tiep = p;
	return q;
}
void taoDS(Nut *&L){
	L = tao(1,tao(2,tao(3,tao(4,tao(5,tao(6,tao(7,tao(8,tao(9,tao(10,NULL))))))))));
}
void duyet(Nut *l){
/* Nut *p=l;
   while(p!=NULL){ 
       while(p)
       cout<<p->duLieu<<" --> ";
       p=p->tiep;
   }
   cout<<"NULL \n";*/
   for(Nut *p=l; p!=NULL; p=p->tiep)
     cout<<p->duLieu<<" --> ";
     cout<<"NULL \n";
   }
void duyetDQ(Nut *l){
   	if(l!=NULL){
   		//if(l)
   		cout<<l->duLieu<<" --> ";
   		duyetDQ(l->tiep);
	   }
	   else cout<<"NULL \n";
   }
int cau1DQ(Nut *l){
	if(l==NULL) return 0;
	else return l->duLieu + cau1DQ(l->tiep);
}
int cau1(Nut *l){
	int s=0;
	Nut *q = l;
	while(q!=NULL){
		s = s + q->duLieu;
		q = q->tiep;
	}
	return s;
}
/*int cau2DQ(Nut *l){
	if(l==NULL) return 0;
	else return l->duLieu + cau1DQ(l->tiep);
}*/
int cau1(Nut *l){
	int s=0;
	Nut *q = l;
	while(q!=NULL){
		s = s + q->duLieu;
		q = q->tiep;
	}
	return s;
}
/*int tong=0;
	for(int i=0; i<n; i++)
		if(a[i]%5==0)
			tong = tong + a[i];
		return tong;
	return -1;*/
int main(){
	Nut*first;
	taoDS(first);
//	duyet(first);
	duyetDQ(first);
	cout<<"\n cau1DQ: "<<cau1DQ(first)<<"\t VL: "<<cau1(first);
	cout<<"\n cau1DQ: "/*<<cau2DQ(first)<<"\t VL: "*/<<cau2(first);
}
