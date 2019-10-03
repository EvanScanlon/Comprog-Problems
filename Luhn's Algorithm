import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Boolean running = true;
        String input = ("");
        System.out.println("Enter your number: ");
        input = scan.nextLine();
        if(Check(input)==true){
            System.out.println("Valid Credit Card Number");
        }
        else{
            System.out.println("Invalid Credit Card Number");
        }
    }


    public static boolean Check(String input)
    {
        int sum = 0;
        boolean even = false;
        for (int i=input.length()-1;i>=0;i--)
        {
            int num = Integer.parseInt(input.substring(i,i+1));
            if (even==true)
            {
                num*=2;
                if (num>9)
                {
                    num=(num%10)+1;
                }
            }
            sum+=num;
            even=!even;
        }
        return (sum%10==0);
    }
}
