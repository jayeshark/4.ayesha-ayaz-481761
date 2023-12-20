//Write a C++ program, take two strings as input from user and check if both strings 
//are equal or not. If they are equal make them unequal by rotating string. e.g., Hello
//is turned into olleH etc. 

#include <iostream>
using namespace std;
int main() {
	string string1, string2;
	cout<<"enter two strings"<<endl;
	cin>>string1>>string2;	//successfully took 2 string input from user

	if(string1!=string2) { 	//checking if both strings are equal or not
	cout<<"both strings are not equal";
}

	else {
		int string1length=0;
		while (string1[string1length] != '\0') {
        string1length++;  //successfully counted length of string1 
    }

	 for (int i = 0; i < string1length / 2; ++i) {
      
        int temp = string1[i];
    	string1[i] = string1[string1length - i - 1];
   		string1[string1length - i - 1] = temp;
    }

    cout << "Rotated string: " << string1 << endl;  //successfully rotates string1 
}
    return 0;
		
	}
