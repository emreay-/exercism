//
//  bob.cpp
//  bob
//
//  Created by Emre Ay on 04/03/2017.
//  Copyright © 2017 Emre Ay. All rights reserved.
//

#include "bob.h"

bob::bob(){}
bob::~bob(){}

// Checks if input is empty or only include space
bool bob::CheckEmpty(std::string input){
    if (input.empty()) {
        return true;
    } else {
        bool state = true;
        const size_t kSize = input.length();
        for (size_t i = 0; i < kSize; i++) {
            state = state && isspace(input[i]);
        }
        return state;
    }
}
// Checks if all letters are uppercase
bool bob::CheckForYelling(std::string input){
    bool state = true;
    int count = 0;
    const size_t kSize = input.length();
    for (size_t i = 0; i < kSize; i++) {
        // if it is a letter
        if ((input[i] <= 'z' && input[i] >= 'a') || (input[i] <= 'Z' && input[i] >= 'A')) {
            state = state && isupper(input[i]);
            count++;
        }
    }
    if (count > 0) return state;
    else return false;
}

// Checks if a non-yelling string has a question mark at the end
bool bob::CheckForQuestion(std::string input){
    return !CheckForYelling(input) && ('?' == input.back());
}

std::string bob::hey(std::string input){
    bool question = CheckForQuestion(input);
    bool yelling = CheckForYelling(input);
    bool empty = CheckEmpty(input);
    
    if (question && !yelling && !empty) return kSure;
    else if (!question && yelling && !empty) return kChillOut;
    else if (!question && !yelling && empty) return kFine;
    else return kWhatever;
}
