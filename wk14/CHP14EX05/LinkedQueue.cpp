/* CHRISTINE SHUE
   DUE: 21 APRIL 2017
   PURPOSE: LinkedQueue.cpp is an implementation for the interface,
   LinkeqeQueue.h.  It defines the member functions for the class
   LinkedQueue.
*/

LinkedQueue::LinkedQueue()
{
    anchor = NULL;
    end    = NULL;
    count  = 0;
}

LinkedQueue::~LinkedQueue()
{
    anchor = NULL;
    end    = NULL;
    count  = 0;
}

bool LinkedQueue::isEmpty() const
{
    if (anchor == NULL && count == 0)
	return true;
    else
	return false;
}

bool LinkedQueue::enqueue(string newEntry)
{
    bool ins = false;
    Node *add;
    add = new Node;
    if (add != NULL)
    {
	add->item = newEntry;
	add->next = NULL;

	if (anchor == NULL)
	{
	    anchor = add;
	}
	else
	{
	    end->next = add;
	}
	end = add;
	count ++;
	ins = true;
    }
    return ins;
}

bool LinkedQueue::dequeue()
{
    bool rem = false;
    Node *dlt;
    cout << "\tREMOVING " << anchor->item << endl;
    dlt = anchor;
    if (anchor == end)
    {
	anchor = NULL;
	end    = NULL;
    }
    else
	anchor = anchor->next;
    dlt = NULL;
    count --;
    rem = true;
    return rem;
}

void LinkedQueue::display()
{
    Node *disp;
    disp = anchor;
    cout << "DISPLAYING QUEUE : " << endl;
    while (disp != NULL)
    {
	cout << disp->item << endl;
	disp = disp->next;
    }
    cout << endl << endl;
}

int LinkedQueue::getNumberOfEntries()
{
    return count;
}