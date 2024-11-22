#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptr = &num;

    cout << "Initial value: " << *ptr << endl;

    
    (*ptr)++;
    cout << "Value after increment: " << *ptr << endl;

    
    (*ptr)--;
    cout << "Value after decrement: " << *ptr << endl;

    
    ptr++;
    cout << "Value after incrementing pointer: " << *ptr << endl;

    
    ptr--;
    cout << "Value after decrementing pointer: " << *ptr << endl;

    return 0;
}

