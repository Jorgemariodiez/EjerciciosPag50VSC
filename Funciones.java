import java.util.Scanner;

public class Funciones {
    public static void main(String[] args){
        System.out.println("Escriba el valor de x para la funcion f(x)=x+1: ");
        Scanner sc = new Scanner(System.in);

        int resultado = fin(sc.nextInt());
        System.out.println("El resultado es: "+resultado);

    }
    public static int fin(int x) {
        return x+1;
    }
    
}
