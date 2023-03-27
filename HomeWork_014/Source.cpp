#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>


using namespace std;

void show(int* m, int size);

void init(int* m, int size, int a, int b);

int* memory(int size);

void destroy(int*& m);

// ----------------------------------------------------------------------------------- \\

void delete_value(int*& arr, int& size, bool negative = true );


int main()
{

    //setlocale(LC_ALL, "rus");

#if 0
    // ---------------------------------------------------------------------------------------------------------------- //
    // ************************************************** Задание 1 *************************************************** //
    //  Задание 1: Дан динамический одномерный массив целых : А[m](m вводится с клавиатуры).
    //  Необходимо написать одну функцию, которая удаляет из массива положительные или
    //  отрицательные значения в зависимости от дополнительного параметра типа bool(по умолчанию
    //  – удаляются отрицательные значения). (Меняется исходный массив и его размер).

    srand(time(0));
    int size;
    cout << "\nВведите размер массива: ";
    cin >> size;

    int* m = memory(size);

    if (m)
    {
        init(m, size, -10, 20);
        show(m, size);

        delete_value(m, size, true);
        cout << "\nРазмер нового массива: " << size << endl;
        show(m, size);

        destroy(m);
    }
    else {
        cout << "\nОшибка выделения памяти";
    }


#endif 


#if 1
    // ---------------------------------------------------------------------------------------------------------------- //
    // ************************************************** Задание 2 *************************************************** //
    //  Задание 2: Напишите функцию, которая удаляет из динамической матрицы целого типа строку
    //  по указанной позиции. (Меняется исходный массив и количество строк).

#endif 

#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 3 *************************************************** //
//  Задание 2: Напишите функцию, которая удаляет из динамической матрицы целого типа строку
//  по указанной позиции. (Меняется исходный массив и количество строк).

    //    Задание 3: Напишите программу, которая формирует динамическую матрицу целых с разной
    //    длиной строк(jagged arrays).Количество строк вводится с клавиатуры.Значение первого
    //    элемента каждой строки инициализируется случайным числом(от 1 до 20) и определяет
    //    количество столбцов в этой строке.Значения остальных элементов матрицы также
    //    инициализируются случайными числами.Например,
    //    Введите количество строк 5
    //    2 18
    //    5 1 20 25 29
    //    9 13 15 6 46 32 28 12 42
    //    6 43 28 3

#endif 



#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 4 *************************************************** //
    //    Задание 4: Пользователь вводит строку символов с клавиатуры.Перевести все гласные символы
    //    в верхний регистр и при выводе строки на экран все гласные символы выделить другим цветом.
    //    Использовать уже существующую функцию, которая определяет, является ли символ
    //    гласным.

#endif


#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 5 *************************************************** //
    //    Задание 5: Пользователь вводит с клавиатуры строку.Необходимо написать функцию, которая
    //    принимает строку и выводит ее на экран, выделяя разными цветами : символы алфавита -
    //    зеленым, знаки препинания - красным, цифры - синим.

#endif

#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 6 *************************************************** //
    //    Задание 6: Напишите одну функцию, которая принимает строку, подсчитывает и возвращает
    //    количество букв, цифр, пробелов, гласных, знаков и остальных символов, присутствующих в
    //    строке.

#endif


#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 7 *************************************************** //
    //   Задание 7: Найти и посчитать все вхождения подстроки в строку, перевести в верхний регистр и
    //   при выводе выделить другим цветом.Пример работы программы :
    //   filename.TXT test.TXT myfile.TXT simplefile
    //   Количество вхождений подстроки.TXT в строку : 3


#endif


#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 8 *************************************************** //
     //   Задание 8: На основе строки сформировать динамический массив целых, записав данные по
     //   цифрам.Пример работы программы :
     //   Строка: 235A65TR789
     //   Массив цифр : 2 3 5 6 5 7 8 9


#endif

#if 0
// ---------------------------------------------------------------------------------------------------------------- //
// ************************************************** Задание 9 *************************************************** //
    //   Задание 9: Написать функцию, которая принимает строку, и возвращает целое число,
    //   сформированное на ее основе.Если символов - цифр в строке нет, функция возвращает 0.
    //   Пример работы программы :
    //   Строка: 12A65H21E1
    //   Число : 1265211

#endif


    _getch();
}



void delete_value(int*& arr, int &size, bool negative)
{
    int k = 0;
    int neg = 0;
    int pos = 0;

    for (int i = 0; i < size; i++)
    {
        arr[i] < 0 ? neg++ : pos++;
    }

    int* res;

    negative ? res = new int[size - neg] : res = new int[size - pos];

    for (int i = 0; i < size; i++)
    {
        if (res && negative && arr[i] < 0 || !negative && arr[i] >= 0)
        {
            continue;
        }
        res[k] = arr[i];
        k++;
    }

    

    delete[]arr;
    arr = res;
    size = k;
}

void destroy(int*& m)
{
    delete[]m;
    m = nullptr;
}

int* memory(int size)
{
    int* p = new int[size];
    return p;
}

void init(int* m, int size, int a, int b)
{
    for (int i = 0; i < size; i++)
    {
        *(m + i) = rand() % (b - a + 1) + a;
    }
}

void show(int* m, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << "  ";
    }
    cout << endl;
}




