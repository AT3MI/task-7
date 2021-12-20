#include <iostream>
#include <cmath>
#include <iso646.h>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
void isTemplate()
{
 
    string s;
    cout << "Введите строку для проверки: " << endl;
    getline(cin,s);

    cout << s << endl;
    
    string s2;
    cout << "Введите шаблон для проверки: " << endl;
    getline(cin,s2);

    cout << s2 << endl;
    if (s == s2)
    {
        cout << "Строка соответствует шаблону" << endl;
    }
    else
    {
        
        cout << "Строка не соответсвует шаблону" << endl;
    }
    
}
int main()
{
    setlocale(LC_ALL, "rus");
    isTemplate();
    return 0;
    system("pause");
}









