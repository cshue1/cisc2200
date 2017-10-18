stack::stack()
{
    sp = NULL;
    numOfElements = 0;
}

void stack::push(int val)
{
    struct stackType *tempPtr;
    if (sp == NULL)
    {
        sp = new stackType;
        sp->data = val;
        sp->link = NULL;
    }
    else
    {
        tempPtr = new stackType;
        tempPtr->data = val;
        tempPtr->link = sp;
        sp = tempPtr;
    }
        numOfElements++;
}

int stack::pop()
{
    int value;
    struct stackType *nodePtr;
    nodePtr = sp;
    sp = sp->link;
    value = nodePtr->data;
    delete nodePtr;
    numOfElements--;
    return (value);
}

void stack::displayStack()
{
    struct stackType *displayPtr;
    cout << " ---Stack----" << endl;
    displayPtr = sp;
    while (displayPtr != NULL)
    {
        cout << "   " << displayPtr->data << endl;;
	displayPtr = displayPtr->link;
    }
}

stack::stack()
{
    sp = NULL;
    numOfElements = 0;
}

void stack::push(int val)
{
    struct stackType *tempPtr;
    if (sp == NULL)
    {
        sp = new stackType;
	sp->data = val;
	sp->link = NULL;
    }
    else
    {
        tempPtr = new stackType;
	tempPtr->data = val;
	tempPtr->link = sp;
	sp = tempPtr;
    }
    numOfElements++;
}

int stack::pop()
{
    int value;
    struct stackType *nodePtr;
    nodePtr = sp;
    sp = sp->link;
    value = nodePtr->data;
    delete nodePtr;
    numOfElements--;
    return (value);
}

void stack::displayStack()
{
    struct stackType *displayPtr;
    cout << " ---Stack----" << endl;
    displayPtr = sp;
    while (displayPtr != NULL)
    {
        cout << "   " << displayPtr->data << endl;
	displayPtr = displayPtr->link;
    }
}
