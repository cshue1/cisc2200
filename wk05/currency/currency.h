#ifndef CURRENCY_H
#define CURRENCY_H

class Currency
{
private:
    string country;
    string currType;
public:
    void setCurr (string,string);
    string getCountry();
    void setCountry(string);
    string getCurrType();
    void setCurrType(string);
};
#endif
