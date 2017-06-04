//
// Created by root on 6/4/17.
//

#ifndef STLBASE_TASK_H
#define STLBASE_TASK_H

#include <string>
#include <iostream>
#include "Date.h"

class Task {
public:
    explicit Task(const std::string description = "", bool done = false, int year = 2017, int month = 1, int day = 1);
    bool operator == (const Task &right) const;

    std::string description;
    bool done;
    Date deadline;

};


#endif //STLBASE_TASK_H
