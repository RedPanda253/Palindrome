/*Palindrome.cpp
 *Isaiah Hocking
 *1-6-23
 *Purpose
 *		Create a program that allows a user to imput a sting and check to see if it is a palindrome
 */

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>

using namespace std;
//prototyping both functions to allow for them to be defined after the main function.
bool check(string = "nothing");
string reduce(string = "nothing");

int main() {
	string repeat,
		input,
		reduced_string;
	//opening text
	cout << "Welcome to the palindrome tester.\n"
		<< "When you are done just press enter when inputting to exit\n";
	do {
			cout << "Please enter a word or phrase to test:\n";
		getline(cin, input);
		cin.clear();
		//checking for an empty string to exit the program
		if (input == "") {
			break;
		}
		//cout << reduce(input);to check for palindromes
		//using check and reduce 
		if (check(reduce(input))) {
			cout << input << " Is a palindrome\n";
		}
		else {
			cout << input << " Is not a palindrome\n";
		}
	} while (true);


}

bool check(string input) {
	bool retVal = false;
	//making two variables to store the values of two letters opposite from eachother in the word to compare them
	int check1 = 0, check2 = input.size()-1;
	while(check1 <= check2) {
		if (check1 == check2) {
			retVal = true;
			break;
		}
		//checking if check 2 is one more than check 1 and checking if the letters at both spots are equal
		//to work with words that have an even number of letters
		else if (check2 - 1 == check1 && input[check1] == input[check2]) {
			retVal = true;
			break;
		}
		//checking if each letter are the same on either side of the word.
		if (input[check1] == input[check2]) {
			check1++;
			check2--;
			continue;
		}
		else {
			break;
		}
	}
	return(retVal);
}

string reduce(string input) {
	string reduceVal = input;
	string retVal;
	int length = 0;
	//creating a vector to store each character in the string and making all of the letters lowercase
	vector <char> arr;
	for (int x = 0; x < reduceVal.size(); x++) {
		arr.push_back(tolower(reduceVal[x]));
	}
	//using the ascii values for the letters and numbers to only include them in the return value
	//to have the reduces word be only lowercase numbers and letters
	for (int i = 0; i < arr.size(); i++) {
		if ((arr[i] >= 97 && arr[i] <= 122)or(arr[i] >= 48 && arr[i] <= 57)) {
			retVal += arr[i];
		}
	}
	return (retVal);
}
