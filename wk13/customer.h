#ifndef CUSTOMER_H
#define CUSTOMER_H

#define MAX_CUST 10

struct custType
{
    string name;
    int acct;
    string status;
};

class queue
{
public:
    queue();
    ~queue();;
    bool addCust(string,int,string);
    void removeCust();
    void displayQueue();
    bool hasRoom();
    bool isEmpty();
    void changeStatusFirstCust(string);
private:
    struct custType Cust[MAX_CUST];
    int numOfCust;
};

#endif
