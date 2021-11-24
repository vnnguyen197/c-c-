#include<iostream>
using namespace std;
struct Nut{
	int duLieu;
	Nut *tiep;
};
Nut *tao(int x, Nut *p){
	Nut *q=new Nut;
	q->duLieu=x;
	q->tiep=p;
	return q;
}
void taoDS(Nut *&first){
	first=tao(2, tao(5, tao (17, tao(7, tao (9, tao (8, NULL))))));
}
void xuat(Nut *l){
	Nut *q=l;
	while(q!=NULL){
		cout<<q->duLieu<<" -> ";
		q=q->tiep;
	}
	cout<<"NULL";
}
void xuatDQ(Nut *l){
	if(l!=NULL){
		cout<<l->duLieu<<" -> ";
		xuatDQ(l->tiep);
	}else cout<<"NULL";
}
int tongChan(Nut *first){
	int s=0;
	Nut *q=first;
	for(Nut *q=first;q!=NULL;q=q->tiep){
		if(q->duLieu%2==0)s+=q->duLieu;
	}
	return s;
}
int tongChan_DQ(Nut *q){
	if(q==NULL) return 0;
	else if(q->duLieu%2==0) return q->duLieu+tongChan_DQ(q->tiep);
	else return tongChan_DQ(q->tiep);
}
void nutCuoi(Nut *first){
	Nut *q=first;
	while(q->tiep!=NULL)
		q=q->tiep;
	if(q->duLieu%2==0) cout<<"Chan";
	else cout<<"Le";
}
void nutCuoi_DQ(Nut *first){
	if(first!=NULL){
		if(first->tiep==NULL){
			if(first->duLieu%2==0) cout<<"Chan";
			else cout<<"Le";
		}
		else nutCuoi_DQ(first->tiep);
	}
}
void nutKeCuoi(Nut *first){
	Nut *q=first;
	while(q->tiep->tiep!=NULL)
		q=q->tiep;
	if(q->duLieu%2==0) cout<<"Chan";
	else cout<<"Le";
}
void nutKeCuoi_DQ(Nut *first){
	if(first!=NULL&&first->tiep!=NULL){
		if(first->tiep->tiep==NULL){
			if(first->duLieu%2==0) cout<<"Chan";
			else cout<<"Le";
		}
		else nutKeCuoi_DQ(first->tiep);
	}
}
int Max(Nut *first){
	Nut *q=first;
	int max=q->duLieu;
	for(Nut *q=first;q!=NULL;q=q->tiep){
		if(q->duLieu>max) max=q->duLieu;
	}
	return max;
}
int Max_DQ(Nut *first){
	if(first->tiep==NULL) return first->duLieu;
	else{
		if(first->duLieu>Max_DQ(first->tiep)) return first->duLieu;
		else return Max_DQ(first->tiep);
	}
}
int maxLT(Nut *first){
	if(first==NULL||first->tiep==NULL) return 0;
	int max=first->duLieu+first->tiep->duLieu;
	Nut *q=first->tiep;
	while(q->tiep!=NULL){
		if(q->duLieu+q->tiep->duLieu>max){
			max=q->duLieu+q->tiep->duLieu;
		}
		q=q->tiep;
	}
	return max;
}
int maxLT_DQ(Nut *first){
	if(first==NULL||first->tiep==NULL) return 0;
	else{
		if(first->duLieu+first->tiep->duLieu>maxLT_DQ(first->tiep)) return first->duLieu+first->tiep->duLieu;
		else return maxLT_DQ(first->tiep);
	}
}
int main(){
	Nut *first;
	taoDS(first);
	xuat(first);
	cout<<endl;
	xuatDQ(first);
	cout<<endl<<"1.Tong cac so chan trong DSLK = "<<tongChan(first);
	cout<<endl<<"Tong cac so chan trong DSLK (DQ) = "<<tongChan_DQ(first);
	cout<<endl<<"2.Nut cuoi: ";
	nutCuoi(first);
	cout<<endl<<"Nut cuoi (DQ): ";
	nutCuoi_DQ(first);
	cout<<endl<<"3.Nut ke cuoi: ";
	nutKeCuoi(first);
	cout<<endl<<"Nut ke cuoi (DQ): ";
	nutKeCuoi_DQ(first);
	cout<<endl<<"4.Max = "<<Max(first);
	cout<<endl<<"Max (DQ) = "<<Max_DQ(first);
	cout<<endl<<"5.Max 2 so lien tiep = "<<maxLT(first);
	cout<<endl<<"Max 2 so lien tiep (DQ) = "<<maxLT(first);
}
