#include <iostream>
#define s 10
using namespace std;

int main(int argc, char** argv) {
int array[s]={1,12,23,44,65,76,97,108,111};
int i,j,temp;

	for (int i = 0; i < s ; i++){
		cout << "array[" << i << "]="<<array[i]<<endl;
		
}
	while(array[10]){
		cout<<"please array["<<array[10]<<"]:";
		cin>>array[10];
		break;
}
	for(i=0;i<s;i++){
		for(j=0;j<(s-i);j++)
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
	}
	for(i=0;i<=s;i++){
		cout<<"array "<<i<<" number is"<<array[i]<<"\n";
	}		
	}