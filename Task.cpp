//
// Created by root on 6/4/17.
//

#include "Task.h"

Task::Task(const std::string description, bool done, int year, int month, int day) : description(description), done(done){
    deadline.year = year;
    deadline.month = month;
    deadline.day = day;
}

bool Task::operator==(const Task &right) const{
    if(description != right.description)
        return false;
    return true;
}