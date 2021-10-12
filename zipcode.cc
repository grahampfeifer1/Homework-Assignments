/**
 *   @file: zipcode.cc
 * @author: Graham Pfeifer
 *   @date: 9/30/2021
 *  @brief: Gives barcodes for given zipcodes
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

string getDigitCode(char digit);
string getCheckDigitCode(int checkDigit);
int getCheckDigitValue(int sum);

int main(int argc, char const *argv[]) {
    char choice; ///variable declaration
    char digit1;
    char digit2;
    char digit3;
    char digit4;
    char digit5;
    char checkDigit;
    int sum;
    string barcode1;
    string barcode2;
    string barcode3;
    string barcode4;
    string barcode5;
    string barcode6;
    bool check1;
    bool check2;
    bool check3;
    bool check4;
    bool check5;
    do {
        cout << "Enter a code: "; ///user input
        cin >> digit1 >> digit2 >> digit3 >> digit4 >> digit5;
        sum = digit1 + digit2 + digit3 + digit4 + digit5; ///finding the sum to use as input for the check digit function
        checkDigit = getCheckDigitValue(sum); ///using the check digit function to get the check digit in the main function
        check1 = isdigit(digit1);
        check2 = isdigit(digit2);
        check3 = isdigit(digit3);
        check4 = isdigit(digit4);
        check5 = isdigit(digit5);
        if (check1 == 0 || check2 == 0 || check3 == 0 || check4 == 0 || check5 == 0) {
            cout << "Invalid Code." << endl;
        }
        else {
            barcode1 = getDigitCode(digit1);
            barcode2 = getDigitCode(digit2);
            barcode3 = getDigitCode(digit3);
            barcode4 = getDigitCode(digit4);
            barcode5 = getDigitCode(digit5);
            barcode6 = getCheckDigitCode(checkDigit);
            cout << "| " << barcode1 << " " << barcode2 << " " << barcode3 << " " << barcode4 << " " << barcode5 << " " << barcode6 << " |" << endl;
        }
        cout << "More codes (y/n)? ";
        cin >> choice; 
    } while (choice == 'y');
    return 0;
} /// main

string getDigitCode(char digit){
    string code;
    switch (digit) { ///using a switch case to asssign each digit a corresponding barcode
        case '1':
            code = ":::||";
            break;
        case '2':
            code = "::|:|";
            break;
        case '3':
            code = "::||:";
            break;
        case '4':
            code = ":|::|";
            break;
        case '5':
            code = ":|:|:";
            break;
        case '6':
            code = ":||::";
            break;
        case '7':
            code = "|:::|";
            break;
        case '8':
            code = "|::|:";
            break;
        case '9':
            code = "|:|::";
            break;
        case '0':
            code = "||:::";
            break;
        default:
            code = "Invalid Code"; ///the default in this case is used to print the invalid code message
    }
    return code;
}

string getCheckDigitCode(int checkDigit){
    string code;
    switch (checkDigit) { ///same principle as the other digit codes but for the check digit
        case 1:
            code = ":::||";
            break;
        case 2:
            code = "::|:|";
            break;
        case 3:
            code = "::||:";
            break;
        case 4:
            code = ":|::|";
            break;
        case 5:
            code = ":|:|:";
            break;
        case 6:
            code = ":||::";
            break;
        case 7:
            code = "|:::|";
            break;
        case 8:
            code = "|::|:";
            break;
        case 9:
            code = "|:|::";
            break;
        case 10:
            code = "||:::";
            break;
        default:
            code = "Invalid Code";
    }
    return code;
}

int getCheckDigitValue(int sum){
    int checkDigit1;
    int checkDigit2;
    checkDigit1 = sum % 10; 
    checkDigit2 = 10 - checkDigit1; ///use the remainder of dividing by ten and subract from 10 to find the check digit
    return checkDigit2;
}