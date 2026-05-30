#include <iostream>
#include <string>
#include <vector>

int main() {

    char add1 = 'E';
    char add2 = 'e';
    std::string result;

    int count = 0;
    std::vector<char> arr;
    char Mohammad;
    while (std::cin.get(Mohammad) && Mohammad != '\n') {
        arr.push_back(Mohammad);
    }
    arr.push_back('\0');
    for(int i = 0; arr[i] != '\0'; i++)
    {
        switch(arr[i])
        {
            case 'u':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'U':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
                count++;
                if(count == 1)
                    result += add1;
                else if(count > 1)
                    result += add2;
            break;
        }
    }
    std::cout << result << "!";
    return 0;
}
