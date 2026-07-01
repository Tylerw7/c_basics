#include <iostream>

// We will use seperate chaining, not linear probing.
//We will achieve this by using linked lists.

// ** NOTE **
// What ever address space number you choose it should
//  always bw a prime number
// ** Because if you have a prime number of addresses, 
//    your key value pairs will be distributed more randomly.


class Node {
    public:
       std::string key;
       int value;
       Node* next;

       Node(std::string key, int value)
       {
        this->key = key;
        this->value = value;
        next = nullptr;
       }
};


class HashTable {
    private:
      static const int SIZE = 7;
      Node* dataMap[SIZE];

    public:
      int hash(std::string key) {
        int hash = 0;
        for(int i = 0; i < key.length(); i++) {
            int asciiValue = int(key[i]);
            hash = (hash + asciiValue * 23) % SIZE;
        }
        return hash;
      }

      void set(std::string key, int value) {
        int index = hash(key);
        Node* newNode = new Node(key,value);
        if(dataMap[index] == nullptr) {
            dataMap[index] = newNode;
        } else {
            Node* temp = dataMap[index];
            while(temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
      }


      void printTable() {
        for (int i = 0; i < SIZE; i++) {
            std::cout << i << ":" << std::endl;
            if(dataMap[i]) {
                Node* temp = dataMap[i];
                while(temp) {
                    std::cout << "  {" << temp->key << ", " << temp->value << std::endl;
                    temp = temp->next;
                }
            }
        }
      }  
};



int main() {
    HashTable* myHashTable = new HashTable();
    myHashTable->set("Tyler", 33);
    myHashTable->set("Precious", 30);
    myHashTable->printTable();
}