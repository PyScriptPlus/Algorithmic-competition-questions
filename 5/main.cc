#include <iostream>
#include <sstream>
#include <string>

int main() {

    std::string str = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

    std::stringstream ss(str);

    std::string value;

    char del = ' ';

    std::string myNum[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    bool k = false;
    while(std::getline(ss,value,del))
    {
        k = false;
        for(int i = 0; i <= 9; i++)
        {
            if(value == myNum[i])
            {
                std::cout << i;
                k = true;
            }
        }
        if(!k)
            std::cout << value[0];
    }
    
    return 0;
}
