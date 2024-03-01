#include <iostream>

struct bank
{
    int acc_no;
    std::string name;
    float balance;
};
void create_account(bank* b)
{
    std::cout << "Введите номер счета: ";
    std::cin >> b->acc_no;
    std::cout << "Введите имя владельца: ";
    std::cin >> b->name;
    std::cout << "Введите баланс: ";
    std::cin >> b->balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> b->balance;
}

int main()
{
    bank b;
    create_account(&b);
    std::cout << "Ваш счет: " << b.name << ", " << b.acc_no << ", " << b.balance;

    return 0;

}
