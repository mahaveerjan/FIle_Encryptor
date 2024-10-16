#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include <iostream>
#include "../file_handling/IO.hpp"
enum class Action
{
    ENCRYPT,
    DECRYPT
};
struct Task
{
    std::string filePath;
    std::fstream f_stream;
    Action action;

    Task(std::fstream &&stream, Action act, std::string filePath): f_stream(std::move(stream)), action(act), filePath(filePath){}

    std:: string toString(){
        std::ostringstream oss;
        oss<<filePath<<","<<(action ==Action::ENCRYPT? "ENCRYPT": "DECRYPT");t
    }


};


#endif