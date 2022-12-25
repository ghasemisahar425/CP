#include <iostream>
using namespace std;

int pow(int a, int b) {
	if (b > 1)
		a=(a*pow(a,b-1));
		return a; 
		}
int main(){
	int x,y,power;
		cout<<"enter the x & y : ";
		cin>>x>>y;
			power=pow(x,y);
		cout<<power<<" the end :)";
}