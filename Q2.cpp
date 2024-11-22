#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	}
int main(){
	
	int a,b;
	int *ptrA, *ptrB;
	
	cout<<"Enter the First Number: ";
	cin>>a;
	cout<<"Enter the Second Number: ";
	cin>>b;
	
	ptrA = &a;
	ptrB = &b;
	swap(ptrA,ptrB);
	
	cout<<"Swap Value of a is "<<a<<", Swap Value of b is "<<b;
	
}

