#include <iostream>
#include<math.h>
using namespace std;
int power(int a , int b){
	int p=1 , i;
		for(i=1;i<=b;i++){
			p*=a;
		}
		return p;
}
int factoriel(int a){
	int fact, j=0 ,i=1;
		for(j=1;j<=a;j++)
		i*=j;
		fact+=i;
			return fact;
		}
int main(){
	int x,tan,sin,cos,e=3,z=5,s=7,c=2,d=4,n=6;
	cout<<"please enter x to be celculated : ";
	cin>>x;

		sin=(power(x,e)/factoriel(e))+(power(x,z)/factoriel(z))-(power(x,s)/factoriel(s));

		cos=(power(x,c)/factoriel(c))+(power(x,d)/factoriel(d))-(power(x,n)/factoriel(n));
	
		tan=(sin/cos);
	cout<<"the sin is = "<<sin<<"  and  the cos is = "<<cos<<"\n";
	cout<<"the tangant of "<<x<<" is => "<<tan;
}