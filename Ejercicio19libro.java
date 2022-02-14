import java.util.Scanner;

public class Ejercicio19libro {
    public static void main(String[] args){
        String[] equipos = new String[8];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < equipos.length; i++) {
            System.out.println("Ingresa el nombre del equipo numero: "+(i+1));
            equipos[i] = sc.nextLine();
        }
        int cont=0;
        int[] ganadores1=new int[4];
        int pos=0;
        System.out.println("Primera Ronda");
        while (cont<7){
            System.out.println("1. "+equipos[cont]+" 2."+equipos[cont+1]+" : ");
            int opcion = sc.nextInt();
            if (opcion == 1) ganadores1[pos] =cont;
            else ganadores1[pos]=cont+1;

            cont += 2;
            pos++;
        }
        cont=0;
        pos=0;
        int[] ganadores2 =new int[2];
        System.out.println("Segunda Ronda");
        while(cont<3){
            System.out.println("1. "+equipos[ganadores1[pos]]+"-2. "+equipos[ganadores1[cont+1]]+" : ");
            int opcion= sc.nextInt();
            if(opcion==1)ganadores2[pos]=ganadores1[cont];
            else ganadores2[pos]=ganadores1[cont+1];

            cont+=2;
            pos++;

        }
        System.out.println("Tercera Ronda");
        System.out.println("1. "+equipos[ganadores2[0]]+"-2. "+equipos[ganadores2[1]]+" : ");
        int opcion = sc.nextInt();
        int ganador;
        if (opcion == 1) ganador = ganadores2[0];
        else ganador = ganadores2[1];

        System.out.println("El gran ganador es : "+" !"+equipos[ganador]+" !");
    }
    
}