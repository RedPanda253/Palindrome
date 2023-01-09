/*Palindrome.cpp
 *Isaiah Hocking
 *1-6-23
 *Purpose
 *		Create a program that allows a user to imput a sting and check to see if it is a palindrome
 */

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include <regex>
#include<algorithm>


using namespace std;

bool check(string = "nothing");
string reduce(string = "nothing");


int main() {
	string repeat,
		input,
		reduced_string;
	char repChar = 'y';
	do {
		cout << "Welcome to the palindrome tester.\n"
			<< "Please enter a word or phrase to test; ";
		getline(cin, input);
		reduced_string = reduce(input);
		cout << reduced_string;
		if (check(reduced_string)) {
			cout << input << " Is a palindrome\n";
		}
		else {
			cout << input << " Is not a palindrome\n";
		}


		cout << "would you like to check another word? (Y/N); ";
		cin >> repeat;
		repChar = tolower(repeat[0]);
	} while (repChar == 'y');


}

bool check(string input) {
	bool retVal = false;
	int check1 = 0, check2 = input.size();
	for (int i = 0; i < input.size(); i++) {

	}
	return(retVal);
}

string reduce(string input) {
	string reduceVal = input;
	string retVal;
	int length = 0;
	char remChar[] = { ' ','.','!','?',',' };
	for (int i = 0; i < 5; i++) {
		reduceVal.erase(remove(reduceVal.begin(), reduceVal.end(), remChar[i]), reduceVal.end());
	}
	vector <char> arr;
	for (int x = 0; x < reduceVal.size(); x++) {
		arr.push_back(tolower(reduceVal[x]));
	}
	for (int i = 0; i < arr.size(); i++) {
		retVal += arr[i];
	}
	return (retVal);
}
