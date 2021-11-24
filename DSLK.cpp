#include<iostream>
using namespace std;
struct Nut{
	int dulieu;
	Nut *tiep;
};
Nut *tao(int x, Nut *p){
	Nut *q = new Nut;
	q->dulieu=x;
	q->tiep=p;
	return q;
	}
void taods(Nut *&L){
	L= tao(1,tao(2,tao(3,tao(4,tao(5,tao(6,tao(7,tao(8,tao(9,tao(10,NULL))))))))));
	}
void duyetdq(Nut *l){
	if(l!=NULL){
		cout<<l->dulieu<<"--> ";
		duyetdq(l->tiep);
	}
	else cout<<"NULL\n";
}
int cau1dq(Nut *l){
	if(l==NULL)
		return 0;
	return l->dulieu + cau1dq(l->tiep);
}
int cau2(Nut *l){
	int s=0;
	Nut *p=l;
	while(p!=NULL){
		if(p->dulieu%3==0)	s=s+p->dulieu;
		p=p->tiep;
	}
	return s;
}
int cau3dq(Nut *l){
	if(l->tiep==NULL)	return l->dulieu;
	else {int b=cau3dq(l->tiep);
	if(b>l->dulieu)	return b;
	else return l->dulieu;
	}
}
int cau4dq(Nut *l){
	if(l->tiep==NULL)	return l->dulieu;
	else {int c=cau4dq(l->tiep);
	if(c<l->dulieu)	return c;
	else return l->dulieu;
	}
}
void cau5dq(Nut *l){
	if(l->tiep==NULL)
		if(l->dulieu%2==0)
			cout<<"\n Câu 5: Nut cuoi la so CHAN";
			else cout<<"\n Câu 5: Nut cuoi la so LE";
			else cau5dq(l->tiep);
}
void cau6dq(Nut *l){
	if(l->tiep->tiep==NULL)
		if(l->dulieu%2==0)
			cout<<"\n Câu 6: Nut ke cuoi la so CHAN";
			else cout<<"\n Câu 6: Nut ke cuoi la so LE";
			else cau6dq(l->tiep->tiep);
}
int cau7(Nut *first){
	if(first==NULL||first->tiep==NULL) return 0;
	int max=first->dulieu+first->tiep->dulieu;
	Nut *q=first->tiep;
	while(q->tiep!=NULL){
		if(q->dulieu+q->tiep->dulieu>max){
			max=q->dulieu+q->tiep->dulieu;
		}
		q=q->tiep;
	}
	return max;
}
int cau7DQ(Nut *first){
	if(first==NULL||first->tiep==NULL) return 0;
	else{
		if(first->dulieu+first->tiep->dulieu>cau7DQ(first->tiep)) return first->dulieu+first->tiep->dulieu;
		else return cau7DQ(first->tiep);
	}
}
int	cau8dq(Nut *l){
	if(l!=NULL	||	l->tiep==NULL)	return 1;
	if(l->dulieu>l->tiep->dulieu)	return 0;
	else return cau8dq(l->tiep);
}
int main(){
	int b,c;
	Nut*first;
	taods(first);
	duyetdq(first);
	cout<<"Câu 1: tong cac node trong danh sach la: "<<cau1dq(first);
	cout<<"\n Câu 2:tong chia het 3: "<<cau2(first);
	cout<<"\n Câu 3: max la: "<<cau3dq(first);
	cout<<"\n Câu 4:min la: "<<cau4dq(first);
	cau5dq(first);
	cau6dq(first);
	cout<<endl<<"Câu 7: Max 2 so lien tiep = "<<cau7(first);
	cout<<endl<<"Câu 7 DQ: Max 2 so lien tiep (DQ) = "<<cau7DQ(first);
	cout<<"\n cau 8: "<<cau8dq(first);
}
