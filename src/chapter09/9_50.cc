#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::endl; using std::string; using std::vector;

int sum_for_int(const vector<string> &v)
{
    int sum = 0;
    for (const auto &s : v)
        sum += std::stoi(s);
    return sum;
}

float sum_for_float(const vector<string> &v)
{
    float sum = 0.0;
    for (const auto &s : v)
        sum += std::stof(s);
    return sum;
}

int main()
{
    vector<string> v = {"1", "2.2", "3.3"};
    cout << sum_for_int(v) << endl;
    cout << sum_for_float(v) << endl;

    return 0;
}
