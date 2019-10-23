import java.util.Scanner;
        /*
        A Harshad number is a number which is divisble by the sum of their digits. For example, 45 is a Harshad number as 4 + 5 = 9 and 9 divides 45.
        Write a Java program that decides if a number is a Harshad number.

        Note: You should have a variable called check to store the number you are checking.

        Hint: A Harshad number must be positive

        Sample Output

        9 divides 45
        6 does not divide 123 */

public class Main {
    public static void main(String args[]){
            Scanner scan = new Scanner(System.in);
            long check = scan.nextInt();
            long num = check;
            long sum = 0;

            while(check > 0){
                sum+=check%10;
                check/=10;
            }
            if(num%sum==0){
                System.out.println(sum+" divides "+num);
            }
            else{
                System.out.println(sum+" does not divide "+num);
            }
    }
}
