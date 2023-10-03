#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//  Reverse Numbers
int checkDigitsNum(int a)
{
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    cout << "So chu so la: " << count << endl;
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


// Permute Nums
int permuteNum(float a, float b)
{
    a *= b;
    b = a / b;
    a = a / b;

    cout << "Sau khi hoan vi:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return a, b;
}

// Reall Numbers
int printRealNumber(double a) // lam tron 3 chu so thap phan
{
    int base = pow(10, 3);
    double result = round(a * base) / base;
    cout <<"So thuc a khi lam tron 3 chu so thap phan la: %.3f" << result << endl;
    return result;
}
int main(){
    double a = 1234.537986789;
    float b = 3453.23452;
    // reverseNums(a);
    // permuteNum(a, b);
    // printRealNumber(a);
    cout << setprecision(3) << fixed << a;

    system("pause");
    return 0;
}