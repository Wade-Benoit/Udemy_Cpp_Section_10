//
//  main.cpp
//  Section10Challenge
//
//  Created by Wade Benoit on 8/22/19.
//  Copyright © 2019 Computer Science 2. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
   
    //BIG Section 10 Challenge:
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secretMessage {};
    string encryptedMessage {};
    char   current {};
    
    
    
    
    // Ask user for secret message to encrypt:
    
    cout << "Enter your secret message: ";
    getline(cin, secretMessage);
    
    
    
    
    
    cout << "\n\nEncrypting Message...." << endl;
    
    
    // Go through each character, find position in alphabet, build message with letter in that position from key string
    
    
    
//         THIS IS THE WAY I DID IT, NOT AS EFFICIENT
//    for (size_t i{0}; i < secretMessage.size(); i++) {
//
//        current = secretMessage.at(i);
//
//    if(isalpha(current) == true && isdigit(current) == false) {
//
//
//        auto pos = alphabet.find(current);
//        encryptedMessage += key.at(pos);
//        }
//
//
//
//    else {
//            encryptedMessage += current;
//        }
//
//    }
    
    
    for (auto c : secretMessage) {
        size_t position = alphabet.find(c);
        
        if (position != string::npos) {
            current = key.at(position);
            encryptedMessage += current;
            
        }
        
        else {
            encryptedMessage += c;
        }
    }
    
    
    cout << "\n\nEncrypted Message:  " << encryptedMessage << endl;
    
    
    
    
    //Decrypt it back to original:
    
    cout << "\n\nDecrypting Message..." << endl;
    
    string decryptedMessage {};
    
//    for (size_t i{0}; i < encryptedMessage.size(); i++) {
//
//        current = encryptedMessage.at(i);
//
//        if(isalpha(current) == true && isdigit(current) == false) {
//
//
//            auto pos = key.find(current);
//            decryptedMessage += alphabet.at(pos);
//        }
//
//
//
//        else {
//            decryptedMessage += current;
//        }
//
//    }
    
    
    for (auto i : encryptedMessage) {
        size_t position = key.find(i);
        
        if (position != string::npos) {
           char newChar = alphabet.at(position);
            
            decryptedMessage += newChar;
            
            
        }
        else {
            decryptedMessage += i;
            
        }
    }
    
    cout << "\n\nDecrypted Message: " << decryptedMessage << endl;
    
    
    
    
    return 0;
}

