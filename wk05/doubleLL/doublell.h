#ifndef DOUBLELL_H
#define DOUBLELL_H
struct nodeType
{
    string name;
    struct nodeType *forward;
    struct nodeType *reverse;
};


class doubleLL
{
public:
    doubleLL();
    void addList(string);
    void displayListF();
    void displayListR();
private:
    struct nodeType * anchor;
    struct nodeType * end;
    
};

#endif
