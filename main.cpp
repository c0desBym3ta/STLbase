#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include "Task.h"
#include <string>

void line();

int main() {
    //Making some tasks.
    Task t1{"Programming.", false, 2017, 03, 01};
    Task t2{"STL.", false, 2017, 04 ,04};
    Task t3{"Examination.", false, 2017, 05 ,10};

    //Making list with the task using vector and list library.
    std::list<Task>agendaList = {t1,t2, t3};
    std::vector<Task>agendaVector = {t1,t2,t3};

    //Using one from the list operations (push back).
    agendaList.push_back(t1);
    agendaList.push_back(t2);
    agendaList.push_back(t3);

    //Using one frome the vector operations (push back).
    agendaVector.push_back(t1);
    agendaVector.push_back(t2);
    agendaVector.push_back(t3);

    //Will be printing from 2 times. One for the push back operation.
    std::cout << "Normanl Vector Printing. " << std::endl;
    std::cout << "------------------------" << std::endl;
    for(int i = 0; i < agendaVector.size(); i++)
        std::cout << (agendaVector[i]).description << std::endl;
    //Tyring something out.
    line();
        std::cout << "Priting Using AutoItr." << std::endl;
        std::cout << "----------------------" << std::endl;
        for(auto itr = agendaVector.begin(); itr != agendaVector.end(); itr++)
            std::cout << itr->description << std::endl;
    line();

    std::cout << "Normal List Printing." << std::endl;
    std::cout << "---------------------" << std::endl;
    /*std::cout << "---------------------" << std::endl;
    for(int i = 0; i<agendaList.size(); i++)
        std::cout << (
    */
    line();

        std::cout << "Printing Using AutoItr." << std::endl;
        std::cout << "-----------------------" << std::endl;
        for(auto itr = agendaList.begin(); itr != agendaList.end(); itr++)
            std::cout << itr->description << std::endl;
    line();
    return 0;
}


void line(){
    std::cout << std::endl;
}