import java.util.*;

public class functions {
    static boolean isPalindrome(String s) {
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i) != s.charAt(s.length() - 1 - i)) {
                return false;
            }
        }
        return true;
    }

    static int nthmax(int n, int[] arr) {
        if (n >= arr.length) {
            return -1;
        }
        Arrays.sort(arr);
        return arr[arr.length - n - 1];
    }

    static String freq(String s) {
        HashMap<String, Integer> dict = new HashMap<>();
        String answ = "";
        int maxi = 0;
        for (int i = 0; i < s.length(); i++) {
            if (!dict.containsKey("" + s.charAt(i))) {
                dict.put("" + s.charAt(i), 0);
            }
            int replacement = dict.get("" + s.charAt(i)) + 1;
            if (replacement > maxi) {
                maxi = replacement;
                answ = "" + s.charAt(i);
            }
            dict.put("" + s.charAt(i), replacement);
        }
        return answ;
    }

    static ArrayList<Integer> uniq(ArrayList<Integer> arr) {
        HashSet<Integer> seen = new HashSet<>();
        ArrayList<Integer> answ = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            if (!seen.contains(arr.get(i))) {
                answ.add(arr.get(i));
                seen.add(arr.get(i));
            }
        }
        return answ;
    }

    static int findmax(ArrayList<Integer> arr) {
        int maxi = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > maxi) {
                maxi = arr.get(i);
            }
        }
        return maxi;
    }

    static int countones(ArrayList<Integer> arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) == 1) {
                count ++;
            }
        }
        return count;
    }

    static ArrayList<Integer> rev_tup(ArrayList<Integer> arr) {
        ArrayList<Integer> answ = new ArrayList<>();
        answ.add(arr.get(2));
        answ.add(arr.get(1));
        answ.add(arr.get(0));
        return answ;
    }

    static boolean is_even(int n) {
        return n % 2 == 0;
    }

    static int volume(int[] arr1, int[] arr2) {
        return Math.abs(arr1[0] - arr2[0]) * Math.abs(arr1[1] - arr2[1]) * Math.abs(arr1[2] - arr2[2]);
    }

    static int fibonacci(int n) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
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

    static ArrayList<Integer> reverse(ArrayList<Integer> arr) {
        ArrayList<Integer> answ = new ArrayList<>();
        for (int i = arr.size()-1; i >= 0; i--) {
            answ.add(arr.get(i));
        }
        return answ;
    }

    static int count_occ(ArrayList<Integer> arr, int val) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) == val) {
                count ++;
            }
        }
        return count;
    }

    static String to_binstring(int n) {
        String answ = "";
        while (n > 0) {
            if (n % 2 == 1) {
                answ = "1" + answ;
            }
            else {
                answ = "0" + answ;
            }
            n = (int)(n/2);
        }
        return answ;
    }

    static boolean subset(ArrayList<Integer> arr1, ArrayList<Integer> arr2) {
        for (Integer ele: arr1) {
            if (!arr2.contains(ele)) {
                return false;
            }
        }
        return true;
    }
}