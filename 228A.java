import java.util.HashSet;
import java.util.Scanner;
public class HorseShoes{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int s1 = scanner.nextInt();
        int s2 = scanner.nextInt();
        int s3 = scanner.nextInt();
        int s4 = scanner.nextInt();
    
    HashSet<Integer> uniqueColors = new HashSet<>();
        uniqueColors.add(s1);
        uniqueColors.add(s2);
        uniqueColors.add(s3);
        uniqueColors.add(s4);

    int havetobuy = 4 - uniqueColors.size();

    System.out.println(havetobuy);
    }
}
