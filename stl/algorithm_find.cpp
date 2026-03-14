#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> numbers = {3,7,2,9,5};

    auto it = std::find(numbers.begin(), numbers.end(), 9);

    if (it != numbers.end()) {
        std::cout << "Element found\n";
    }

    return 0;
}
