#include <iostream>
#include <cstdlib>
#include <ctime>
#include "const.h"

int getRandomNumber(int min, int max)
{
    srand(time(0));
    rand();
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
int vvod()
{
    int cheslo;
    while(true)
    {
        std::cout<<"�������� ����� �� 1 �� 100: ";
        std::cin>>cheslo;
        if (cheslo<=100&&cheslo>=1&&!std::cin.fail())
            return cheslo;
        else
        {
            std::cout<<"�� ��������� ������� �����!\n��������� �������\n";
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            system("pause");
            system("cls");
        }

    }
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int num = getRandomNumber(0,100);
    int checr(0);
        do
        {
            ++checr;
            int yg = vvod();
            if(yg>num)
            {
                std::cout<<"����� ������ \n";
            }
            else if(yg<num)
            {
                std::cout<<"����� ������ \n";
            }
            else
            {
                std::cout<<"�� �������� \n";
                break;
            }
            if(checr==7)
                {std::cout<<"�� ���������, ���� �������� ����� :"<<num<<"\n";
                system("pause");}

        }
        while(checr<7);



}

