import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = sc.nextInt();

        int temp = num, sum = 0;
        String s = Integer.toString(num);
        int digits = s.length();

        while (temp > 0) {
            int r = temp % 10;
            sum += Math.pow(r, digits);
            temp /= 10;
        }

        if (sum == num)
            System.out.println("Armstrong Number");
        else
            System.out.println("Not Armstrong Number");
    }
}
