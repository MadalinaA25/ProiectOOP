#pragma once
#include <vector>

template <typename T>
class GenericCollection {
public:
	GenericCollection() = default;
	~GenericCollection() = default;

	void addItem(const T& item) {
		items.push_back(item);
	}

	void displayItems() {
		for (auto& item : items) {
			item.Print();
			std::cout << std::endl;
		}
	}

private:
	std::vector<T> items;
};
