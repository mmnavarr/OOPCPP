import java.lang.*;

public class Convert {
    public int convertToDec(int n, int b) {
	int lastDigit;
	int answer = 0;
	int counter = 0;

	while (n > 0) {
	    lastDigit = (n % 10);
	    n = (n / 10);

	    if (lastDigit >= b)
		return 0;

	    answer += lastDigit * (Math.pow((double) b, (double) counter));

	    counter++;
	}

	return answer;
    }

}
