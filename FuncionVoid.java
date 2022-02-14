import java.util.Scanner;

public class FuncionVoid {
    public static void main(String[] args){
        System.out.println("Escribe 5 palabras: ");
        Scanner sc = new Scanner(System.in);
        String[] array = new String[5];

        for (int i = 0; i < array.length; i++){
            array[i] = sc.nextLine();

        }
        concatenar(array);

        
    }
    public static void concatenar(String[] array){
        for(String s : array){
            System.out.print(s);
        }
    }
    
}
