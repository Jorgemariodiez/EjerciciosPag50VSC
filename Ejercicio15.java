import java.util.Scanner;

public class Ejercicio15 {
    public static void main(String[] args){
        System.out.println("Ingrese un frase: ");
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int contador = 0;

        for (int i = 0; i < s.length(); i++){
            System.out.println(s);
            if(s.charAt(i) != ' '){
                
                contador++;
                System.out.println("Contador va en: "+contador);
                

            }
        }
        System.out.println(s);
        System.out.println(contador);
    }
}