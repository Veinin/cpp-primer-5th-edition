#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    vector<unsigned> grades;
    unsigned grade;
    while (cin >> grade)
        grades.push_back(grade);

    for (auto it : grades) {
        cout << it << " " ;
        string lettergrade = it < 60 ? scores[0] : scores[(it - 50)/10];
        lettergrade += (it == 100 || it < 60) ? "" : (it % 10 > 7) ? "+" : (it % 10 < 3) ? "-" : "";
        cout << lettergrade << endl;
    }

    return 0;
}