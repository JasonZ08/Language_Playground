#include "functions.c"
#include <assert.h>

int main(void) {

    assert(isPalindrome("racecar") == 0);
    assert(isPalindrome("abcdefg") != 0);

    int arr[5] = {1,2,3,4,5};
    assert(nthmax(arr, 2, 5) == 3);
    assert(nthmax(arr, 7, 5) == -1);

    assert(freq("racecarrrr") == 'r');
    assert(freq("scabbdasbdasdeghoubb") == 'b');

    assert(find_max(arr, 5) == 5);

    assert(count_ones(arr, 5) == 1);

    assert(is_even(1) == 0);
    assert(is_even(2) == 1);


    int tl[3] = {6,3,7};
    int br[3] = {4,1,3};
    assert(volume(tl, br) == 16);

    assert(fibonacci(10) == 34);

    assert(count_occ(arr, 5, 4) == 1);

    assert(strcmp(to_binstring(19),"10011") == 0); 

    int arr2[3] = {1,2,3};
    assert(subset(tl, 3, br, 3) == 0);
    assert(subset(arr2, 3, arr, 5) == 1);

    return 0;
}