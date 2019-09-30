




//
//  myDate.h
//  myDate
//  Class CECS282 FALL 2019
//  Created by AIMI ROSS on 9/27/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#ifndef MYDATE_H
#define MYDATE_H
#include <iostream>
using namespace std;

class myDate {
    int month;
    int day;
    int year;
public:
    myDate();
    myDate(int, int, int);
    void display();
    void increaseDate(int);
    void decreaseDate(int);
    int daysBetween(myDate D);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    string dayName();
};

#endif /* myDate_h */

