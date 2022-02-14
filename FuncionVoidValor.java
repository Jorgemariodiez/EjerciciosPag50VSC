import java.util.Scanner;

public class FuncionVoidValor {
    public static void main(String[] args){
        System.out.println("Escribe un numero: ");
        Scanner sc = new Scanner(System.in);
        int miNumero = sc.nextInt();
        
        resultadoPorPantalla(miNumero);

    }
    public static boolean esPar(int n){
        if(n == 0){
            return true;
        }else if(n % 2 == 0){
            return true;
        }else {
            return false;
        }
    }

    public static void resultadoPorPantalla(int n){
        if(esPar(n)){
            System.out.println(n+" es par");
        }else{
            System.out.println(n+" es impar");
        }
    }
    
}
