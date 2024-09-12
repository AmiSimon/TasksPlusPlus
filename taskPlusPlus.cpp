#include <iostream>
#include <vector>
#include <string>

class Task 
{
    public:
        std::string description;
        int importance;
};
const std::string HELP_TEXT = "n(ew) - Make a new task \n\nl(ist) - List current tasks\n";

std::string to_lower(std::string string)
{
    std::string lowered_string = string;
    for (char& c : lowered_string)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
    }
    return lowered_string;
}

std::string main_input() 
{
    std::string action;
    std::cout << "What would you like to do ? (h for help) : ";
    std::cin >> action;
    std::cout << std::endl;

    return action;
}

void main_options(std::string action)
{
    if (to_lower(action) == "h")
    {
        std::cout << HELP_TEXT;
    }
}

int main() 
{
    main_options(main_input());
    return 0;
}