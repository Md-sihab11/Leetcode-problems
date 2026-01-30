package Leetcode_Solved_problems.Leetcode;

import java.util.*;

//56. Merged Intervals
public class Solution1 {

    public static int[][] merge(int[][] intervals) {

        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        List<int[]> merged = new ArrayList<>();
        int[] prev = intervals[0];

        for (int i = 1; i < intervals.length; i++) {
            int[] curr = intervals[i];

            if (curr[0] <= prev[1]) {
                prev[1] = Math.max(prev[1], curr[1]);
            } else {
                merged.add(prev);
                prev = curr;
            }
        }
        merged.add(prev);
        return merged.toArray(new int[merged.size()][]);
    }

    public static void main(String[] args) {

        int[][] intervals = {
            {1, 3},
            {2, 6},
            {8, 10},
            {15, 18}
        };

        int[][] result = merge(intervals);
        System.out.println("Merged Intervals:");
        for (int[] arr : result) {
            System.out.println(Arrays.toString(arr));
        }

    }
}
