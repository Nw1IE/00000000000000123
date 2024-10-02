#include <iostream>
#include <cstdlib>


int main() {
    setlocale(LC_ALL, "ru");

    const int SIZE = 10;
    int random[SIZE];
    int user[SIZE];

    std::srand(std::time(0));


    for (int i = 0; i < SIZE; ++i) 
    {
        random[i] = std::rand() % 11;
    }

    for (int i = 0; i < SIZE; ++i) 
    {
        int input;
        while (true) {
            std::cout << "Надо ввести число для ячейки [" << i << "] : ";
            std::cin >> input;


            if (input >= 0 && input <= 10) 
            {
                user[i] = input;
                break;
            }
            else {
                std::cout << "Нельзя вводить больше 10" << std::endl;
            }
        }
    }


    std::cout << "\nСравнение:" << std::endl;
    for (int i = 0; i < SIZE; ++i)
    {
        if (random[i] == user[i]) 
        {
            std::cout << "Попадание в ячейке[" << i << "] = " << random[i] << std::endl;
        }
    }

    return 0;
}