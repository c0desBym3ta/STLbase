//
// Created by root on 6/4/17.
//

#ifndef STLBASE_DATE_H
#define STLBASE_DATE_H


class Date {
public:
    explicit Date(int year = 2017, int month = 1, int day = 1); //Constructor with default parameters.
    bool operator <(const Date &right) const; //Now we are able to make the confronts to generic variables because we overload the operator.

    int year, month, day;

};


#endif //STLBASE_DATE_H
