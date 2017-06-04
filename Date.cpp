//
// Created by root on 6/4/17.
//

#include "Date.h"


Date::Date(int year, int month, int day) : year(year), month(month), day(day){

}

bool Date::operator<(const Date &right) const {
    if(year > right.year)
        return false;
    else if(year == right.year){
        if(month > right.month)
            return false;
        else if(month == right.month){
            if(day > right.day)
                return  false;
        }
    }
    return false;
}