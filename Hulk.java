import java.util.Scanner;
public class Hulk{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

       StringBuilder result = new StringBuilder();
    
       for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            result.append("I hate");
        else 
            result.append("I love");
        if (i < n)
            result.append(" that ");
        }

     result.append(" it");

     System.out.println(result.toString());
    
   
    }
}
