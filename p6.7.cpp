#include <iostream>
#include <math.h>
using namespace std;
main(){
int n,flag,i;
	cout<<"please enter an integer number greater than 2 =>";
	cin>>n;
	flag=1;
		for(i=2;i<sqrt(n);i++){
			if(n%i==0){
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"the number is prime";
		else 
			cout<<"the number is not prime";
}
