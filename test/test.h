#ifndef _TEST_H_
#define _TEST_H_

#include <iostream>
#include <string>

struct data{
    int a = 0;
    std::string name;
    int age = 0;
};


struct Data{
    data d1;
    data d2;
};

class base{
public:
    int get_age();
    std::string get_name();

private:
    data data_source;

};





#endif