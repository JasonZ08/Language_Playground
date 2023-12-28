#include <iostream>
#include <cassert>
#include "functions.cpp"
#include <tuple>
using namespace std;

int main () 
{
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("absdasd") == false);

    vector<int> v1 = {1,2,3,4,5};
    assert(nthmax(v1, 3) == 2);
    assert(nthmax(v1, 8) == -1);

    assert(freq("racecarr") == 'r');
    assert(freq("scabbdasbdasdeghoubb") == 'b');

    vector<int> v2 = {1,2,3,4,5,2,3,1,3};
    vector<int> v3 = uniq(v2);
    for (int i = 0; i < v3.size(); i++) {
        assert(v3.at(i) = v1.at(i));
    }

    assert(find_max(v2) == 5);

    assert(count_ones(v2) == 2);

    tuple<int, int, int> t1 = make_tuple(1,2,3);
    tuple<int, int, int> t2 = make_tuple(3,2,1);

    assert(rev_tup(t1) == t2);

    assert(is_even(2) == true);
    assert(is_even(1) == false);

    vector<int> v4 = {6, 3, 7};
    vector<int> v5 = {4, 1, 3};
    assert(volume(v4, v5) == 16);

    assert(fibonacci(10) == 34);

    assert(count_occ(v2, 3) == 3);

    assert(to_binstring(19) == "10011");

    assert(subset(v1, v2) == true);
    assert(subset(v4, v5) == false);

    return 0;
}