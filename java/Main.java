public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");

    java.util.Scanner scanner = new java.util.Scanner(System.in);
    System.out.print("Enter an integer: ");
    int userInput = scanner.nextInt();
    System.out.println("You entered: " + userInput);
    scanner.close();
}
}
