import java.util.Scanner;

public class Factorialofnumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a positive integer: ");
        int num = sc.nextInt();
        
        
        if (num < 0) {
            System.out.println("Error: Factorial is not defined for negative numbers.");
        } else {
            int factorial = 1; 
            
            for (int i = 1; i <= num; i++) {
                factorial *= i; 
            }
            
            System.out.println("The factorial of " + num + " is: " + factorial);
        }
        
        sc.close();
    }
}

