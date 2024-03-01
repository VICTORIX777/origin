#include <iostream>

enum class month
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main()
{
    std::cout << "Введите номер месяца: ";
    int n;
    std::cin >> n;
    month m = static_cast<month>(n);
    switch (m)
    {
    case month::Январь:
        std::cout << "Январь" << std::endl;
        break;
    case month::Февраль:
        std::cout << "Февраль" << std::endl;
        break;
    case month::Март:
        std::cout << "Март" << std::endl;
        break;
    case month::Апрель:
        std::cout << "Апрель" << std::endl;
        break;
    case month::Май:
        std::cout << "Май" << std::endl;
        break;
    case month::Июнь:
        std::cout << "Июнь" << std::endl;
        break;
    case month::Июль:
        std::cout << "Июль" << std::endl;
        break;
    case month::Август:
        std::cout << "Август" << std::endl;
        break;
    case month::Сентябрь:
        std::cout << "Сентябрь" << std::endl;
        break;
    case month::Октябрь:
        std::cout << "Октябрь" << std::endl;
        break;
    case month::Ноябрь:
        std::cout << "Ноябрь" << std::endl;
        break;
    case month::Декабрь:
        std::cout << "Декабрь" << std::endl;
        break;
    default:
        if (n == 0) {
            std::cout << "До свидания!";
        }
        else
        {
            std::cout << "Неверный номер месяца" << std::endl;
        }
        break;
    }

    return 0;
}
