#include<iostream>
#include<string>
using namespace std;
int main() 
{
    string a;
    while (cin >> a)
    {
        const char* p = "25YZ[<TT];SR^2]W+%\'C^,X-O?O&__V[!;TT];D+ #.A3,A+ 4C,$!_.";
        char c = a[0];
        for (; *p;)
            putc(c = (*p++ + c & 63) + 32, stdout);
        cout << endl;
    }
    system("pause");
    return 0;
}