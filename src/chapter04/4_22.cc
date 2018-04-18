#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    int grade;
    cin >> grade;

    auto result = grade > 90 ? "high pass"
        : (grade < 60) ? "fail"
        : (grade < 75) ? "low pass" : "pass";
    cout << result << endl;

    if (grade > 90)
        cout << "high pass" << endl;
    else if (grade < 60)
        cout << "fail" << endl;
    else if (grade < 75)
        cout << "low pass" << endl;
    else
        cout << "pass";

    return 0;
}