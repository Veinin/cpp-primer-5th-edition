#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

struct IsInRange {
    IsInRange(std::size_t l, std::size_t u) : lower_(l), upper_(u) {}

    bool operator()(const std::string &str) const {
        return lower_ <= str.size() <= upper_;
    }

    std::size_t upper_limit() const
    {
        return upper_;
    }

private:
    std::size_t lower_;
    std::size_t upper_;
};

int main()
{
    std::vector<IsInRange> predicates;
    for (std::size_t i = 0; i < 10; i++) {
        predicates.emplace_back(IsInRange(1, i));
    }

    std::map<std::size_t, std::size_t> count;

    std::ifstream ifs("data/File.txt");
    std::string line;
    std::string word;
    while (std::getline(ifs, line)) {
        std::istringstream iss(line);
        while (iss >> word)
            for (const auto &is_in_range : predicates)
                if (is_in_range(word))
                    ++count[is_in_range.upper_limit()];
    }

    return 0;
}