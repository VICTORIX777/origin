#include <iostream>
struct adresse
{
    std::string city;
    std::string street;
    int house_number;
    int flat_number;
    int indeks;
};

int main()
{

    adresse* adress_array = new adresse[3];
    std::cout << "Введите данные по адресам: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Город: ";
        std::cin >> adress_array[i].city;
        std::cout << "Улица: ";
        std::cin >> adress_array[i].street;
        std::cout << "Номер дома: ";
        std::cin >> adress_array[i].house_number;
        std::cout << "Номер квартиры: ";
        std::cin >> adress_array[i].flat_number;
        std::cout << "Индекс: ";
        std::cin >> adress_array[i].indeks;
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Город: " << adress_array[i].city << "\n";
        std::cout << "Улица: " << adress_array[i].street << "\n";
        std::cout << "Номер дома: " << adress_array[i].house_number << "\n";
        std::cout << "Номер квартиры: " << adress_array[i].flat_number << "\n";
        std::cout << "Индекс: " << adress_array[i].indeks << "\n\n";
    }
    return 0;
}
