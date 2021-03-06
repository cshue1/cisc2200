priority::priority()
{
    indx       = 0;
    numInQueue = 0;

    for (int i = 0; i < MAX_SIZE; i++)
    {
	pQueue[i].pri  = 0;
	pQueue[i].name = "";
    }
}

bool priority::add(int p, string s)
{
    int pos = 0;
    bool rc = false;
    if (numInQueue == MAX_SIZE)
	rc = false;
    else if (numInQueue == 0)
    {
	pQueue[numInQueue].pri  = p;
	pQueue[numInQueue].name = s;

	numInQueue++;

	rc = true;
    }
    else
    {
	if (numInQueue < MAX_SIZE)
	{
	    numInQueue++;
	    while (pQueue[pos].pri <= p && pQueue[pos].name != "")
		pos++;
	    
	    for (int i = numInQueue-1; i >= pos; i--)
	    {
		pQueue[i+1] = pQueue[i];
	    }

	    pQueue[pos].pri = p;
	    pQueue[pos].name = s;
	    rc = true;
	}
    }
    return rc;
}

bool priority::remove(string s)
{
}

void priority::display()
{
    cout << "PRIORITY QUEUE DISPLAY" << endl;
    for (int i = 0; i < numInQueue; i++)
    {
	cout << pQueue[i].pri << "   " << pQueue[i].name
	     << endl;
    }
}
