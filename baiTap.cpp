#include <iostream>
using namespace std;

// Bai 1
int sum(float a, float b)
{
    cout << "Tong hai so la: " << a + b << endl;
    return 0;
}

// Bai 2
int sumOfLastDigit(int a, int b)
{
    int lastDigitNumA = a % 10;
    int lastDigitNumB = b % 10;
    int sum = lastDigitNumA + lastDigitNumB;
    cout << "Tong hai chu so cuoi cung la: " << sum << endl;
    return sum;
}

// Bai 3
int permuteNum(float &a, float &b)
{
    a += b;
    b = a - b;
    a = a - b;

    cout << "Sau khi hoan vi:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return a, b;
}

// Bai 4
// Tong cac chu so cua mot so
int resulut(int num)
{
    int sumOfAllDigits = 0;
    while (num != 0)
    {
        sumOfAllDigits += (num % 10);
        num = num / 10;
    }
    return sumOfAllDigits;
}
// Hien thi ket qua
int sumOfAllDigits(int a, int b)
{
    int sumAllA = resulut(a);
    int sumAllB = resulut(b);
    cout << "Tong cac chu so cua a: " << sumAllA << endl;
    cout << "Tong cac chu so cua b: " << sumAllB << endl;
    return sumAllA, sumAllB;
}

int main()
{
    float a;
    float b;

    cout << "Nhap vao 2 so:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
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
    cout << "========================END=======================" << endl;
    system("pause");
    return 0;
}