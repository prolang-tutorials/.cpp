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

void mapCbegin()
{
    std::cout << "std::map::cbegin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::const_iterator mIt = mOne.cbegin(); mIt != mOne.cend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCend()
{
    std::cout << "std::map::cend()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::const_iterator mIt = mOne.cbegin(); mIt != mOne.cend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapClear()
{
    std::cout << "std::map::clear()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }

    mOne.clear();

    std::cout << "mOne contents after clear:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCount()
{
    std::cout << "std::map::clear()" << std::endl;

    // This actually took an ungodly amount of time to write out. Never do this.
    std::map<char, int> mOne = { { 'a', 1 }, { 'd', 2 }, { 'f', 3 }, { 'j', 4 }, { 'i', 5 }, { 'l', 6 }, { 'o', 7 }, { 'r', 8 }, { 'u', 9 }, { 'x', 10 } };
    char a;

    for (a = 'a'; a < 'z'; ++a)
    {
        std::cout << "The key: " << a;

        if (mOne.count(a) > 0)
        {
            std::cout << " exists with value: " << mOne.at(a) << std::endl;
        }
        else
        {
            std::cout << " does not exist." << std::endl;
        }
    }
    std::cout << std::endl;
}

void mapCrbegin()
{
    std::cout << "std::map::crbegin()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::const_reverse_iterator mIt = mOne.crbegin(); mIt != mOne.crend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapCrend()
{
    std::cout << "std::map::crend()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne backwards contains:" << std::endl;
    for (std::map<char, int>::const_reverse_iterator mIt = mOne.crbegin(); mIt != mOne.crend(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmplace()
{
    std::cout << "std::map::emplace()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 } };

    std::cout << "mOne contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
    
    mOne.emplace('b', 2);
    mOne.emplace('c', 3);

    std::cout << "mOne now contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmplace_hint()
{
    std::cout << "std::map::emplace_hint()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };
    std::map<char, int>::iterator mIt = mOne.begin();

    std::cout << "mOne contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;

    mIt = mOne.emplace_hint(mIt, 'd', 4);
    mOne.emplace_hint(mIt, 'e', 5);

    std::cout << "mOne now contains:" << std::endl;
    for (auto& x : mOne)
    {
        std::cout << x.first << " maps to " << x.second << std::endl;
    }
    std::cout << std::endl;
}

void mapEmpty()
{
    std::cout << "std::map::empty()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contains:" << std::endl;
    while (!mOne.empty())
    {
        std::cout << mOne.begin()->first << " maps to " << mOne.begin()->second << std::endl;
        mOne.erase(mOne.begin());
    }
    std::cout << std::endl;
}

void mapEnd()
{
    std::cout << "std::map::end()" << std::endl;

    std::map<char, int> mOne = { { 'a', 1 }, { 'b', 2 }, { 'c', 3 } };

    std::cout << "mOne contents:" << std::endl;
    for (std::map<char, int>::iterator mIt = mOne.begin(); mIt != mOne.end(); ++mIt)
    {
        std::cout << mIt->first << " maps to " << mIt->second << std::endl;
    }
    std::cout << std::endl;
}