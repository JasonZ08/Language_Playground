#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char *s) {
    int answ = 0;
    int length = strlen(s) + 1;
    char *my_s = malloc(length);
    int place = 0;
    while (place < length) {
        if (place == length - 1) {
            my_s[place] = '\0';
        }
        else {
            my_s[place] = s[length - place - 2];
        }
        place++;
    }
    return strcmp(my_s, s);
}

int nthmax(int *arr, int a, int len) {
    if (a >= len) {
        return -1;
    }
    
    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr[a];
}

char freq(char *s) {
    int len = strlen(s);
    int maxi = 0;
    char answ = 's';
    for (int i = 0; i < len; i++) {
        char seen = s[i];
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (seen == s[j]) {
                count += 1;
            }
        }
        if (count > maxi) {
            maxi = count;
            answ = seen;
        }
    }
    return answ;
}

int find_max(int *arr, int len) {
    int answ = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > answ) {
            answ = arr[i];
        } 
    }
    return answ;
}

int count_ones(int *arr, int len) {
    int answ = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == 1) {
            answ += 1;
        } 
    }
    return answ;
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int volume(int *arr1, int *arr2) {
    return (arr1[0] - arr2[0]) * (arr1[1] - arr2[1]) * (arr1[2] - arr2[2]);
}

int fibonacci(int n) {
    if (n==1) {
        return 0;
    }
    else if (n==2) {
        return 1;
    }
    int first = 0;
    int second = 1;
    for (int i = 2; i < n; i++) {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}

int count_occ(int *arr, int len, int val) {
    int answ = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == val) {
            answ += 1;
        } 
    }
    return answ;
}

char *to_binstring(int n) {
    int copy = n;
    int len = 0;
    while (copy > 0) {
        copy = copy / 2;
        len += 1;
    }
    char *answ = malloc(len + 1);
    answ[len] = '\0';
    len--;
    copy = n;
    while (copy > 0) {
        if (copy % 2 == 1) {
            answ[len] = '1';
        }
        else {
            answ[len] = '0';
        }
        len --;
        copy = copy / 2;
    }
    return answ;
}

int subset(int *arr1, int len1, int *arr2, int len2) {
    int answ = 1;
    for (int i = 0; i < len1; i++) {
        int seen = 0;
        for (int j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                seen = 1;
            }
        }
        if (!seen) {
            answ = 0;
        }
    }
    return answ;
}