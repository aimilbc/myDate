//
//  main.cpp
//  myDate
//  Class CECS282 FALL 2019
//  Created by AIMI ROSS on 9/27/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#include "myDate.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    myDate dayy;
    dayy.display();
    int difference = dayy.daysBetween(myDate (9,27,1987));
    cout << "Difference is " << difference << endl;
    dayy.increaseDate(5);
    dayy.display();
    dayy.decreaseDate(5);
    dayy.display();
    cout << dayy.dayName() << endl;
    cout << dayy.dayOfYear() << endl;
    return 0;
}

