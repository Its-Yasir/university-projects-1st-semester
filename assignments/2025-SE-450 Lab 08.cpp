#include <iostream>
using namespace std;

int main()
{
	//Task1: Print number in reverse order. 
	/*
    int n;
	cout << "Enter a integer: ";
	cin >> n;
	if (n < 0) {
		n = -n;
	}
	int reversed = 0;
	for (int i = n; i != 0; i = i / 10) {
		reversed = reversed * 10 + i % 10;
	}
	cout << "\n Reversed integer: " << reversed << endl;
	*/


	//Task2: Debugging:=>.
	/*
	bool isPalindrome = false;
	do {
		string str;
		cout << "\n";
		cout << "Enter a word: ";
		cin >> str;
		string reverse;
		int length = str.length();
		for (int i = length; i >= 0; i--) {
			cout << "\n value of I: " << i << endl;
			cout << "\n Length of reverse in loop before add: " << reverse.length() << endl;
			reverse = reverse + str[i];
			cout << "\n Value of string: " << str[i];
			cout << "\n Length of reverse in loop after add: " << reverse.length() << endl;
			cout << "\n Current reverse in loop: " << reverse << endl;
		}
		cout << "\n Reversed word: " << reverse << endl;
		cout << "\n Length of reverse word: " << reverse.length() << endl;
		cout << "\n Lebgth of original word: " << str.length() << endl;
		for(int i = 0; i <= reverse.length(); i++) {
			cout << reverse[i] << "\t";
		}
		for(int i = 0; i < str.length(); i++) {
			cout << str[i] << "\t";
		}
		cout << "\n";
		if(reverse == str) {
			cout << str << " is a palindrome." << endl;
			isPalindrome = true;
		} else {
			cout << str << " is not a palindrome." << endl;
		}
	} while (!isPalindrome);
	*/

	//Task2: Check palindrome:
	/*
	bool isPalindrome = false;
	do {
		string str;
		cout << "\n";
		cout << "Enter a word: ";
		cin >> str;
		string reverse;
		int length = str.length();
		for (int i = length-1; i >= 0; i--) {
			reverse = reverse + str[i];
		}
		cout << "\n Reversed word: " << reverse << endl;
		if (reverse == str) {
			cout << str << " is a palindrome." << endl;
			isPalindrome = true;
		}
		else {
			cout << str << " is not a palindrome." << endl;
		}
	} while (!isPalindrome);
	*/

	//Task 3: Find average marks
	/*
	int marks;
	bool validInput = false;
	int sum = 0;
	int count = 0;
	do {
		int marks;
		cout << "\nEnter marks for " << (count + 1) << " Subject(0-100): ";
		cin >> marks;
		if(marks >= 0 && marks <= 100) {
			sum = sum + marks;
			count++;
			validInput = true;
		} else {
			cout << "\n Invalid input. Please enter marks between 0 and 100." << endl;
			validInput = false;
		}
	} while (!validInput || count < 5);
	float average = sum / 5;
	cout << "\nAverage marks: " << average << endl;
	*/

	//Task 4: Calculate cost and items
    /*
	int itemCount = 0;
	double totalCost = 0.0;
	bool isZero = false;
	do {
		float cost;
		cout << "\nEnter cost of item " << (itemCount + 1) << " (enter 0 to finish): ";
		cin >> cost;
		if (cost < 0) {
			cout << "\nEnter a positive value.";
		}
		else if (cost == 0.0) {
			isZero = true;
		}
		else if(cost > 0){
			itemCount++;
			totalCost = totalCost + cost;
		}
	} while (!isZero);
	cout << "\nTotal items: " << itemCount << endl;
	cout << "\nTotal cost: $" << totalCost << endl;
	*/

	//Task 5: Input positive odd integers and count
	/*
	int positiveCount = 0;
	bool isNegative = false;
	do {
		int n;
		cout << "\nEnter a positive odd integer (negative to stop): ";
		cin >> n;
		if (n < 0) {
			cout << "\nYou Entered a negative integer. Stopping input." << endl;
			isNegative = true;
		}
		else if (n > 0 && n % 2 != 0) {
			positiveCount++;
		}
	} while (!isNegative);
	cout << "\nTotal positive odd integers entered: " << positiveCount << endl;
	*/


	//Task 6: Check Password for 3 times
	/*
	string correctPassword;
	cout << "\nSet new password: ";
	cin >> correctPassword;
	int noOfTries = 3;
	bool isBlocked = false;
	do {
		string inputPassword;
		cout << "\nEnter your password: ";
		cin >> inputPassword;
		if (inputPassword != correctPassword) {
			noOfTries--;
		}
		if(noOfTries == 0) {
			isBlocked = true;
			cout << "\nYour account is blocked due to 3 incorrect attempts." << endl;
		} else if (inputPassword == correctPassword) {
			cout << "\nAccess granted. Welcome!" << endl;
			isBlocked = true;
		} else {
			cout << "\nIncorrect password. You have " << noOfTries << " attempts left." << endl;
		}
	} while (!isBlocked);
	*/
	

	//Task 7: Print * and # of size n x n
	/*
		int n;
		cout << "Enter size of the pattern (n x n): ";
		cin >> n;
		cout << endl;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i % 2 == 0) {
					if (j % 2 != 0) {
						cout << "# ";
					}
					else {
						cout << "* ";
					}
				}
				else if (i % 2 != 0) {
					if (j % 2 != 0) {
						cout << "* ";
					}
					else {
						cout << "# ";
					}
				}
			}
			cout << endl;
		}
	*/

	
	//Task 8: Input temperature untill -999
	/*
	double sum = 0.0;
	int count = 0;
	bool isSentinel = false;
	bool isFirstInput = true;
	float highestTemp;
	float lowestTemp;
	do {
		float temperature;
		cout << "Enter temperature (-999 to stop): ";
		cin >> temperature;
		cout << endl;
		if (isFirstInput) {
			highestTemp = temperature;
			lowestTemp = temperature;
		}
		if (temperature == -999) {
			isSentinel = true;
		}
		else {
			if (!isFirstInput) {
				if (highestTemp < temperature) {
					highestTemp = temperature;
				}
				if (lowestTemp > temperature) {
					lowestTemp = temperature;
				}
			}
			sum += temperature;
			count++;
			isFirstInput = false;
		}
	} while (!isSentinel);
	double average = sum / count;
	cout << "\nAverage temperature: " << average;
	cout << "\nHighest Temperature: " << highestTemp;
	cout << "\nLowest Temperature: " << lowestTemp;
	cout << "\nTotal ENtries: " << count;
	*/
	

	//Task 9: Find smallest factor of a given number
	/*
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << endl;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			cout << "\nSmallest factor is: " << i;
			break;
		}
	}
	*/


	//Task 10: input +ve number and find sum of acceptable integers
	/*
	bool isMultiple = false;
	int sum = 0;
	do {
		int n;
		cout << "Enter a positive integer: ";
		cin >> n;
		cout << endl;
		if (n % 7 == 0) {
			isMultiple = true;
			cout << "Multiple of 7 is Entered, Program Exited." << endl;
		}
		else {
			if (n % 3 == 0) {
				cout << "Multiple of 3 is entered: skipped" << endl;
			}
			else {
				sum += n;
			}
		}

	} while (!isMultiple);
	cout << "Sum of accepted numbers: " << sum;
	*/


    return 0;
}
