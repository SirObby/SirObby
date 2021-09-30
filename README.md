### Hi there 👋
[![forthebadge](https://forthebadge.com/images/badges/powered-by-electricity.svg)](https://forthebadge.com)
```cpp
#include <iostream>
#include <vector>
#include "developer.hpp"

using namespace std;

int main() {

    // Vectors

    std::vector<std::string> languages = {"C++", "JS"};
    std::vector<std::string> p1 = {"A Bouncing Seal Bot", "C++", "Sir Obsidian"};
    std::vector<std::string> p2 =  {"LiteDefender", "C++", "Sir Obsidian"};
    std::vector<std::vector<std::string>> projects = { p1 , p2 };

    // Developer Object

    Developer SirObby;
    SirObby.setName("Sir Obsidian");
    SirObby.setPrimaryLang("C++");
    SirObby.setLanguages(languages);
    SirObby.setProjects(projects);

    // Print Developer card.
    std::vector<std::string> l = SirObby.print();
    for (size_t i = 0; i < l.size(); i++)
    {
        std::cout << l[i] << "\n";
    }
    
    return 0;
}
```
This program will actually run if you have [developer.hpp](https://github.com/SirObby/SirObby/blob/main/developer.hpp)
