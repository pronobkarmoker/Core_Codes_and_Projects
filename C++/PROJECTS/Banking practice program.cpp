#include <iostream>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice;
    do
    {

        std ::cout << "**********************\n";
        std ::cout << "Enter your choice\n";
        std ::cout << "1. Show balance\n";
        std ::cout << "2. Deposit balance\n";
        std ::cout << "3. withdraw balance\n";
        std ::cout << "4.  EXIT \n";
        std ::cout << "**********************\n";

        std ::cin >> choice;

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std ::cout << " thanks for visiting \n";
            break;

        default:
            std ::cout << " invalid choice \n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
    

    std ::cout << "your balance is $ " << balance <<'\n';

    
}
double deposit()
{
    std ::cout << "enter money ";
    double money=0;
    std ::cin >> money;

    return money;

}
double withdraw(double balance)
{

    double x=0;
    std ::cout << "enter money ";
    std :: cin >> x;

    return x;
}
