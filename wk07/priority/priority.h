#ifndef PRIORITY_H
#define PRIORITY_H

#define MAX_SIZE 10

struct priority_type
{
    int pri;
    string name;
};

class priority
{
public:
    priority();
    bool add (int,string);
    bool remove (string);
    void display();
    
private:
    struct priority_type pQueue[MAX_SIZE];
    int indx;
    int numInQueue;
};

#endif
