// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    float possibility, usefulness_home, usefulness_forest;
    int feelings_grading[4];

    cout << "On a scale from 1 to 10 where:" << endl;
    cout << " 1 - very bad\n 3 - bad\n 6 - mediocre\n 8 - okay\n 10 - great" << endl;

    cout << "\n Rate your feelings when you are at home and it's\n raining:";
    cin >> feelings_grading[0];

    cout << " sunny:";
    cin >> feelings_grading[1];

    cout << "\n\n And when you are in a forest and it's\n raining:";
    cin >> feelings_grading[2];

    cout << " sunny:";
    cin >> feelings_grading[3];

   
    cout << "\n Now enter the possibility of a rain from 0 to 1: ";
    cin >> possibility;

    if (possibility < 0 || possibility>1) {
        cout << "\n Enter a value from 0 to 1";
     }

    else {

          usefulness_home = possibility * feelings_grading[0] + (1 - possibility) * feelings_grading[1];
          usefulness_forest = possibility * feelings_grading[2] + (1 - possibility) * feelings_grading[3];

           if (usefulness_home > usefulness_forest){
               cout << "\n Because the usefulness of staying at home is greater than the usefulness of going to the forest, it's recommended to stay at home";
            }
           
           else{
               cout << "\n Because the usefulness of going to the forest is greater than the usefulness of staying at home, it's recommended to go to the forest";
           }
     }
       
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
