import sys

def multiply(num1, num2):
    if not num1.isdigit() or not num2.isdigit():
        print("Error")
        sys.exit(98)

    result = 0
    for i in range(len(num2)):
        digit = int(num2[-i-1])
        temp = 0
        for j in range(len(num1)):
            temp += int(num1[-j-1]) * digit * (10**j)
        result += temp * (10**i)

    print(result)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Error")
        sys.exit(98)

    num1 = sys.argv[1]
    num2 = sys.argv[2]

    multiply(num1, num2)

