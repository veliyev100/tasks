#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
#include <cmath>

std::string f(std::string word) {
    size_t j = 0;
    while (j < word.size()) {
        if (word[j] < 47 && word[j] > 33) {
            word.erase(j);
        } else {
            j++;
        }
    }
    return word;
}

int main() {
    double pac = 1;
    double kol = 0;

    std::unordered_set<std::string> love_words {"люблю", "любовь", "любимая", "влюблен", "влюблена"};
    std::set<std::string> found_love_words;

    std::string word;

    while (std::cin >> word) {
        std::string cleaned_word = f(word);
        if (love_words.find(cleaned_word) != love_words.end()) {
            kol++;
            found_love_words.insert(cleaned_word);
        }
    }

    kol = kol / 1000;
    pac = pac * kol;

    std::cout << "Количество пачек: " << kol << "\n";

    if (std::floor(pac) != pac) {
        double candy = 15 * (pac - std::floor(pac));
        std::cout << "Конфеты: " << candy << "\n";
    }
}
