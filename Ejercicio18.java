import java.util.Scanner;

public class Ejercicio18 {
    public static void main(String[] args){
        
        int contarA=0;

        for (int i=0; i < 9; i++) {
            System.out.println("=>"+(i+1)+" ingrese un numero: ");
            Scanner sc = new Scanner(System.in);
            int s = sc.nextInt();
            
            if(s != 0) {
                contarA=contarA+s;
                System.out.println("van:"+contarA);
            }else{
                break;
            }
        }
        System.out.println("La suma es:"+contarA);
    }
    
    
}
