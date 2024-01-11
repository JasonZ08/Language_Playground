function isPalindrome(str) {
    let answ = ""
    for (let i = 0; i < str.length; i++) {
        answ = str[i] + answ;
    }
    if (answ == str) {
        return true;
    }
    return false;
}

function nthmax(n, a) {
    a.sort();
    a.reverse();
    if (n >= a.length) {
        return -1;
    }
    return a[n];
}

function freq(s) {
    var dict = {}
    var answ = ""
    var count = 0
    for (let i = 0; i < s.length; i++) {
        if (s[i] in dict) {
            dict[s[i]]++;
        }
        else {
            dict[s[i]] = 1;
        }
        if (dict[s[i]] > count) {
            count = dict[s[i]]
            answ = s[i];
        }
    }
    return answ;
}

function find_max(a) {
    var answ = 0
    for (let i = 0; i < a.length; i++) {
        if (a[i] > answ) {
            answ = a[i];
        }
    }
    return answ;
}

function count_ones(a) {
    var count = 0;
    for (let i = 0; i < a.length; i++) {
        if (a[i] == 1) {
            count ++;
        }
    }
    return count;
}

function rev_tup(a) {
    return [a[2], a[1], a[0]];
}

function is_even(x) {
    return x % 2 == 0;
}

function volume(a1, a2) {
    return (a1[0] - a2[0]) * (a1[1] - a2[1]) * (a1[2] - a2[2]);
}

function fibonacci(x) {
    if (x == 1) {
        return 0;
    }
    else if (x == 2) {
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}

function count_occ(a, x) {
    let count = 0;
    for (let i = 0; i < a.length; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

function to_binstring(x) {
    var s = x;
    let answ = "";
    while (s > 0) {
        if (s % 2 == 0) {
            answ = "0" + answ;
        }
        else {
            answ = "1" + answ;
        }
        s = parseInt(s / 2);
    }
    return answ;
}

function subset(a1, a2) {
    for (let i = 0; i < a1.length; i++) {
        if (!a2.includes(a1[i])) {
            return false;
        }
    }
    return true;
}

module.exports = { isPalindrome, nthmax, subset, to_binstring, count_occ, fibonacci, volume, is_even, rev_tup, count_ones, find_max, freq }