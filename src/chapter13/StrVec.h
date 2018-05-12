#ifndef _STRVEC_H
#define _STRVEC_H

#include <string>
#include <memory>
#include <utility>
#include <initializer_list>

class StrVec {
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(__nullnullterminated) { }
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    ~StrVec();
    void push_back(const std::string&);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
private:
    static std::allocator<std::string> alloc;

    void chk_n_alloc() { if (size() == capacity()) reallocate(); }
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
    void free();
    void reallocate();

    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

std::allocator<std::string> StrVec::alloc;

void StrVec::free()
{
    if (elements) {
        for (auto p = first_free; p != elements; )
            alloc.destroy(--p);

        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::reallocate()
{
    auto newcapcity = size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapcity);

    auto dest = newdata;
    auto elem = elements;
    for (auto i = 0; i < size(); i++)
        alloc.construct(dest++, std::move(*elem++));

    free();

    elements = newdata;
    first_free = dest;
    cap = elements + newcapcity;
}

std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(b - e);
    return {data, uninitialized_copy(b, e, data)};
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

StrVec& StrVec::operator=(const StrVec &s)
{
    auto data = alloc_n_copy(s.begin(), s.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void StrVec::push_back(const std::string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

StrVec::~StrVec()
{
    free();
}

#endif //_STRVEC_H
