// Last updated: 5/3/2026, 10:17:29 PM
import java.util.Scanner;
class Solution {
    public int sum(int num1, int num2) {
        return num1 + num2;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int a = sc.nextInt();
        System.out.println("Enter second number: ");
        int b = sc.nextInt();
        Solution sol = new Solution();
        int result = sol.sum(a,b);
        System.out.println("Sum: " +result);
        sc.close();
 }
}