import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import org.junit.Test;
import java.util.*;

public class test {
    @Test
    public void palindrome_test() {
        assertTrue(functions.isPalindrome("racecar"));
        assertFalse(functions.isPalindrome("asbdsadjke"));
    }

    @Test
    public void nthmax_test() {
        int[] arr1 = {1,2,3,4,5};
        int[] arr2 = {1,2};

        assertEquals(functions.nthmax(2, arr1), 3);
        assertEquals(functions.nthmax(6, arr2), -1);
    }

    @Test
    public void freq_test() {
        assertEquals(functions.freq("racecarr"), "r");
        assertEquals(functions.freq("scabbdasbdasdeghoubb"), "b");
    }

    @Test
    public void uniq_test() {
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        ArrayList<Integer> array2 = new ArrayList<Integer>();
        array1.add(1);
        array1.add(2);
        array1.add(3);
        array2.add(1);
        array2.add(2);
        array2.add(3);
        array2.add(1);
        array2.add(2);
        array2.add(3);
        assertEquals(functions.uniq(array1), array1);
        assertEquals(functions.uniq(array2), array1);
    }

    @Test
    public void find_max_test() {
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        ArrayList<Integer> array2 = new ArrayList<Integer>();
        array1.add(13);
        array1.add(2);
        array1.add(5);
        array1.add(7);
        array2.add(1);
        array2.add(6);
        array2.add(5);
        array2.add(6);
        array2.add(3);
        assertEquals(functions.findmax(array1), 13);
        assertEquals(functions.findmax(array2), 6);
    }

    @Test
    public void count_ones_test() {
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        ArrayList<Integer> array2 = new ArrayList<Integer>();
        array1.add(13);
        array1.add(2);
        array1.add(5);
        array1.add(7);
        array2.add(1);
        array2.add(6);
        array2.add(5);
        array2.add(6);
        array2.add(3);
        assertEquals(functions.countones(array1), 0);
        assertEquals(functions.countones(array2), 1);
    }

    @Test
    public void rev_tup_test() {
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        ArrayList<Integer> array2 = new ArrayList<Integer>();
        ArrayList<Integer> array3 = new ArrayList<Integer>();
        ArrayList<Integer> array4 = new ArrayList<Integer>();
        array1.add(13);
        array1.add(2);
        array1.add(5);
        array2.add(5);
        array2.add(6);
        array2.add(3);
        array3.add(5);
        array3.add(2);
        array3.add(13);
        array4.add(3);
        array4.add(6);
        array4.add(5);
        assertEquals(functions.rev_tup(array1), array3);
        assertEquals(functions.rev_tup(array2), array4);
    }

    @Test
    public void is_even_test() {
        assertEquals(functions.is_even(2), true);
        assertEquals(functions.is_even(1), false);
    }

    @Test
    public void volume_test() {
        int [] array1 = {1,1,1};
        int[] array2 = {0,0,0};
        int[] array3 = {6, 3, 7};
        int[] array4 = {4, 1, 3};
        assertEquals(functions.volume(array1, array2), 1);
        assertEquals(functions.volume(array3, array4), 16);
    }

    @Test
    public void fibonacci_test(){
        assertEquals(functions.fibonacci(5), 3);
        assertEquals(functions.fibonacci(10), 34);
    }

    @Test
    public void count_occ_test() {
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        array1.add(1);
        array1.add(2);
        array1.add(3);
        array1.add(4);
        array1.add(5);
        array1.add(5);
        assertEquals(functions.count_occ(array1, 0), 0);
        assertEquals(functions.count_occ(array1, 5), 2);
    }

    @Test
    public void binstring_test(){
        assertEquals(functions.to_binstring(6), "110");
        assertEquals(functions.to_binstring(19), "10011");
    }

    @Test
    public void subset(){
        ArrayList<Integer> array1 = new ArrayList<Integer>();
        ArrayList<Integer> array2 = new ArrayList<Integer>();
        ArrayList<Integer> array3 = new ArrayList<Integer>();
        array1.add(1);
        array1.add(2);
        array1.add(3);
        array2.add(4);
        array2.add(5);
        array2.add(6);
        array3.add(1);
        array3.add(2);
        array3.add(3);
        array3.add(4);
        array3.add(5);
        array3.add(6);
        assertTrue(functions.subset(array2, array3));
        assertFalse(functions.subset(array2, array1));
    }
}
