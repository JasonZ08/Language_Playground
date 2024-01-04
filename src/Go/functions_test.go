package Go

import (
	"testing"
)

func TestPalindrome(t *testing.T) {
	if !IsPalindrome("racecar") {
		t.Fatalf("racecar is a palindrome")
	}
}

func TestNth(t *testing.T) {
	arr := []int{1, 2, 3, 4, 5}
	if Nthmax(arr, 1) != 4 {
		t.Fatalf("Fail!")
	}
}

func TestFreq(t *testing.T) {
	if Freq("racecarrr") != "r" {
		t.Fatalf("Fail!")
	}
}

func TestFindMax(t *testing.T) {
	arr := []int{1, 2, 3, 4, 5}
	if FindMax(arr) != 5 {
		t.Fatalf("Fail!")
	}
}

func TestCountOnes(t *testing.T) {
	arr := []int{1, 2, 3, 4, 5}
	if CountOnes(arr) != 1 {
		t.Fatalf("Fail!")
	}
}

func TestRevTup(t *testing.T) {
	arr := [3]int{1, 2, 3}
	answ := [3]int{3, 2, 1}
	if RevTup(arr) != answ {
		t.Fatalf("Fail!")
	}
}

func TestIsEven(t *testing.T) {
	if IsEven(1) {
		t.Fatalf("Fail!")
	}
}

func TestVolume(t *testing.T) {
	arr1 := [3]int{6, 3, 7}
	arr2 := [3]int{4, 1, 3}
	if Volume(arr1, arr2) != 16 {
		t.Fatalf("Fail!")
	}
}

func TestFibonacci(t *testing.T) {
	if Fibonacci(10) != 34 {
		t.Fatalf("Fail!")
	}
}

func TestCountOccurence(t *testing.T) {
	arr := []int{1, 2, 3, 4, 5}
	if CountOcc(arr, 1) != 1 {
		t.Fatalf("Fail!")
	}
}

func TestToBinstring(t *testing.T) {
	if ToBinstring(19) != "10011" {
		t.Fatalf("Fail!")
	}
}

func TestSubset(t *testing.T) {
	arr1 := []int{6, 3, 7}
	arr2 := []int{4, 1, 3}
	if subset(arr1, arr2) {
		t.Fatalf("Fail!")
	}
}
