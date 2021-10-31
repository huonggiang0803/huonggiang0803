#include<iostream>
using namespace std;
 
 int main() {
 	int a,b,c;
 	cout<<"Nhap a:";cin>>a;
 	cout<<"Nhap b:";cin>>b;
 	cout<<"Nhap c:";cin>>c;
 	int max =(a>b)?a:b;
 	    max= (max>c) ? max:c;
	if(a==b&&b==c&& a==c){
		cout<<"Khong co gia tri cua max\n";
	}
	else 
	{
		cout<<" Gia tri max :"<<max<<endl;
	}	
}