//Write a C++program for a string which may contain lowercase and uppercase
//characters. The task is to remove all duplicate characters from the string and find
//the resultant string. 

#include <iostream>
using namespace std;
int main() {
		string anything,resultant="";
	cout<<"enter a string"<<endl;
	cin>>anything;	//successfully took a string input from user
   
    for (char &ch : anything) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
        } 		//making all characters lowercase 
    }
    	int anything_length=0;
		while (anything[anything_length] != '\0') { //counting length of user inputted string 
        anything_length++;
}
    
    for (int i = 0; i < anything_length ; ++i) {
        bool isDuplicate = false;

        for (int j = 0; j <  anything_length;++j) {
            if (i != j && anything[j] == anything[i]) {  // Removing duplicates from string 
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate == false){
            resultant += anything[i];
			      }
}
 	cout<<resultant;
    return 0;
}