#include "sort.hpp"

#include <algorithm>

std::deque<std::string> lengthSort(std::forward_list<std::string> list) {
    std::deque<std::string> deque;
    std::copy(list.begin(), list.end(), std::back_inserter(deque));

    std::sort(deque.begin(), deque.end(), [](const auto& lhs, const auto& rhs) {
        if (lhs.size() < rhs.size()) {
            return true;
        } else if (lhs.size() == rhs.size()) {
            if (lhs < rhs) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    });
    return deque;
}