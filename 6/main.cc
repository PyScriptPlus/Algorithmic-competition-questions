#include <iostream>
#include <string>

int main() {

    char N[3];
    std::string k;
    for(int i = 0; i <= 2; ++i)
    {
        std::cin >> N[i];
    }
    for(int i = 0; i <= 2; ++i)
    {
        k += N[i];
    }
    if(k == "XXX")
        std::cout << "no\n";
    else if(k == "YYY")
        std::cout << "no\n";
    else
        std::cout << "yes\n";

    return 0;
}
