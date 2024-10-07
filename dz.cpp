#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void Duplicate(std::vector<T>& v) {
    v.reserve(initial_size * 2);

    for(auto it = v.begin(); it != v.begin() + initial_size; ++it) {
        v.push_back(*it);
    }

}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    Duplicate(v);

    for (auto item : v) {
        std::cout << item << " ";
    }
    return 0;
}
