/**
 *   @file: encryption.cc
 * @author: Graham Pfeifer
 *   @date: 10/15/2021
 *  @brief: Lab 8
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

void displayMenu();
int getKeyValue(int key);
void encryption(int key);
void decryption(int key);

int main() {
    int choice, key;
    key = 3; //default
    do {
        displayMenu();
        cin >> choice;
        if (choice == 1) {
            key = getKeyValue(key);
        }
        else if (choice == 2) {
            encryption(key);
        }
        else if (choice == 3) {
            decryption(key);
        }
    } while(choice != 4);
    return 0;
}

void displayMenu(){
    cout << "1. Set the shift key value (default is 3)" << endl
         << "2. Encrypt a file" << endl
         << "3. Decrypt a file" << endl
         << "4. Quit" << endl
         << "Enter your choice: ";
}

int getKeyValue(int key){
    do {
    cout << "Enter a value for the key value between 1 and 10: ";
    cin >> key;
    } while ((key < 1) || (key > 10));
    return key;
}

void encryption(int key){
    ifstream ins;
    ofstream outs;
    string input;
    string output;
    char ch;
    cout << "Enter an input file name: ";
    cin >> input;
    ins.open(input);
    if (ins.fail()){
        cout << "Error: file not found" << endl;
        exit(0);
    }
    cout << "Enter an output file name: ";
    cin >> output;
    outs.open(output);
    ins.get(ch);
    while (!ins.eof()){
        ch = ch + key;
        outs << ch;
        ins.get(ch);
    }
    ins.close();
    outs.close();
}

void decryption(int key){
    ifstream ins;
    ofstream outs;
    string input;
    string output;
    char ch;
    cout << "Enter an input file name: ";
    cin >> input;
    ins.open(input);
    if (ins.fail()){
        cout << "Error: file not found" << endl;
        exit(0);
    }
    cout << "Enter an output file name: ";
    cin >> output;
    outs.open(output);
    ins.get(ch);
    while (!ins.eof()){
        ch = ch - key;
        outs << ch;
        ins.get(ch);
    }
    ins.close();
    outs.close();
}