#ifndef TELLER_H
#define TELLER_H

class Teller
{
public:
    void setName(string);
    void setStatus(string);
    string getName();
    string getStatus();
    void displayStatus();

private:
    string name;
    string status;
};

#endif
