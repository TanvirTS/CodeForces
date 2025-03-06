import java.util.Scanner;
public class Divisibility{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while(t-->0){
            long a = scanner.nextLong();
            long b = scanner.nextLong();
            long remainder = a%b;
            long moves = (remainder == 0) ? 0: (b - remainder);

        System.out.println(moves);
        }
    }
}
