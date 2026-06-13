#ifndef MYHEADER_H
#define MYHEADER_H

#include <iostream>


class Person
{
    private:
      std::string name;

    public:
      Person(std::string name) 
      {
        this->name = name;
      } 

      void title()
      {
        std::cout << name;
      }
};

#endif