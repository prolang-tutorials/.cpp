#include <iostream>
#include <map>

// Function for Map instantiation
bool functionComparison (char first, char second)
{
    return first < second;
}

// Struct for Map instantiation
struct structComparison
{
    bool operator() (const char& first, const char& second) const
    {
        return first < second;
    }
};


void constructingMaps()
{
    std::map<char, int> mOne;
    std::map<char, int> mTwo (mOne.begin(), mOne.end());
    std::map<char, int> mThree (mTwo);
    std::map<char, int, structComparison> mFour;

    bool(*functionPointer)(char, char) = functionComparison;
    std::map<char, int, bool(*)(char, char)> mFive (functionPointer);
}