#include <iterator>
using std::begin; using std::end;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    int ia[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int *pbeg = begin(ia);
    int *pend = end(ia);

    for (auto p = pbeg; p != pend; ++p)
        cout << *p << ' ';
    cout << endl;

    while (pbeg != pend)
        cout << *pbeg++ << " ";


    int ia1[3][4];
    int arr[10][20][30] = {0};

    int ia2[3][4] = {
        {0, 1, 2, 3},   // initializers for the row indexed by 0
        {4, 5, 6, 7},   // initializers for the row indexed by 1
        {8, 9, 10, 11}  // initializers for the row indexed by 2
    };

    // equivalent initialization without the optional
    // nested braces for each row
    int ia3[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    // explicitly initialize only element 0 in each row
    int ia4[3][4] = {{ 0 }, { 4 }, { 8 }};

    // explicitly initialize row 0; the remaining elements
    // are value initialized
    int ix[3][4] = {0, 3, 6, 9};


    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia5[rowCnt][colCnt];   // 12 uninitialized elements

    // for each row
    for (size_t i = 0; i != rowCnt; ++i) {
        // for each column within the row
        for (size_t j = 0; j != colCnt; ++j) {
            // assign the element's positional index as its value
            ia5[i][j] = i * colCnt + j;
        }
    }

    // four ways to print the contents of ia
    // 1. using nested range for loops
    for (const auto &row : ia5) // for every element in the outer array
        for (auto col : row)   // for every element in the inner array
            cout << col << endl; // print the element's value
    cout << ia5[0][0] << ' ' << ia5[2][3] << endl; // prints 0 11


    return 0;
}