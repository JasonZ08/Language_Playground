def isPalindrome(n):
    return n == n[::-1]

def nthmax(n, a):
    temp = sorted(a, reverse=True)
    if n < len(temp):
        return temp[n]
    return None

def freq(s):
    answ = ""
    max_count = 0
    count = {}
    for c in s:
        if c not in count:
            count[c] = 0
        count[c] += 1
        if count[c] > max_count:
            max_count = count[c]
            answ = c
    return answ

def uniq(lst):
    answ = []
    for ele in lst:
        if ele not in answ:
            answ.append(ele)
    return answ

def find_max(matrix):
    maxi = -1
    for val in matrix:
        if val > maxi:
            maxi = val
    return maxi

def count_ones(matrix):
    count = 0
    for val in matrix:
        if val == 1:
            count += 1
    return count

def rev_tup(tup):
    return (tup[2], tup[1], tup[0])

def is_even(x):
    return x % 2 == 0

def volume(x, y):
    return abs(x[0] - y[0]) * abs(x[1] - y[1]) * abs(x[2] - y[2])

def fibonacci(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    first = 0
    second = 1
    for i in range(2, n):
        temp = first + second
        first = second
        second = temp
    return second

def reverse(lst):
    return lst[::-1]

def count_occ(lst, target):
    count = 0
    for ele in lst:
        if ele == target:
            count += 1
    return count

def to_binstring(n):
    answ = ""
    while n > 0:
        if n % 2 == 1:
            answ += "1"
        else:
            answ += "0"
        n = n // 2
    return answ[::-1]

def subset(a, b):
    for ele in a:
        if ele not in b:
            return False
    return True

