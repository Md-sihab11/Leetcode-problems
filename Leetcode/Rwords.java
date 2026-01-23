package Leetcode_Solved_problems.Leetcode;

//time = O(n) + O(n)  ≈  O(n)
//space = O(1)

//Class problem reverse each words(Algorithm Class)
public class Rwords {
    public static void main(String[] args) {
        String string = "I Love University";
        int n = string.length();
        int start = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || string.charAt(i) == ' ') {
                for (int j = i - 1; j >= start; j--) {
                    System.out.print(string.charAt(j));
                }

                //space split
                if (i < n) {
                    System.out.print(" ");
                }
                start = i + 1;
            }
        }
    }

}
