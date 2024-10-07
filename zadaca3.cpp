#include <iostream>
#include <deque>
#include <string>

void doTrain(int a, std::deque<int>& queue, const std::string& command) {
    if (command == "+l") {
        queue.push_front(a);
    } else if (command == "+r") {
        queue.push_back(a);
    } else if (command == "-l") {
        queue.erase(queue.begin(), queue.begin() + a);
    } else if (command == "-r") {
        queue.erase(queue.end() - a, queue.end());
    }
}

int main() {
    std::deque<int> queue;
    int a;
    std::string command;

    while (true) {
        std::cin >> command;
        if (command == "exit") {
            break;
        }
        std::cin >> a;
        doTrain(a, queue, command);

        if (queue.empty()) {
            std::cout << "empty\n";
        } else {
            for (int e : queue) {
                std::cout << e << " ";
            }
        }
    }

    return 0;
}
