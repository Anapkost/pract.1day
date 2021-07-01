Практические задания :

1. Тестовая задача 0

Написать функцию для получения своего варианта.Остаток от деления своего номера по списку на число вариантов.
  variant = nomer % varmax +1;


1. Тестовая задача 1:

Есть глобальный массив
int mas[1000];


Вариант 1:

Написать функцию инициализации size элементов массива заданным значением val.

void initMas(int* imas, int size, int val)
  
  
#include <iostream>
using namespace std;
void initMas(int* imas, int size, int val) {
    for (int i = 0; i < size; i++){
       imas[i] = val; 
    }
    
}


void test(int* imas, int size) {
    initMas(imas, size, 18);
    for (int i = 0; i < size; i++) {
        if (imas[i] != 18) {
          std::cout << "wrong";
        }
    }  
    
  initMas(imas, size, -12);
    for (int i = 0; i < size; i++) {
        if (imas[i] != -12) {
          std::cout << "wrong";
        }  
    }    
}

int main()
{
    int imas[11];
    int size = 5;
    int val = 4;
    initMas(imas, size, val);
    test(imas, size);
}

Вариант 2:

Написать функцию копирования size элементов массива source в массив dest

void copyMas(int* source, int* dest, int size);


Вариант 3:

Написать функцию сравнение size элементов массивов  source и dest.Если массивы равны 0, если не равны - 1
int compareMas(int* source, int* dest, int size);



Вариант 4:

Написать удаления со сдвигом влево n - го элемента массива.Пустой элемент справа заполняется нулями.
void deleteMas(int* source, int n, int size);


Вариант 5:

Написать функцию сдвига вправо на n - элементов с заполнением крайних элементов нулями
void rShiftMas(int* source, int n, int size);



Вариант 6:

Написать функцию сдвига влево на n - элементов с заполнением крайних элементов нулями
void lShiftMas(int* source, int n, int size);


Вариант 7:

Написать функцию сдвига влево на n - элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(int* source, int n, int size);


Вариант 8:

Написать добавление в начал списка со сдвигом вправо элементов массива.Лишний элемент справа пропадает.
void pushToMas(int* source, int val, int size);



Вариант 8:

Написать функцию вычисления среднего значения элементов массива.
int averageMas(int* source, int size);


Вариант 9:

Написать функцию вычисления средне квадратического отклонения элементов массива.
int ToMas(int* source, int size);



2. Задача 2

Неписать для Вашей функции из задачи 1 функцию для тестирования.
  
void test(int* imas, int size) {
    initMas(imas, size, 18);
    for (int i = 0; i < size; i++) {
        if (imas[i] != 18) {
          std::cout << "wrong";
        }
    }  
    
  initMas(imas, size, -12);
    for (int i = 0; i < size; i++) {
        if (imas[i] != -12) {
          std::cout << "wrong";
        }  
    }    
}
