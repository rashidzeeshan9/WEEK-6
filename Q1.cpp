#include<iostream>
using namespace std;
int main(){
	
	int a,b,sum;
	int *ptrA  ,*ptrB , *ptrSum;
	
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter the Second Number : ";
	cin>>b;
	cout<<endl;
	
	ptrA = &a;
	ptrB = &b;
	ptrSum = &sum;
	
	*ptrSum = *ptrA + *ptrB;
	
	cout<<"Sum of a and b using pointer is "<<*ptrSum;
	 
	
}

