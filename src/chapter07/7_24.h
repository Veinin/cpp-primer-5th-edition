#ifndef _7_24_H
#define _7_24_H

#include <string>

class Screen {
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}

    char get() const { return contents[cursor]; }
    inline char get(pos r, pos c) const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

#endif