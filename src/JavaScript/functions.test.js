const { isPalindrome, nthmax, subset, to_binstring, count_occ, fibonacci, volume, is_even, rev_tup, count_ones, find_max, freq } = require("./functions")

test('palindrome works properly', () => {
    expect(isPalindrome("racecar")).toBe(true)
})

test('nthmax', () => {
    expect(nthmax(1, [1,2,3,4,5])).toBe(4)
})

test('subset', () => {
    expect(subset([1,2,3], [4,5,6])).toBe(false)
})

test('to_binstring', () => {
    expect(to_binstring(19)).toBe("10011")
})

test('count_occ', () => {
    expect(count_occ([1,2,3,4,1,2,2,1,1], 1)).toBe(4)
})

test('fibonacci', () => {
    expect(fibonacci(10)).toBe(34)
})

test('volume', () => {
    expect(volume([6,3,7], [4,1,3])).toBe(16)
})

test('is_even', () => {
    expect(is_even(3)).toBe(false)
})

test('rev_tup', () => {
    expect(rev_tup([1,2,3])).toStrictEqual([3,2,1])
})

test('count_ones', () => {
    expect(count_ones([1,2,3,4,1,2,2,1,1])).toBe(4);
})

test('find_max', () => {
    expect(find_max([1,2,3,4,1,2,2,1,1])).toBe(4)
})

test('freq', () => {
    expect(freq("scabbdasbdasdeghoubb")).toBe("b")
})