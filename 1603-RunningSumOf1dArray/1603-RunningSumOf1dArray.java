// Last updated: 5/3/2026, 10:17:38 PM
import java.util.Scanner;
import java.util.Arrays;
class Solution {
    public int[] runningSum(int[] nums) {
        int [] result = new int[nums.length];
        int sum = 0;

        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
            result[i] = sum;
        }
        return result;
    }
    public static void main(String[] args){
        int [] nums = {1, 2, 3, 4};
        Solution sol = new Solution();
        int [] runningSumArray = sol.runningSum(nums);

        System.out.println("Original Array: " +Arrays.toString(nums));
        System.out.println("Runnung Sum Array: " +Arrays.toString(runningSumArray));
    }
}