#include <iostream>
//pointer ve dizleri yapýcý metodla kullanimi test edilimi
using namespace std;
class nokta{
	public:
	int x;
	int y;
    int getx();
    int gety();
    nokta();
    nokta(int,int);
}; 
int nokta::getx(){
	return x;
}
int nokta::gety(){
	return y;
}
nokta::nokta(){

	cout<<"parametsiz yapici metod calisti"<<endl;
}
nokta::nokta(int x,int y=15){
		cout<<"parametli yapici metod calisti"<<endl;
this->x=x;
this->y=y;

	
}

int main(int argc, char** argv) {
	nokta n1;
	nokta n2(8,2);
		cout<<n2.getx()<<" "<<n2.gety()<<endl;
	cout<<n1.getx()<<" "<<n1.gety()<<endl;
	nokta dizi[5]={{1},{2,1},1};
	for(int i=0;i<5;i++){
		cout<<dizi[i].getx()<<" "<<dizi[i].gety()<<endl;
	}
	nokta *ptr=new nokta();
		cout<<ptr->getx()<<" "<<ptr->gety()<<endl;
	
	return 0;
}
