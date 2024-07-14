#include <iostream>
#include <random> 

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
  //  uniform_int_distribution<> distr(100, 999); // 3-рёх мерный пароль
  //  uniform_int_distribution<> distr(100, 9999); // 4-рёх мерный пароль
    uniform_int_distribution<> distr(100, 99999); // 5-рёх мерный пароль

    int password = distr(gen); 
    int guess = 0; 
    int attempts = 0; 

    while (guess != password)
    {
        guess++; 
        attempts++; 
        cout << "Попытка " << attempts << ": " << guess << endl;
    }

    cout << "Пароль угадан: " << password << endl;
    cout << "Количество попыток: " << attempts << endl;

    return 0;
}
