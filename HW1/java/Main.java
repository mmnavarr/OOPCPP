import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
	
	System.out.print("Please enter an integer: ");
	int number = scan.nextInt();

	System.out.print("Please enter the base of the integer: ");
	int base = scan.nextInt();

	//CALL CONVERT
	int answer = 0;
	Convert c = new Convert();
	answer = c.convertToDec(number, base);

	if (answer == 0)
	    System.out.println("You have entered an invalid integer for the given base.\n");
	else
	    System.out.printf("Your given integer in base 10 is: %d.\n", answer);
	
    }
}
 