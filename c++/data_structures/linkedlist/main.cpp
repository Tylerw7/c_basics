#include <iostream>


// Linked List


// ** NOTE **
// - Linked lists are a list of values of pointers, each pointer points to a different place in memory
// - A Vector is different, the memory is contiguous all next to each other.

// BIG O
//  "ADD To End" ------- O(1)
//  "Remove from end" -- O(n)
//  "Add to beginning" - O(1)
//  "Remove beginning" - O(1)
//  "Insert" ----------- O(n)
//  "Remove" ----------- O(n)
//  "Return value" ----- O(n)


// Linked List VS Vector
// Vectors are better than Linked Lists for Removing Last and Lookup Index
// Linked Lists are better for Prepending and Remove first



// Node class
class Node 
{
    public:
      int value;
      Node* next;

      Node(int value)
      {
        this->value = value;
        next = nullptr;
      }
};


// Linked List class
class LinkedList
{
    private:
      Node* head;
      Node* tail;
      int length;

    public:
      LinkedList(int value)
      {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length += 1;
      }  


      void printList()
      {
        Node* temp = head;
        while(temp)
        {
            std::cout << temp->value << std::endl;
            temp = temp->next;
        }
      };

      void append(int value)
      {
        Node* newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        length += 1;

      }

      void deleteLast()
      {
        if (head == nullptr)
        {
            std::cout << "List is empty!" << std::endl;
            return;
        }

        Node* temp = head;
        Node* pre = head;

        while (temp->next != nullptr)
        {
            pre = temp;
            temp = temp->next;
        }
        tail = pre;
        pre->next = nullptr;
        length--;

        if (length == 0)
        {
            head = nullptr;
            tail = nullptr;
        }
        delete temp;
      }


      ~LinkedList()
        {Node* temp = head;
        while(head)
        {
          head = head->next;
          delete temp;
          temp = head;
        }
      }
};



// Create new linked list

int main()
{
    LinkedList* myLinkedList = new LinkedList(4);

    // myLinkedList->append(42);
    // myLinkedList->append(11);
    // myLinkedList->append(32);
    // myLinkedList->append(95);

    myLinkedList->deleteLast();

    myLinkedList->printList();
}
