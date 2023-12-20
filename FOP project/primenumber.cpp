//Write a C++ program that uses a while loop to find the largest prime number less than a given positive integer N. Your program should take the value of N as input
//from the user and then find the largest prime number less than or equal to N. You are not allowed to use any library or pre-existing functions to check for prime
//numbers. 

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: "; //user inputs number
    cin >> number;

    cout << "Prime numbers below and equal " << number << " are: ";

   
    for (int i = 2; i <= number; ++i) {
        bool Prime = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) { 							//checking primenumbers below user inputted number
                Prime = false;
                break;
            }
        }

        if (Prime) {
            cout << i << " "; 		//displayying prime number below user entered number
        }
    }

    return 0;
}