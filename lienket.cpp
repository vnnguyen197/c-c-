#include<iostream>
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
// L->3->7->12->9->8->5->NULL
void taoDS(Nut *&L){
	L = tao(3,tao(12,tao(9,tao(8,tao(5,NULL)))));
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
int tongSoChan(Nut *l){
	int s=0;
	Nut *p=l;
	while(p!=NULL){
		if(p->duLieu%2==0) s=s+ p->duLieu;
		p=p->tiep;
}
return s;
}
int tongChanDQ(Nut *l){
	if(l==NULL) return 0;
	else if(l->duLieu%2==0) return l->duLieu + tongChanDQ(l -> tiep);
	else return tongChanDQ(l->tiep);
}
int main(){
	Nut*first;
	taoDS(first);
	duyet(first);
	duyetDQ(first);
	cout<<"Tong cac nut chan la:"<<tongSoChan(first);
	cout<<"\n Tong cac nut chan DQ la:"<<tongChanDQ(first);
}
