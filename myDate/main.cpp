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
    myDate dayy(9, 27,1987);
    dayy.display();
    cout << dayy.getDay() << endl;
    cout << dayy.getYear() << endl;
    cout << dayy.getMonth() << endl;
    cout << dayy.getUT() << endl;
    return 0;
}

