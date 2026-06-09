#include <iostream>

class School
{
    public:
      std::string name;
      int age;

      void banner()
      {
        std::cout << name << " is " << age << "years old.\n";
      }
};


int main()
{
    School mine;
    mine.name = "Tyler";
    mine.age = 33;

    mine.banner();

    return 0;
}