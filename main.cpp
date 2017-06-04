#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include "Task.h"
#include <string>

int main() {
    //Making some tasks.
    Task t1{"Programming.", false, 2017, 03, 01};
    Task t2{"STL.", false, 2017, 04 ,04};
    Task t3{"Examination.", false, 2017, 05 ,10};

    std::list<Task>agendaList = {t1,t2, t3};
    std::vector<Task>agendaTask = {t1,t2,t3};
    

    return 0;
}