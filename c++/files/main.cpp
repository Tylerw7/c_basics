#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>



int main()
{
    // create a file
    std::ofstream file("example.txt");

    file << "Hello World\n";
    file << "Tyler Wettach";

    file.close();

    std::cout << "File Created" <<std::endl;

    std:: ifstream read_file("example.txt");

    std::string line;

    while (std::getline(read_file, line))
    {
        std::cout << line << std::endl;
    }

    return 0;
}