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

void mapAt()
{
    std::cout << "std::map::at()" << std::endl;
    
    // Look at this. This is so annoying to write out. This right here is the main reason I hate initializing maps like so.
    std::map<char, int> mOne = { { 'a', 0 }, { 'b', 0 }, { 'c', 0 },  { 'd', 0 }, { 'e', 0 } };

    std::cout << "mOne contains: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    mOne.at('a') = 1;
    mOne.at('b') = 2;
    mOne.at('c') = 3;
    mOne.at('d') = 4;
    mOne.at('e') = 5;

    std::cout << "mOne now contains: " << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapBegin()
{
    std::cout << "std::map::begin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}