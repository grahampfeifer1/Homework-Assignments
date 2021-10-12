/**
 *   @file: word-count.cc
 * @author: Graham Pfeifer
 *   @date: 9/24/2021
 *  @brief: CS 2400 Homework 2 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

string text;
double word_count;
double sentence_count;
double average_word;

int main(int argc, char const *argv[]) {
    cout << "Enter a paragraph..." << endl;
    while (text[text.length() - 3] != '@' && text[text.length() - 2] != '@' && text[text.length() - 1] != '@') {
        cin >> text;
        word_count += 1;
        if (text[text.length() - 1] == '.' || text[text.length() - 1] == '?' || text[text.length() - 1] == '!')
		    sentence_count += 1;
    }
    if (word_count == 0) {
        cout << "You did not enter any words." << endl;
    }
    if (sentence_count == 0) {
        cout << "You did not enter any sentences." << endl;
    }
    if (word_count > 0) {
        cout << "Word count: " << word_count << endl;
    }
    if (sentence_count > 0) {
        average_word = word_count / sentence_count;
        cout << "Sentence count: " << sentence_count << endl
        << "Average words per sentence: " << average_word;
    }
    return 0;
} /// main