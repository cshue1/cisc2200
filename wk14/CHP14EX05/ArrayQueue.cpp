/* CHRISTINE SHUE
   DUE: 21 APRIL 2017
   PURPOSE: ArrayQueue.cpp is an implementation of the interface,
   ArrayQueue.h.  It defines the member functions for the class
   ArrayQueue.*/

ArrayQueue::ArrayQueue()
{
    front = 0;
    back  = 0;
    count = 0;
}

ArrayQueue::~ArrayQueue()
{
    front = 0;
    back  = 0;
    count = 0;
}

bool ArrayQueue::isEmpty() const
{
    if (count == 0)
	return true;
    else
	return false;
}

bool ArrayQueue::enqueue(string newEntry)
{
    bool ins = false;
    if (count < MAX)
    {
	items[count] = newEntry;
	back = count;
	count ++;
	ins = true;
    }
    return ins;
}

bool ArrayQueue::dequeue()
{
    bool del = false;
    cout << "\tREMOVING " << items[front] << endl;
    if (!isEmpty())
    {
	front = (front + 1) % MAX;
	count --;
	del = true;
    }
    return del;
}

void ArrayQueue::display()
{
    cout << "DISPLAYING QUEUE : " << endl;
    for (int i = front; i <= back; i++)
	cout << items[i] << endl;
    cout << endl << endl;
}

int ArrayQueue::getNumberOfEntries()
{
    return count;
}
