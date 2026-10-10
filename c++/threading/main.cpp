#include <iostream>
#include <thread>


void DoWork(){
    int value = 0;
    while(value != 1) {
        std::cout << "working...";
        std::cout << "Enter a number to continue";
        std::cin >> value;
    }
};

int main(){

    std::thread worker(DoWork);

    worker.join();

    std::cin.get();
}