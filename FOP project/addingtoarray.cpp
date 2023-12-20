//Suppose an integer array a[5] = {1,2,3,4,5}. Add more elements to it and display
//them in C++. 
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int aplus[] = {6, 7, 8, 9, 10}; // Elements to be added

    int combinedsize = 10; 
    int aplusa[combinedsize]; //creating new array with combined size

    for (int i = 0; i < 5; ++i) {
        aplusa[i] = a[i];
    }

    for (int i = 0; i < 10; ++i) {
        aplusa[i + 5] = aplus[i]; //adding both old and new elements to the new array
    }

    cout << "Updated array elements: ";
    for (int i = 0; i < combinedsize; ++i) {
        cout << aplusa[i] << " "; //displaying the new array
    }

    return 0;
}