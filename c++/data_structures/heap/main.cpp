#include <iostream>
#include <vector>


using std::vector;


class Heap {
    private:
      vector<int> heap;

      int leftChild(int index) {
        return 2 * index + 1;
      }

      int parent(int index) {
        return (index - 1) / 2;
      }

      void swap(int index1, int index2) {
        int temp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = temp;
      }
};