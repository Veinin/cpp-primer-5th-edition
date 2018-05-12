#include <string>
#include <iostream>

class InputString {
public:
    InputString(std::istream &i = std::cin) : is(i) { }
    std::string operator()() const {
        std::string str;
        std::getline(is, str);
        return is ? str : std::string();
    }

private:
    std::istream &is;
};

int main()
{
    InputString is;
    std::cout << is() << std::endl;

    return 0;
}