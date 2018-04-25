#ifndef _7_57_H
#define _7_57_H

#include <iostream>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    std::string owner;
    double amount;

    static double interestRate;
    static constexpr double todayRate = 30.01;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

void Account::rate(double newRate)
{
    interestRate = newRate;
}

#endif //_7_57_H