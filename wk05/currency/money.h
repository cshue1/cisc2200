#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
    Currency exchType;
    double exchRate;
    double changeUS;
    double prcChange;
public:
    double getExchRate();
    void setExchRate(double);
    double getChangeUS();
    void setChangeUS(double);
    double getPrcChange();
    void setPrcChange(double);
}

#endif
