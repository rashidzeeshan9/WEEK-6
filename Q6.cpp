#include<iostream>
using namespace std;

void concatenate(char *str1, char *str2) {
   
    while (*str1 != '\0') {
        str1++;
    }

    
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

   
    *str1 = '\0';
}

int main(){
    char str1[100];
    char str2[100];

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    concatenate(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}

