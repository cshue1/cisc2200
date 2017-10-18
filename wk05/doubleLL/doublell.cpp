#include "doublell.h"

doubleLL::doubleLL()
{
    anchor = NULL;
    end    = NULL;
}

void doubleLL::addList(string s)
{
    struct nodeType *newNodePtr;
    newNodePtr = new nodeType;
    if (newNodePtr == NULL)
    {
	cout << "ERROR : new failed!" << endl;
	return;
    }
    if (anchor == NULL)
    {
	anchor          = newNodePtr;

	anchor->name    = s;
	anchor->forward = NULL;
	anchor->reverse = NULL;

	end = anchor;
    }
    else
    {
    }
	
	    
    
}

void doubleLL::displayListF()
{
    
}

void doubleLL::displayListR()
{
    
}
