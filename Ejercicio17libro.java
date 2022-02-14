import java.util.Scanner;

public class Ejercicio17libro {
    public static void main(String[] args) {
        System.out.println("Ingresa 10 numeros, pero si ingresas un 0 no se puede ingresar mas: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int[]arr = new int[10];
        int i = 0;

        while(num != 0) {
            arr[i] = num;
            System.out.println("van: "+(i+1)+" Ingrese otro numero: ");
            num=sc.nextInt();
            i++;
        }
        int mayor=arr[0];
        for(int j=0; j<arr.length; j++) {
            if(arr[j]>mayor) {
                mayor=arr[j];
        }
        
    }
    System.out.println("El mayor es: " +mayor);
}
  }
