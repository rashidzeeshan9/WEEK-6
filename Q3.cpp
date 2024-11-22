#include<iostream>
using namespace std;
int main(){
	
	int c, *ptrA;
	
	cout<<"Enter any variable: ";
	cin>>c;
	ptrA = &c;
	cout<<"Address of the "<<c<<" is "<<ptrA;
	
}
