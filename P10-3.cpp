#include <iostream>
using namespace std;

int bmm(int x,int y){
	if ((x%y)!=0) 
		return(bmm(x=y,x%y));
	else 
		return(y);
}

int main(){
	int x,y;
	cout<<"Enter the X: ";
		cin>>x;
	cout<<"Enter the Y: ";
		cin>>y;
	cout<<"\nbmm of "<<x<<" & "<<y<<" is =>"<<bmm(x,y)<<"\n";
		cout<<"the end :)";
}
