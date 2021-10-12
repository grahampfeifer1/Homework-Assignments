/**
 *   @file: integers.cc
 * @author: Graham Pfeifer
 *   @date: 10/11/2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
/**
 * getNumDigits - finds and returns the number of digits in a positive integer
 * @param number - a positive integer
 * @return - returns the amount of digits in the integer
 */
int getNumDigits (int number);
/**
 * getNthDigit - finds and returns the number in a chosen digit 
 * @param number - the positive integer that is being used to find the digit
 * @param n - the number of the digit that is being found
 * @return - returns the nth digit of number
 */
int getNthDigit (int number, int n);
/**
 * getSumSigits - finds and returns the sum of all the digits in the number
 * @param number - the value to be added
 * @return - returns the sum of all the digits in number
 */
int getSumDigits (int number);
/**
 * isPalindrome - finds if a positive integer is a Palindrome
 * @param number - the value to be evaluated
 * @return - returns true or false
 */
bool isPalindrome (int number);
/**
 * getInteger - finds and returns a positive integer
 * @param number - the positive integer
 * @return - returns number if it is positive
 */
int getInteger ();
/**
 * displayMenu - displays the menu to the user
 */
void displayMenu ();

int main(int argc, char const *argv[]) {
    int choice;
    int digit;
    int numDigits;
    int positiveInteger;
    int nTerm;
    int sum;
    bool palindrome;

    displayMenu ();
    cout << "Enter a choice: ";
    cin >> choice;
    while (choice != 5){
        switch (choice) {
            case 1:
                positiveInteger = getInteger ();
                numDigits = getNumDigits(positiveInteger);
                cout << positiveInteger << " has " << numDigits << " digits." << endl;
                break;
            case 2:
                positiveInteger = getInteger ();
                do {
                    cout << "Enter a position: ";
                    cin >> nTerm;
                } while (nTerm < 0);
                digit = getNthDigit(positiveInteger, nTerm);
                cout << "Digit number " << nTerm << " is " << digit << endl; 
                break;
            case 3:
                positiveInteger = getInteger ();
                sum = getSumDigits (positiveInteger);
                cout << "The sum of all digits in " << positiveInteger << " is " << sum << endl;
                break;
            case 4:
                positiveInteger = getInteger ();
                palindrome = isPalindrome(positiveInteger);
                if (palindrome == true){
                    cout << "The number " << positiveInteger << " is a palindrome." << endl;
                }
                else {
                    cout << "The number " << positiveInteger << " is not a palindrome." << endl;
                }
                break;
            case 5:
                return 0;
                break;
            default:
                displayMenu ();
        }
        displayMenu ();
        cout << "Enter a choice: ";
        cin >> choice;
    }
    return 0;
}/// main

int getNumDigits (int number){
    double remainder;
    int count = 1;
    remainder = number / 10.0;
    while (remainder > 1) {
        remainder = remainder / 10;
        count++;
    }
    return count;
}

int getNthDigit (int number, int n){
    int digit;
    int numDigits;
    numDigits = getNumDigits(number);
    if (numDigits < n) {
        cout << "Invalid position" << endl;
        return 0;
    }
    else {
        while (n > 0) {
            digit = number % 10;
            number = number / 10;
            n = n - 1;
        }
    }
    return digit;
}

int getSumDigits (int number){
    int numDigits;
    int sum = 0;
    numDigits = getNumDigits(number);
    while (numDigits > 0) {
        sum = sum + (number % 10);
        number = number / 10;
        numDigits = numDigits - 1;
    }
    return sum;
}

bool isPalindrome (int number){
    int digit;
    int reverse = 0;
    int input;
    bool isPalindrome;
    input = number;
    do {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    } while (number != 0);
    if (input == reverse) {
        isPalindrome = true;
    }
    else {
        isPalindrome = false;
    }
    return isPalindrome;
}

int getInteger (){
    int number;
    do {
        cout << "Enter a positive integer: ";
        cin >> number;
    } while (number < 0);
    return number;
}

void displayMenu (){
    cout << "1. Find the number of digits in an interger." << endl
         << "2. Find the nth digit in an integer." << endl
         << "3. Find the sum of all digits of an integer." << endl
         << "4. Is the integer a palindrome?" << endl
         << "5. Quit" << endl; 
}

