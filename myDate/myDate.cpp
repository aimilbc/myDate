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
#include <math.h>
using namespace std;

// pass in the Month, Day, Year and return Julian number
int Greg2Julian(int month, int day, int year) {
    double a = (month + 9)/12;
    int intA = a;
    double b = 7*(year + intA)/4;
    int intB = b;
    double c = (275*month)/9;
    int intC = c;
    
    double UT = 12/24;
    double doublesin = 0.5*sin(100*year + month-19002.5);
    double roundUT = round(UT+doublesin);
    int intUT = roundUT;
    
    
    int JD = 367*year - intB + intC + day + 1721013.5 + intUT + 0.5;
    return JD;
}

// pass in the Julian Date, and get the correct Month, Day and Year through the parameter list-pass by reference.
void Julian2Greg(int JD, int &month, int &day, int &year){
    int p,q,r,s,t,u,v;
    p = JD + 68569;
    q = 4*p/146097;
    r = p - (146097*q + 3)/4;
    s = 4000*(r+1)/1461001;
    t = r - 1461*s/4 + 31;
    u = 80*t/2447;
    v = u/11;
    year = 100*(q-49)+s+v;
    month = u + 2 - 12*v;
    day = t - 2447*u/80;
}



// a default constructor.
myDate::myDate(){
    month = 9;
    day = 27;
    year = 1987;
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
    int JD = Greg2Julian(month, day, year);
    JD += N;
    Julian2Greg(JD, month,day,year);
}

// decrease date by pasing value
void myDate::decreaseDate(int N){
    int JD = Greg2Julian(month, day, year);
    JD -= N;
    Julian2Greg(JD, month,day,year);
}

// calculate the dates between myDate and passing Dates.
int myDate::daysBetween(myDate D){
    int thisJD = Greg2Julian(month, day, year);
    int otherJD = Greg2Julian(D.month, D.day, D.year);
    return otherJD - thisJD;
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

// returning the number of days since the current year began.
int myDate::dayOfYear(){
    int leap[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    int nonLeap[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int theDayOfYear = 0;
    
    int JD = Greg2Julian(month, day, year);
    display();
    if (JD%4 ==0)
        for (int x = 0; x < month; x++){
            theDayOfYear += leap[x];
        }
    else
        for(int x = 0; x<month;x++){
            theDayOfYear += nonLeap[x];
        }
    theDayOfYear += day;
    
    return theDayOfYear;
}

// returning name of the day.
string myDate::dayName(){
    int JD = Greg2Julian(month, day, year);
    if(JD%7==2)
        return "Monday!";
    else if(JD%7==3)
        return "Tuesday!!";
    else if(JD%7==4)
        return "Wednesday!!!";
    else if(JD%7==5)
        return "Thursday!!!!";
    else if(JD%7==6)
        return "Friday!!!!!";
    else if(JD%7==0)
        return "Saturday!!!!!!";
    else
        return "Sunday";
}


