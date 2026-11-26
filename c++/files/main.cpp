#include <iostream>
#include <fstream>
#include <filesystem>



int main()
{
    // create a file
    std::ofstream file("example.txt");

    file << "Hello World\n";
    file << "Tyler Wettach";

    file.close();

    std::cout << "File Created" <<std::endl;

    return 0;
}