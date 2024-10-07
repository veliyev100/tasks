#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void DuplicateAndReverse(std::vector<T>& v) {
    size_t initial_size = v.size();
    v.reserve(initial_size * 2); // Зарезервируем место для удвоенного размера

    for(auto it = v.begin(); it != v.begin() + initial_size; ++it) {
        v.push_back(*it);
    }

}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    DuplicateAndReverse(v);

    for (auto item : v) {
        std::cout << item << " ";
    }
    return 0;
}
