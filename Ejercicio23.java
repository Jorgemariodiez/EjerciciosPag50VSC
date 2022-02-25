import java.util.Scanner;

public class Ejercicio23{
    public static void main(String[] args){
        int[][] ESO = new int[4][3];
        Scanner sc = new Scanner(System.in);
        int opcion=0;

        while(opcion != 4){
            System.out.println("- 1 - Para ingresar alumno.");
            System.out.println("- 2 - Para eliminar alumno.");
            System.out.println("- 3 - Para Alumnos en clase.");
            System.out.println("- 4 - Para salir.");

            opcion = sc.nextInt();
            switch(opcion) {
                case 1: System.out.println("Ingresa un curso.");
                        int ingresarCursor = sc.nextInt();
                        System.out.println("Selecciona la clase: A=1, B=2, C=3");
                        int ingresarClase = sc.nextInt();
                        ESO[ingresarCursor] [ingresarClase]++;
                    break;
                case 2: System.out.println("Primero elige el curso.");
                        int eliminarCursor = sc.nextInt();
                        System.out.println("Selecciona la clase: A=1, B=2, C=3");
                        int elimonarClase = sc.nextInt();
                        if(ESO[eliminarCursor][elimonarClase] > 0){
                            ESO[eliminarCursor][elimonarClase]--;
                        }
                    break;
                case 3: System.out.println("ingrese el curso: ");
                        int infoCurso = sc.nextInt();
                        System.out.println("Selecciona la clase: A=1, B=2, C=3");
                        int infoClase = sc.nextInt();
                        System.out.println(ESO[infoCurso][infoClase]+ " alumnos");
                    break;
                case 4: System.out.println("Salir del sitema");
                    break;
                default: System.out.println("Opcion no valida");
                 
            }

        }

    }
}