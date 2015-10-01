import math

class Convert:
    
    @staticmethod
    def convertToDec(n,b):
        lastDigit = 0;
        answer = 0;
        counter = 0;

        while (n > 0):
            lastDigit = n % 10;
            n = n / 10;

            if (lastDigit >= b):
                return 0;

            answer += lastDigit * (math.pow(lastDigit, counter))

            counter += 1

        return answer;
