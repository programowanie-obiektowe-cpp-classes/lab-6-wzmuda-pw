#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::transform(people.begin(), people.end(), retval.rbegin(), [](Human& h) {
        h.birthday(); return h.isMonster() ? 'n' : 'y';
});
    return retval;
}
