#include <stdio.h>
#include <string>
#include <set>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int value;
    int number;
    int erase;
    int conf;
    bool loop = true;

    std::vector <int> integers = {};
    printf("Enter 5 unique digits :");
    for (int i = 0; i < 5; i++)
    {
        std::cin >> value;
        integers.insert(integers.begin() + i, { value });

    }
    printf("the Values are: ");
    for (auto& str : integers) std::cout << str << ' ';
    {
        std::cout << '\n';
    }
    printf("Enter a number:");
    std::cin >> number;
    int cnt;
    cnt = count(integers.begin(), integers.end(), number);

    std::cout << "Number " << number << " occurs " << cnt << " times." << std::endl;

    printf("Enter a number to erase:");
    std::cin >> erase;
    cnt = count(integers.begin(), integers.end(), erase);
    while (loop) {
        std::cout << "Number " << erase << " occurs " << cnt << " times. Would you like to erase it? (0 | 1)" << std::endl;
        std::cin >> conf;
        if (conf == 1) {

            for (auto ele = integers.begin(); ele != integers.end(); ele++)
            {
                if (*ele == erase) {
                    integers.erase(ele--);
                }

            }
            loop = false;
        }
        else if (conf == 0) {
            std::cout << "Erase caneled!";
            loop = false;
        }
        else {
            std::cout << "Invalid option\n";
        }
    }
    std::cout << "The values of the vector after remove:\n";
    for (int const& i : integers) {
        std::cout << i << ' ';
    }
}