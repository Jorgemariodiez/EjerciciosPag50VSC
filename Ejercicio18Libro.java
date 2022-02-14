import java.util.Scanner;

public class Ejercicio18Libro {
    public static void main(String[] args) {
        System.out.println("Ingresar 10 numero, si ingresa 0 terminamos:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[]arr = new int[10];
        int i = 0;

        while(n != 0) {
            System.out.println("i es igual a "+i);
            arr[i]=n;
            System.out.println("Ingrese el siguiente numero: " + arr[i]);
            n = sc.nextInt();
            i++;
            
        }
        int sum = 0;
        for(int j=0; j<arr.length; j++) {
            System.out.println("Suma va antes: "+sum+" valor de j es: "+j+" Arreglo es igual a "+arr[j]);
            sum += arr[j];
            System.out.println("Suma va despues: "+sum);
                        
        }
        System.out.println("La suma total: "+sum);
    }
    
}
