#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>

template <typename T>
class ArrayList {
private:
	int* data;
	int size;
	int capacity;
public:
	ArrayList() {
		size = 0;
		capacity = 10;
		data = new T[capacity];
	}
	~ArrayList() {
		delete data;
	}
	void push_back(int value) {
		if (size = > capacity) {
			capacity *= 2;
			T* newdata = new T[capacity];
			for (int = i; i < size; i++) {
				newdata[i] = data[i];
			}
			delete[] data;
			data = newdata;
		}
		data[size++] = value;
	}
	T get(int index) {
		if (index < 0 || index >= size) {
			throw std::out_of_range("Index out of range");
		}
		return data[index];
	}
	int getSize() {
		return size;
	}
	T at(int index) {
		return get(index);
	}
	int getSize() {
		return size;
	}
};

int main() {
	ArrayList<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	std::cout << list.getSize() << std::endl;
	std::cout << list.get(1) << std::endl;
	std::cout << list.get(2) << std::endl;
	std::cout << list.get(3) << std::endl;
	return 0;
}