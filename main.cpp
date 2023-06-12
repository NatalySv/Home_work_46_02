#include <QCoreApplication>
#include <iostream>

int fact1(int x)
{
    int result;
    result = 1;

    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}


int fact2(int y)
{
    int result;
    result = 1;

    for (int i = 1; i <= y; i++)
    {
        result = result * i;
    }
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n, m, num;
    num = n - m;
    std::cout << "\nInput a natural number n <= 10:\n";
    std::cin >> n;
    std::cout << "\nInput a natural number m <= 10:\n";
    std::cin >> m;
    if (n<=10 && m<=n)
    {

        std::cout << "Number of accommodation options = " << fact1(n)/fact2(num);

    }
    else {
        std::cout << "Illegal data";
    }

    return a.exec();
}
