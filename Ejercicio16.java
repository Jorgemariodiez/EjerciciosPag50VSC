import java.util.Scanner;

public class Ejercicio16 {
    public static void main(String[] args){
        System.out.println("ingrese una palabra: ");
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int contarA=0;

        for (int i=0; i < s.length(); i++) {
            if(s.charAt(i) == 'a') {
                contarA++;
                System.out.println("van:"+contarA);
            }
        }
        System.out.println("Son "+ contarA+" letras a.");
    }
    
}
