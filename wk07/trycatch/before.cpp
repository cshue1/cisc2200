#include <ctime>
#include <iostream>
#include <string>

#define MAX_ITEMS 5
using namespace std;

int main()
{
    int selection, counter = 0;
    bool done = false;
    string todo[MAX_ITEMS];
    time_t rawtime;
    struct tm * timeinfo;

    system("clear");
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    cout << "The current date/time is:\t" << asctime (timeinfo) << endl;
    cout << "Please enter your schedule for today: " << endl;
    while (!done)
    {
	cout << "\t1| to add" << endl;
	cout << "\t2| to display" << endl;
	cout << "\t0| to quit" << endl;
	cin  >> selection;
	switch(selection)
	{
	case 1:
	    
	    cout << "What do you have to do today?" << endl;
	    cin.ignore();
	    getline(cin, todo[counter]);
	    cout << todo[counter] << " was added to your list." << endl << endl;
	    counter ++;
	    break;
	case 2:
	    cout << "YOUR TODO LIST: " << endl;
	    for (int i = 0; i <= MAX_ITEMS; i++)
	    {
		if (todo[i] != "")
		    cout << i+1 << ")\t" << todo[i] << endl << endl;
	    }
	    break;
	case 0:
	    cout << "HAVE A GREAT DAY, AND STAY PRODUCTIVE!" << endl;
	    done = true;
	    break;
	}
    }
    return 0;

}
