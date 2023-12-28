#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <tuple>
using namespace std;

bool isPalindrome(string s) 
{
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s.at(i);
    }
    return s.compare(rev) == 0;
}

int nthmax(vector<int> v, int a) {
    sort(v.begin(), v.end(), greater<int>());
    if (a >= v.size()) {
        return -1;
    }
    return v.at(a);
}

char freq(string s) {
    map<char, int> m;
    int maxi = 0;
    char answ;
    for (int i = 0; i < s.length(); i++) {
        if (m.find(s.at(i)) == m.end()) {
            m[s.at(i)] = 0;
        }  
        m[s.at(i)] ++;
        if (m[s.at(i)] > maxi) {
            maxi = m[s.at(i)];
            answ = s.at(i);
        }
    }
    return answ;
}

vector<int> uniq(vector<int> v) {
    vector<int> answ;
    for (int ele: v) {
        if (find(answ.begin(), answ.end(), ele) == v.end()) {
            answ.push_back(ele);
        }
    }
    return answ;
}

int find_max(vector<int> v) {
    int maxi = -1;
    for (int ele: v) {
        if (ele > maxi) {
            maxi = ele;
        }
    }
    return maxi;
}

int count_ones(vector<int> v) {
    int count = 0;
    for (int ele: v) {
        if (ele == 1) {
            count++;
        } 
    }
    return count;
}

tuple <int, int, int> rev_tup(tuple<int, int, int> t) 
{
    int temp = get<2>(t);
    get<2>(t) = get<0>(t);
    get<0>(t) = temp;
    return t;
}

bool is_even(int x) 
{
    return x % 2 == 0;
}

int volume(vector<int> v1, vector<int> v2)
{
    return abs(v1[0] - v2[0]) * abs(v1[1] - v2[1]) * abs(v1[2] - v2[2]);
}

int fibonacci(int n)
{
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int count_occ(vector<int> v, int val)
{
    int count = 0;
    for (int ele : v) {
        if (ele == val) {
            count += 1;
        }
    }
    return count;
}

string to_binstring(int n)
{
    string answ;
    while (n > 0) {
        if (n % 2 == 1) {
            answ += "1";
        }
        else {
            answ += "0";
        }
        n = n / 2;
    }
    reverse(answ.begin(), answ.end());
    return answ;
}

bool subset(vector<int> v1, vector<int> v2) 
{
    bool answ = true;
    for (int ele : v1) {
        if (find(v2.begin(), v2.end(), ele) == v2.end()) {
            answ = false;
        }
    }
    return answ;
}