//
//  myDate.cpp
//  myDate
//  Class CECS282 FALL 2019
//  Created by AIMI ROSS on 9/27/19.
//  Copyright © 2019 AIMI ROSS. All rights reserved.
//

#include "myDate.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int Greg2Julian(int month, int day, int year) {// pass in the Month, Day, Year and return Julian number
    int JD;
    // have to figure out how to convert greg to Julian number.
    return JD;
}
void Julian2Greg(int JD, int &month, int &day, int &year); // pass in the Julian Date, and get the correct Month, Day and Year through the parameter list-pass by reference.



// a default constructor.
myDate::myDate(){
    month = 0;
    day = 0;
    year = 0;
}

// myDate constructor. set values in variables.
myDate::myDate(int M, int D, int Y){
    if ((M >0 && M <13) && (D > 0 && D < 32) && (Y > 1801 && Y < 2099)){
        month = M;
        day = D;
        year = Y;
    }
    else
        myDate();
}

// sidplay as September 27, 2019
void myDate::display(){
    string monthString;
    if(month == 1)
        monthString = "January";
    else if(month == 2)
        monthString = "Febuary";
    else if(month ==3)
        monthString = "March";
    else if(month == 4)
        monthString = "April";
    else if(month == 5)
        monthString = "May";
    else if(month == 6)
        monthString = "June";
    else if(month == 7)
        monthString = "July";
    else if(month == 8)
        monthString = "August";
    else if(month == 9)
        monthString = "September";
    else if(month == 10)
        monthString = "October";
    else if(month == 11)
        monthString = "Nobember";
    else
    monthString = "December";
    cout << monthString << " " << day << ", " << year << endl;
}

// increase date by passing value.
void myDate::increaseDate(int N){
    day += N;
}

// decrease date by pasing value
void myDate::decreaseDate(int N){
    day -= N;
}

// calculate the dates between myDate and passing Dates.
int myDate::daysBetween(myDate D){
    int daysBTWN;
    // have to think something to convert!!!!*********************
    return daysBTWN;
}

// returning the Month
int myDate::getMonth(){
    return month;
}

// returning the Day
int myDate::getDay(){
    return day;
}

// returning the Year
int myDate::getYear(){
    return year;
}

int myDate::getUT(){
    return UT;
}

// returning the number of days since the current year began.
int myDate::dayOfYear(){
    int theDayOfYear;
    return theDayOfYear;
}

// returning name of the day.
string myDate::dayName(){
    return "Monday!";
}

