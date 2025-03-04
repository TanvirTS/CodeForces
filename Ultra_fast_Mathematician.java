import java.util.Scanner;
public class Shapur{
    public static void main(String[] args){
        Scanner scanner= new Scanner(System.in);
        String num1 = scanner.nextLine();
        String num2 = scanner.nextLine();
        scanner.close();
        StringBuilder result = new StringBuilder();
        for(int i=0;i<num1.length();i++){
            if(num1.charAt(i) != num2.charAt(i))
                result.append('1');
            else
                result.append('0');
        }
        System.out.println(result);
    }
}
