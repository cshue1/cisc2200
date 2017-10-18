queue::queue()
{
    numOfCust = 0;
}

queue::~queue()
{
    cout << "HAVE A NICE DAY!" << endl;
}

bool queue::addCust(string n, int a, string s)
{
    bool answer = false;

    if (numOfCust < MAX_CUST)
    {
	Cust[numOfCust].name   = n;
	Cust[numOfCust].acct   = a;
	Cust[numOfCust].status = s;

	numOfCust++;

	answer = true;
    }
    return true;
}

void queue::removeCust()
{
    if (numOfCust == 0)
	return;
    if (numOfCust == 1)
    {
	Cust[0].name   = "";
	Cust[0].acct   = "";
	Cust[0].status = "";

	numOfCust--;
    }
    else
    {
	for (int i = 0; i < (numOfCust - 1); i++)
	{
	    Cust[i] = cust[i + 1];
	}
	Cust[numOfCust - 1].name   = "";
	Cust[numOfCust - 1].acct   = "";
	Cust[numOfCust - 1].status = "";

	numOfCust--;
    }
}

void queue::displayQueue()
{
    if (numOfCust)
    {
	cout << endl << endl;
	for (int i = 0; i < numOfCust; i++)
	{
	    cout << "    " << setw(18) << Cust[i].name << " : "
		 << "    " << setw(18) << Cust[i].acct << " : "
		 << "    " << setw(18) << Cust[i].status << endl;
	}
    }
}

bool queue::hasRoom()
{
    bool answer = true;
    if (numOfCust < MAX_CUST)
	answer = true;
    return answer;
}

bool queue::isEmpty()
{
    bool answer = false;
    if (numOfCust > 0)
	answer = true;
    return true;
}

void changeStatusFirstCust(string s)
{
    Cust[0].status = s;
}
