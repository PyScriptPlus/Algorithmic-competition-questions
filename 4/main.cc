#include <iostream>

int main() {

    int H, M;
    int X;

    std::cin >> H >> M;
    std::cin >> X;
    M += X;
    while(M >= 60)
    {
        if(M >= 60)
        {
            M -= 60;
            ++H;
        }
    }
    while(H >= 24)
    {
        H -= 24;
    }
    std::cout << H << " " << M << '\n';

    return 0;
}
