#include <iostream>
using namespace std;
main(){

int Num1,Num2,i,GCD;
	cout<<"please enter tow integer values; ";
	cin>>Num1>>Num2;
		for(i=1;i<=Num1 && i<=Num2;i++){
			if(Num1%i==0 && Num2%i==0){
				GCD=i;
			}
		} 
	cout<<"GCD of"<<Num1<<"and"<<Num2<<"is"<<GCD;
}

