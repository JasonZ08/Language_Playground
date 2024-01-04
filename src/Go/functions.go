package Go

import (
	"slices"
)

func IsPalindrome(s string) bool {
	r := ""
	for _, c := range s {
		r = string(c) + r
	}
	if s == r {
		return true
	}
	return false
}

func Nthmax(arr []int, a int) int {
	if a >= len(arr) {
		return -1
	}
	slices.Sort(arr)
	return arr[len(arr)-1-a]
}

func Freq(s string) string {
	m := make(map[string]int)
	answ := ""
	count := 0
	for _, c := range s {
		val, ok := m[string(c)]
		if !ok {
			m[string(c)] = 1
			val = 1
		} else {
			val += 1
			m[string(c)] = val
		}
		if val > count {
			count = val
			answ = string(c)
		}
	}
	return answ
}

func FindMax(arr []int) int {
	maxi := 0
	for i := 0; i < len(arr); i++ {
		if arr[i] > maxi {
			maxi = arr[i]
		}
	}
	return maxi
}

func CountOnes(arr []int) int {
	count := 0
	for i := 0; i < len(arr); i++ {
		if arr[i] == 1 {
			count++
		}
	}
	return count
}

func RevTup(arr [3]int) [3]int {
	answ := [3]int{}
	answ[0] = arr[2]
	answ[1] = arr[1]
	answ[2] = arr[0]
	return answ
}

func IsEven(x int) bool {
	return x%2 == 0
}

func Volume(arr1 [3]int, arr2 [3]int) int {
	return (arr1[0] - arr2[0]) * (arr1[1] - arr2[1]) * (arr1[2] - arr2[2])
}

func Fibonacci(n int) int {
	if n == 1 {
		return 0
	} else if n == 2 {
		return 1
	}
	return Fibonacci(n-1) + Fibonacci(n-2)
}

func CountOcc(arr []int, n int) int {
	count := 0
	for i := 0; i < len(arr); i++ {
		if arr[i] == n {
			count++
		}
	}
	return count
}

func ToBinstring(n int) string {
	answ := ""
	for n > 0 {
		if n%2 == 1 {
			answ = "1" + answ
		} else {
			answ = "0" + answ
		}
		n = n / 2
	}
	return answ
}

func subset(arr1 []int, arr2 []int) bool {
	for _, ele := range arr1 {
		seen := false
		for _, ele2 := range arr2 {
			if ele == ele2 {
				seen = true
			}
		}
		if !seen {
			return false
		}
	}
	return true
}
