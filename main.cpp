#include <QCoreApplication>
#include <iostream>

int fact(int x)
{
    int result;
    result = 1;

    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n, m, num;
    std::cout << "\nInput a natural number n <= 10:\n";
    std::cin >> n;
    std::cout << "\nInput a natural number m <= 10:\n";
    std::cin >> m;
    num = n - m;
    if (n<=10 && m<=n)
    {

        std::cout << "Number of accommodation options = " << fact(n)/fact(num);

    }
    else {
        std::cout << "Illegal data";
    }

    return a.exec();
}
