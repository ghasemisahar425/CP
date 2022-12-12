#include <iostream>
#define x 10

 using namespace std;

int main(int argc, char** argv) {
int array[x]={99,12,15,18,20,22,24,26,28,30};
int i,j,w,min=0,temp;

	for(i=0;i<x;i++){
		cout<<"array value : "<<array[i]<<"\n";
//		cin>>array[i];
	}
	for(i=0;i<x;i++){
		for(j=0;j<x-1;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				cout<<"moratab shode:"<<array[j]<<"\n";
			}
		}
	}
	min=array[0];
	for(i=1;i<x;i++){
			if(array[i]<min){
				min=array[i];
			}
}
				cout<<"the min number is:"<<min<<"\n";
				cout<<"the second min number is:"<<array[1];
}