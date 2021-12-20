#include <iostream>
#include <cmath>
#include <iso646.h>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
void isTemplate()
{
 
    string s, vremenniy;
    cout << "Введите строку для проверки: " << endl;
    
    getline(cin,s);
    
    string s2;
    cout << "Введите шаблон для проверки: " << endl;
    
    getline(cin,s2);
    
    if (s == s2)
    {
        cout << "Строка соответствует шаблону" << endl; // Проверка, если шаблон и строка соответствуют друг другу без замены элементов
    }
    else
    {
        for(int i = 0; i < (s.length() - 1); i++) // -1 для того, чтобы в условии ниже не выйти за предел
        {
            if (s[i] = s[i + 1])
            {
                vremenniy.append(s[i]);// Данная строка нужна для того, чтобы 'запомнить' идущие подряд элементы и затем заменить их на *
            }
            else
            {
                if (vremenniy.length() > 1)
                {
                    s.replace(s.find(vremenniy), vremenniy.length(), "*");// Замена подряд идущих элементов в строке на один элемент *
                    vremenniy.clear();
                }
                else{}
            }
            
        }
        if (s == s2)
        {
            cout << "Строка соответствует шаблону" << endl;// Проверка после замены
        }
        else
        {
            cout << "Строка не соответсвует шаблону" << endl;
        }
    }
    
}
int main()
{
    setlocale(LC_ALL, "rus");
    isTemplate();
    return 0;
    system("pause");
}










