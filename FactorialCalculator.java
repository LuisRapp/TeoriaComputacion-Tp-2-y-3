import java.util.Scanner;

public class FactorialCalculator {
    private int number;

    public FactorialCalculator(int number) {
        this.number = number;
    }

    public long calculate() {
        if (number < 0) {
            throw new IllegalArgumentException("El número debe ser no negativo.");
        }
        long result = 1;
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Calculadora de Factorial");
        System.out.print("Ingrese un número entero no negativo: ");
        
        try {
            int inputNumber = scanner.nextInt();
            FactorialCalculator calculator = new FactorialCalculator(inputNumber);
            long factorialResult = calculator.calculate();
            
            System.out.println("El factorial de " + inputNumber + " es: " + factorialResult);
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Error: Debe ingresar un número entero válido.");
        } finally {
            scanner.close();
        }
    }
}