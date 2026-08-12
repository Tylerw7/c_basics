#include <iostream>
#include <vector>


using std::vector;


class Heap {
    private:
      vector<int> heap;

      int leftChild(int index) {
        return 2 * index + 1;
      }


    public:
      int parent(int index) {
        return (index - 1) / 2;
      }

      void swap(int index1, int index2) {
        int temp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = temp;
      }

      void insert(int value) {
        heap.push_back(value);
        int current = heap.size() - 1;

        while (current > 0 
            && heap[current] > heap[parent(current)]) {
            swap(current, parent(current));
            current = parent(current);
        }
      }

      void printHeap() {
        std::cout << "\n[";
        for (size_t i = 0; i < heap.size(); i++) {
            std::cout << heap[i];
            if (i < heap.size() - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
      }
};



int main() {

    Heap* heap1 = new Heap();
    heap1->insert(5);
    heap1->insert(50);
    heap1->insert(40);
    heap1->insert(90);
    heap1->printHeap();


    return 0;
}