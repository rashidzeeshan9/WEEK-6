#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;
    }

    ptr = arr; 

    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;
}


