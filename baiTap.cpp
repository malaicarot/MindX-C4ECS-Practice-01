#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// // Bai 1
int sum(float a, float b)
{
    cout << "Tong hai so la: " << a + b << endl;
    return 0;
}

// // Bai 2
int sumOfLastDigit(int a, int b)
{
    int lastDigitNumA = a % 10;
    int lastDigitNumB = b % 10;
    int sum = lastDigitNumA + lastDigitNumB;
    cout << "Tong hai chu so cuoi cung la: " << sum << endl;
    return sum;
}

// // Bai 3
int permuteNum(float a, float b)
{
    a += b;
    b = a - b;
    a = a - b;

    cout << "Sau khi hoan vi:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return a, b;
}

// // Bai 4
// // Tong cac chu so cua mot so
int resulut(int num)
{
    // num = 456
    int sumOfAllDigits = 0;
    int count = 0;
    while (num != 0) // nums = 0 thi ngung
    {
        sumOfAllDigits += (num % 10); // 456 % 10 = 6 --> 6 + (45 % 10) = 6 + 5 --> 11 + (4 % 10) = 15
        num = num / 10;               // 456 / 10 = 45 --> 45 / 10 = 4
    }

    return sumOfAllDigits;
}
// // Hien thi ket qua
int sumOfAllDigits(int a, int b)
{
    int sumAllA = resulut(a);
    int sumAllB = resulut(b);
    cout << "Tong cac chu so cua a: " << sumAllA << endl;
    cout << "Tong cac chu so cua b: " << sumAllB << endl;
    return sumAllA, sumAllB;
}

// bai 5
// Xac dinh so co bao nhieu chu so
int checkDigitsNum(int a)
{
    int count = 0;
    while (a != 0)
    {
        a /=10;
        count++;
    }
    return count;
}

int reverseNums(int a)
{
    int n = checkDigitsNum(a);
    int base = pow(10, n-1);
    int reversed = 0;
    while(base !=0){
        reversed += (a % 10) * base;
        base /= 10;
        a /= 10;
    }
    cout << "So a sau khi dao nguoc la: " << reversed << endl;
    return reversed;
}

// Bai 6 Print ASCII
void printAscii(char d, char c)
{
    cout << "Ma ASCII cua ky tu " << d << " la: " << int(d) << endl;
    cout << "Ma ASCII cua ky tu " << c << " la: " << int(c) << endl;
}

// Bai 7
int printRealNumber(float a) // lam tron 3 chu so thap phan
{
    // int base = pow(10, 3);
    // float result = round(a * base) / base;
    // cout << "So thuc a khi lam tron 3 chu so thap phan la: " << result << endl;
    // return result;
    cout << "So thuc a khi lam tron 3 chu so thap phan la: ";
    cout << setprecision(3) << fixed << a << endl;
    return 0;
}
int main()
{
    float a, b;

    char c, d;

    cout << "Nhap vao 2 so:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "Nhap vao 2 ky tu:" << endl;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
    cout << "==================================================" << endl;
    cout << "(*)Phan nguyen cua a la: " << int(a) << endl;
    cout << "(*)Phan nguyen cua b la: " << int(b) << endl;
    cout << "==================================================" << endl;
    sum(a, b);
    cout << "==================================================" << endl;
    sumOfLastDigit((int)a, (int)b);
    cout << "==================================================" << endl;
    permuteNum(a, b);
    cout << "==================================================" << endl;
    sumOfAllDigits((int)a, (int)b);
    cout << "==================================================" << endl;
    reverseNums((int)a);
    cout << "==================================================" << endl;
    printAscii(d, c);
    cout << "==================================================" << endl;
    printRealNumber(a);
    cout << "========================END=======================" << endl;

    system("pause");
    return 0;
}