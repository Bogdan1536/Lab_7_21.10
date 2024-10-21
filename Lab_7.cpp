// Lab_7.cpp : Створити стек цілих чисел. Знайти суму від’ємних елементів стеку.//

#include <iostream>
#include <stack>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    stack<int>s; 
    int n, sum = 0;
    cout << "Введіть розмір стеку: ";
    cin >> n;
    cout << "Введіть "<< n <<" цілих чисел: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.push(num);
    }
    while (!s.empty())
    {
        int num = s.top();
        if (num <= 0)
        {
            sum += num;
        }
        s.pop();
    }
    cout << "Сума від'ємних елементів стеку: "<<sum<<endl;
    return 0;
}
