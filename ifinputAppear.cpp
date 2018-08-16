/* Examples of an if statement from C++ primer 1.4.4 */

#include <iostream>
#include <string>
#include <sstream> //string stream
using namespace std;

int ifInputAppearance()
{
		// currentVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// read first number ad ensure that we have data to process
	cout << "Please enter a series of numbers (ex. 1 2 3) you wish to count how many consecutive times each distinct value appears in the series: " << endl;  
	
	string input = "";

	getline(cin, input); //gets one line of text from cin
						 //and stores it in the string input
	stringstream mySS(input);//turns the string input into a stream
    
	if (mySS >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (mySS >> val) { //read the remaining numbers
			if (val == currVal) { //if the values are the same
				++cnt;
				cout << cnt << endl; 
			}
			else { // otherwise, print the count for the previous value
				cout << currVal << " occurs " << cnt << " times" << endl;
				currVal = val; // remember the new value
				cnt = 1; //reset the counter
				cout << "Finished Else Statement" << endl;
			}
			cout << "Finished If1 Statement" << endl;
		}	// while loop ends here
		// remember to print the count for the last value in the file
		cout << "Finished while Statement" << endl;
		cout << currVal << " occurs " << cnt << " times" << endl;
	} // outermost if statement ends here

	return 0; 
}
int main()
{
	ifInputAppearance();
	return 0;
}