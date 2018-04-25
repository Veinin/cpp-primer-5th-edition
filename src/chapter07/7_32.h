#ifndef _7_32_H
#define _7_32_H

#include <string>
#include <vector>

class Screen;

class Window_mng {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mng::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

class Screen {
    friend void Window_mng::clear(ScreenIndex);

public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}

    char get() const { return contents[cursor]; }
    inline char get(pos r, pos c) const;
    Screen &set(char);
    Screen &set(pos, pos, char)

    Screen &move(pos r, pos c);

    Screen &display(std::ostream &os)
        { do_display(os); return *this; }
    const Screen&display(std::ostream &os) const
        { do_display(os); return *this; }

private:
    void do_display(std::ostream &os) const { os << contents; }

    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline
Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline
Screen &Screen::set(pos r, pos col, char c)
{
    contents[r*width + col] = c;
    return *this;
}

inline
Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

#endif