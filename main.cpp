#include <iostream>
#define n 10
using namespace std;

int main(int argc, char** argv) {
int array[n];
int a=0,b=1,c,x,temp,i;
	
	cout<<"please enter your request number:";
		cin>>array[n];
			for(i=0;i<n;i++){
				c=a+b;
				a=b;
				b=c;
				array[i]=a;
				cout<<"the fib position in array is: "<<i<<"  =  ";
				cout<<"the fib number are :"<<a<<endl;
			}	
}