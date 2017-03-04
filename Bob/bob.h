//
//  bob.h
//  bob
//
//  Created by Emre Ay on 04/03/2017.
//  Copyright © 2017 Emre Ay. All rights reserved.
//

#ifndef bob_h
#define bob_h

#include <string>

const std::string kSure = "Sure.";
const std::string kChillOut = "Whoa, chill out!";
const std::string kFine = "Fine. Be that way!";
const std::string kWhatever = "Whatever.";

class bob{
public:
    bob();
    ~bob();
    std::string hey(std::string input);
private:
    bool CheckForQuestion(std::string);
    bool CheckForYelling(std::string);
    bool CheckEmpty(std::string);
};

#endif /* bob_h */
