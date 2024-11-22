#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;
    int sum = 0;

  
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum of " << n << " elements: " << sum << endl;

    return 0;
}


