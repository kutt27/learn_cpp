#include <iostream>

using namespace std;

class DynamicArray {
private:
    int* data;
    int capacity;
    int size;

public:
    DynamicArray() {
        data = nullptr;
        capacity = 0;
        size = 0;
    }

    void push_back(int value) {
        if (size == capacity) {
            capacity *= 2;
            int* new_data = new int[capacity];
            for (int i = 0; i < size; i++) {
                new_data[i] = data[i];
            }
            delete[] data;
            data = new_data;
        }
        data[size] = value;
        size++;
    }

    int get(int index) {
        return data[index];
    }

    void set(int index, int value) {
        data[index] = value;
    }

    int size() {
        return size;
    }

    void clear() {
        delete[] data;
        data = nullptr;
        capacity = 0;
        size = 0;
    }
};

int main() {
    DynamicArray array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    for (int i = 0; i < array.size(); i++) {
        cout << array.get(i) << endl;
    }

    array.clear();

    cout << array.size() << endl;

    return 0;
}
