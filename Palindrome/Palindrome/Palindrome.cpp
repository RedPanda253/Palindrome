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

bool check(string = "nothing");
string reduce(string = "nothing");


int main() {
	string repeat,
		input,
		reduced_string;
	cout << "Welcome to the palindrome tester.\n"
		<< "When you are done just press enter when inputting to exit\n";
	do {
		
			cout << "Please enter a word or phrase to test:\n";
		getline(cin, input);
		cin.clear();
		if (input == "") {
			break;
		}
		//cout << reduce(input);
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
	int check1 = 0, check2 = input.size()-1;
	while(check1 <= check2) {
		if (check1 == check2) {
			retVal = true;
			break;
		}
		else if (check2 - 1 == check1 && input[check1] == input[check2]) {
			retVal = true;
			break;
		}
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
	vector <char> arr;
	for (int x = 0; x < reduceVal.size(); x++) {
		arr.push_back(tolower(reduceVal[x]));
	}
	char num[] = { '0','1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < arr.size(); i++) {
		if ((arr[i] >= 97 && arr[i] <= 122)or(arr[i] >= 48 && arr[i] <= 57)) {
			retVal += arr[i];
		}
	}
	return (retVal);
}
