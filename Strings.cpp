//
//  main.cpp
//  Section10
//
//  Created by Wade Benoit on 8/22/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//

#include <iostream>
#include <cstring> // For c-style string functions
#include <cctype>  // For character-based functions
#include <string>  // Gives us c++ strings object to use


using namespace std;

int main(int argc, const char * argv[]) {
    
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};

    char temp[50] {};


    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "-----------------------" << endl;

    cout << "Hello " << firstName << ", your first name has " << strlen(firstName) << " characters" << endl;
    cout << "And your last name is " << lastName << " which has " <<strlen(lastName) << " characters" << endl;


    strcpy(fullName, firstName);   // Copies firstName into fullName
    strcat(fullName, " ");         // Concatenates a space at the end of the fullName array, "Wade "
    strcat(fullName, lastName);    // Concatenates the last name after the space

    cout << "Your full name is: " << fullName << endl;

    
    

    
    
    
    
    
    
    // How to read in an entire line, with spaces
    
    char fullName2[50] {};
    cout << "Enter your full Name again: ";
    cin.getline(fullName2, 50);
    cout << "Your full name again is: " << fullName2 << endl;
    cout << "-------------------------" << endl;

    strcpy(temp, fullName2);
    if (strcmp(temp, fullName2) == 0) {
        cout << temp << " and " << fullName2 << " are the same." << endl;
    }
    else {
        cout << temp << " and " << fullName2 << " are not the same." << endl;

    }

    for (size_t i{0}; i < strlen(fullName2); i++) {
        if(isalpha(fullName2[i])) {
            fullName2[i] = toupper(fullName2[i]);
        }
    }

    cout << "-----------------" << endl;
    cout << fullName2 << endl;
    
    
    
    
    
    
    
   
    
    
    
    

    string s1 {"Wade Benoit"};

    // This will print out name vertically
    for (char c: s1) {
        cout << c << endl;
    }

    // This will pring out ASCII codes for each char vertically
    for(int v : s1) {
        cout << v << endl;
    }
    
    
    
    
    
    
    
    
    
    
    

    //C++ strings examples


    // All of these strings are technically objects of the class string

    string s0;              // Empty String not garbage
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};   // "App"
    string s7 (10, 'X');    // "XXXXXXXXXX"


    // Comparisons
    cout << boolalpha;
    cout << s1 << " == " << s2 << "   " << (s1 == s2) << endl;
    cout << s1 << " == " << s1 << "   " << (s1 == s1) << endl;
    cout << "----------------------" << endl;


    // Converting
    s3 = "Frank";

    s3.at(0) = 'C';

    cout << s3 << endl;



    // Getline with c++ strings

    string fullName {};

    cout << "Enter your full name (first, middle, and last) here: ";
    getline(cin, fullName);
    cout << "Your full name as entere is: " << fullName << endl;


    // Find() with C++ strings
    s1 = "The secret word is Boo";
    string word {};

    cout << "Enter the secret word to find: ";
    cin >> word;

    size_t position = s1.find(word);

    if (position != string::npos) {
        cout << "Found " << word << " at position " << position << endl;
    }
    else {
        cout << "Did not find " << word << " in the secret phrase" << endl;
    }
    
    
    
    
    
    return 0;
}
    
    
    
    
    
    
    
