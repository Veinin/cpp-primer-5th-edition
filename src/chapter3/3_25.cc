#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<unsigned> grades;
    vector<unsigned> scores(11, 0);

    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100) {
            grades.push_back(grade);
            ++*(scores.begin() + grade / 10);
        }
    }

    cout << "grades.size = " << grades.size() << endl;
    for (auto it : grades)
        cout << it << " " ;
    cout << endl;

    return 0;
}