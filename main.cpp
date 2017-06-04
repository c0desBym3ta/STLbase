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
   //for(int i = 0; i<agendaList.size(); i++)
        //std::cout << (

    line();

        std::cout << "Printing Using AutoItr." << std::endl;
        std::cout << "-----------------------" << std::endl;
        for(auto itr = agendaList.begin(); itr != agendaList.end(); itr++)
            std::cout << itr->description << std::endl;
    line();

    //COMPLETE IF IT'S COMPLETE. Use the normal way to search.
    std::cout << "CHECK IF DONE OR NOT!" << std::endl;
    std::cout << "---------------------" << std::endl;
    for(Task &t : agendaVector)
        if(t.description == "Programming."){
            std::cout << "Found!" << std::endl;
            t.done = true;
        }
    line();

    //Using the operational way to search.
    std::cout << "Using find operations of list!" << std::endl;
    std::cout << "------------------------------" << std::endl;
    auto itr = std::find((std::begin(agendaList)), std::end(agendaList), t2);
    if(itr != std::end(agendaList)){
        std::cout << "FOUND with operations find!" << std::endl;
        itr->done = true;
    }
    line();

    //Making a multiple agenda that is be able to accept date and task.
    std::multimap<Date, Task> agendaM;
    Date d1(2017, 03, 01);
    Date d2(2017, 05, 04);
    Date d3(2017, 05, 10);

    //Making the pair of Date and Task.
    agendaM.insert(std::make_pair(d1,t1));
    agendaM.insert(std::make_pair(d2,t2));
    agendaM.insert(std::make_pair(d3,t3));
    agendaM.insert(std::pair <Date, Task> (d3,t3));

    std::cout << "Multiple Agenda!" << std::endl;
    std::cout << "----------------" << std::endl;
    Date d4(2017, 05 ,11);
    auto itrM = agendaM.find(d4);
    if(itrM != std::end(agendaM))
        std::cout << itrM->second.description << std::endl;
    else
        std::cout << "Nothing to be done!" << std::endl;

    auto results = agendaM.equal_range(d2);
    for(auto r = results.first; r!= results.second; r++){
        std::cout << r->second.description << std::endl;
    }

    return 0;
}


void line(){
    std::cout << std::endl;
}