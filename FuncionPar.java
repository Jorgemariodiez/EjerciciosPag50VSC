import java.util.Scanner;

public class FuncionPar {
    public static void main(String[] args){
        System.out.println("Ingresar un numero: ");
        Scanner sc = new Scanner(System.in);
        int miNumero = sc.nextInt();

        if(fesPar(miNumero)){
            System.out.println(miNumero + " es par ");
        }else{
            System.out.println(miNumero + " no es par ");
        }
        
    }
    public static boolean fesPar(int n) {
        if(n == 0){
            return true;
        }else if(n % 2 ==0){
            return true;
        }else{
            return false;
        }
    }
}
