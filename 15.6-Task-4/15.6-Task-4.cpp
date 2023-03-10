#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Фцнкция сортировки вектора по модулю
//применена сортировка пузырьком - "всплывают" только отрицательные элементы вектора 
void modulo_sort(vector <int>& array)
{
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] < 0)
        {
            for (int j = 0; j < array.size()-i-1; j++)
            {
                if (abs(array[j]) > abs(array[j + 1])) swap(array[j], array[j + 1]);
            }
        }
    }
}
//Функция вывода вектора на экран
void print_vec(const vector <int>& array)
{
    for (int i = 0; i < array.size(); i++) cout << array[i] << ' ';
    cout << endl;
}
int main()
{
    //Инициализация вектора с данными
    vector <int> arr = {-100,-50, -5, 1, 10, 15};
    //Сортировка вектора по модулю
    modulo_sort(arr);
    //Вывод результата
    print_vec(arr);
    return 0;
}