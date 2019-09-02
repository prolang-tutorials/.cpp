#include <iostream>
#include <forward_list>
#include <utility>

void creatingForward_lists()
{
    std::cout << "Basic forward_list setup: " << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo (5, 5);
    std::forward_list<int> flThree (flTwo.begin(), flTwo.end());
    std::forward_list<int> flFour (flThree);
    std::forward_list<int> flFive (std::move(flFour));

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flTwo contains:";
    for (std::forward_list<int>::iterator x = flTwo.begin(); x != flTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flThree contains:";
    for (std::forward_list<int>::iterator x = flThree.begin(); x != flThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flFour contains:";
    for (std::forward_list<int>::iterator x = flFour.begin(); x != flFour.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flFive contains:";
    for (std::forward_list<int>::iterator x = flFive.begin(); x != flFive.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flAssign()
{
    std::cout << "std::deque::assign()" << std::endl;

    std::forward_list<int> flOne;
    std::forward_list<int> flTwo;
    std::forward_list<int> flThree;

    flOne.assign(5, 10);

    flTwo.assign(flOne.begin(), flOne.end());

    flThree.assign({1, 2, 3, 4, 5 });

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flTwo contains:";
    for (std::forward_list<int>::iterator x = flTwo.begin(); x != flTwo.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    std::cout << "flThree contains:";
    for (std::forward_list<int>::iterator x = flThree.begin(); x != flThree.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flBefore_Begin()
{
    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.insert_after(flOne.before_begin(), 10);

    std::cout << "flOne now contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flBegin()
{
    std::cout << "std::forward_list::begin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator flIt = flOne.begin(); flIt != flOne.end(); ++flIt)
    {
        std::cout << " " << *flIt;
    }
    std::cout << '\n' << std::endl;
}

void flCbefore_begin()
{
    std::cout << "std::forward_list::cbefore_begin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.insert_after(flOne.cbefore_begin(), 10);

    std::cout << "flOne now contains:";
    for (std::forward_list<int>::iterator x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flCbegin()
{
    std::cout << "std::forward_list::cbegin()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto x = flOne.cbegin(); x != flOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flCend()
{
    std::cout << "std::forward_list::cend()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    std::cout << "flOne contains:";
    for (auto x = flOne.cbegin(); x != flOne.cend(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}

void flClear()
{
    std::cout << "std::forward_list::clear()" << std::endl;

    std::forward_list<int> flOne = { 1, 2, 3, 4, 5 };

    for (auto x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << std::endl;

    flOne.clear();

    for (auto x = flOne.begin(); x != flOne.end(); ++x)
    {
        std::cout << " " << *x;
    }
    std::cout << '\n' << std::endl;
}