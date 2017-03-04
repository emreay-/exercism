//
//  main.cpp
//  bob
//
//  Created by Emre Ay on 04/03/2017.
//  Copyright © 2017 Emre Ay. All rights reserved.
//

#include <iostream>
#include "bob.h"

using namespace std;

int main(int argc, const char * argv[]) {
    bob Bob;
    std::string input = "";
    std::cout << "--Bob: I'm listening..." << endl;
    while(input != "exit") {
        getline(cin,input);
        //cout << "'" << input << "'" << endl;
        cout << "--Bob: " << Bob.hey(input) << endl;
    }
    return 0;
}
