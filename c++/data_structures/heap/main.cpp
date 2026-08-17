#include <iostream>
#include <vector>


using std::vector;


class Heap {
    private:
      vector<int> heap;

      int leftChild(int index) {
        return 2 * index + 1;
      }

      int rightChild(int index) {
        return 2 * index + 2;
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

        while (current > 0 && heap[current] > heap[parent(current)]) {
            swap(current, parent(current));
            current = parent(current);
        }
      }

      int remove() {
        if (heap.empty()) {
            return INT_MIN;
        }

        int max_value = heap.front();

        if (heap.size() == 1) {
            heap.pop_back();
        } else {
            heap[0] = heap.back();
            heap.pop_back();
            sinkDown(0);
        }

        return max_value;
      }

      void sinkDown(int index) {
        int maxIndex = index;
        while (true) {
            int leftIndex = leftChild(index);
            int rightIndex = rightChild(index);

            if (leftIndex < heap.size() && heap[leftIndex] > heap[maxIndex]) {
                maxIndex = leftIndex;
            }

            if (rightIndex < heap.size() && heap[rightIndex] > heap[maxIndex]) {
                maxIndex = rightIndex;
            }

            if (maxIndex != index) {
                swap(index, maxIndex);
                index = maxIndex;
            } else {
                return;
            }


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

    heap1->remove();

    heap1->printHeap();

    return 0;
}