#include <iostream>
#include "myHeader.h"

class School
{
    private:
      std::string name;
      int age;
      bool enrolled;

    public:
      School()
      {
        this->enrolled = true;
      }  

      void setName(std::string name)
      {
        this->name = name;
      }

      void setAge(int age)
      {
        this->age = age;
      }

      void banner()
      {
        std::cout << name << " is " << age << " years old.\n";
      }
};


int main()
{
    School mine;
    mine.setName("Tyler");
    mine.setAge(33);

    School wife;
    wife.setName("Precious");
    wife.setAge(30);

    

    wife.banner();
    mine.banner();

    Person me("Tyler");
    me.title();

    return 0;
}