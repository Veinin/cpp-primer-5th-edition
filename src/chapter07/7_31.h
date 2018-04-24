#ifndef _7_32_H
#define _7_32_H

class Y;

class X {
    Y *y = nullptr;
};

class Y {
    X x;
};

#endif //_7_32_H
