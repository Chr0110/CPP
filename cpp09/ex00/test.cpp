#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "apple";
    myMap[2] = "banana";
    myMap[3] = "cherry";
    myMap[4] = "date";
    myMap[5] = "elderberry";

    // Using upper_bound to find the first element greater than a key
    auto it = myMap.upper_bound(3);

    // Printing the result
    if (it == myMap.end()) {
        std::cout << "No element found greater than 3 in the map." << std::endl;
    } else {
        std::cout << "The first element greater than 3 is: " << it->first << " - " << it->second << std::endl;
    }

    return 0;
}
