import functions

def main():
    assert functions.isPalindrome("racecar") == True
    assert functions.isPalindrome("asdefg") == False

    assert functions.nthmax(2, [1,2,3,4,5]) == 3
    assert functions.nthmax(6, [1,2]) == None

    assert functions.freq("racecarr") == "r"
    assert functions.freq("scabbdasbdasdeghoubb") == "b"

    assert functions.uniq([1,2,3,4,5]) == [1,2,3,4,5]
    assert functions.uniq([1,2,3,4,5,1,2,3,4,5]) == [1,2,3,4,5]

    assert functions.find_max([13,2,5,1,7,8]) == 13
    assert functions.find_max([1, 6, 5, 3, 2, 6]) == 6

    assert functions.count_ones([1,2,3,4,5]) == 1
    assert functions.count_ones([2,2]) == 0

    assert functions.rev_tup((6, 3, 1)) == (1, 3, 6)
    assert functions.rev_tup(("a", "b", 2)) == (2, "b", "a")

    assert functions.is_even(4) == True
    assert functions.is_even(5) == False

    assert functions.volume((1, 1, 1), (0, 0, 0)) == 1
    assert functions.volume((6, 3, 7), (4, 1, 3)) == 16

    assert functions.fibonacci(5) == 3
    assert functions.fibonacci(10) == 34

    assert functions.count_occ([1, 3, 4, 5, 6], 0) == 0
    assert functions.count_occ([1, 3, 4, 5, 5, 6], 5) == 2

    assert functions.to_binstring(6) == "110"
    assert functions.to_binstring(19) == "10011"

    assert functions.subset([1, 2, 3], [4, 5, 6]) == False
    assert functions.subset([1, 2, 3], [4, 5, 6, 1, 2 ,3]) == True

if __name__ == "__main__":
    main()