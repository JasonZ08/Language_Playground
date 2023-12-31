// See https://aka.ms/new-console-template for more information
using System;
using System.Collections;
using System.Reflection.Metadata.Ecma335;

namespace CSharp
{
    public class Functions
    {
        public bool isPalindrome(string s)
        {
            for (int i = 0; i < s.Length; i++) 
            {
                if (s[i] != s[s.Length - 1 - i]) 
                {
                    return false;
                }
            }
            return true;
        } 
        public int nthmax(int n, ArrayList al)
        {
            if (n >= al.Count) {
                return -1;
            }
            al.Sort();
            return (int)al[al.Count - n - 1];
        }

        public char freq(string s) {
            char answ = 'a';
            int maxi = 0;
            Dictionary<char, int> dict = new Dictionary<char, int>();
            for (int i = 0; i < s.Length; i++) {
                if (!dict.ContainsKey(s[i])) {
                    dict.Add(s[i], 0);
                }
                int count = dict[s[i]];
                dict[s[i]] = count + 1;
                if (dict[s[i]] > maxi) {
                    answ = s[i];
                    maxi = dict[s[i]];
                }
            }
            return answ;
        }

        public ArrayList uniq (ArrayList al) {
            ArrayList answ = new ArrayList();
            for (int i = 0; i < al.Count; i++) {
                if (!answ.Contains(al[i])) {
                    answ.Add(al[i]);
                }
            }
            return answ;
        }

        public int find_max (ArrayList al) {
            int x = 0;
            for (int i = 0; i < al.Count; i++) {
                if ((int)al[i] > x) {
                    x = (int)al[i];
                }
            }
            return x;
        }

        public int count_ones (ArrayList al) {
            int c = 0;
            for (int i = 0; i < al.Count; i++) {
                if ((int)al[i] == 1) {
                    c += 1;
                }
            }
            return c;
        }

        public (int, int, int) rev_tup ((int, int, int) t) 
        {
            return (t.Item3, t.Item2, t.Item1);
        }
        public bool is_even (int x) {
            return x % 2 == 0;
        }

        public int volume (int[] arr1, int[] arr2)
        {
            return Math.Abs(arr1[0] - arr2[0]) * Math.Abs(arr1[1] - arr2[1]) * Math.Abs(arr1[2] - arr2[2]);
        }

        public int fibonacci(int x) {
            if (x == 1) {
                return 0;
            }
            else if (x == 2) {
                return 1;
            }
            return fibonacci(x-1) + fibonacci(x-2);
        }

        public ArrayList reverse(ArrayList al) {
            ArrayList answ = new ArrayList();
            for (int i = al.Count - 1; i >= 0; i--) {
                answ.Add(al[i]);
            }
            return answ;
        }      

        public int count_occ(int [] arr, int x) {
            int count = 0;
            for (int i = 0; i < arr.Length; i++) {
                if (arr[i] == x) {
                    count ++;
                }
            }
            return count;
        }  

        public string to_binstring(int n)
        {
            string answ = "";
            while (n > 0)
            {
                if (n % 2 == 1) {
                    answ = "1" + answ;
                }
                else {
                    answ = "0" + answ;
                }
                n = n / 2;
            }
            return answ;
        }
        public bool subset(int [] arr1, int [] arr2) {
            for (int i = 0; i < arr1.Length; i++)
            {
                if (!arr2.Contains(arr1[i]))
                {
                    return false;
                }
            }
            return true;
        }
    }
}

