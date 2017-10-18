#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <unistd.h>
#include <iomanip>

using namespace std;

#include "teller.h"
#include "teller.cpp"
#include "queue.h"
#include "queue.cpp"

int main()
{
    bool done = false;
    string n;
    int a,input;
    double debt,limit;
    teller T;
    queue bQ;

    while(!done)
    {
	cout << endl << endl;
	cout << "Commands : " << endl;
	cout << "\t 1 = Agt Available" << endl;
	cout << "\t 2 = Agt Unavailable" << endl;
	cout << "\t 3 = Done with call" << endl;
	cout << "4 = New Caller" << endl;
	cout << " 0 = quit : " << endl;
	cin  >> input;

	switch (input)
	{
	case 1:
	    agentWorker.setStatus("Available");
	    
            if (acdSystem.hasCallers())
	    {
		acdSystem.changeStatusFirstCaller("Talking With Agent");
		agentWorker.setStatus("Talking With Customer");
            }
	    break;
	    
	case 2:
	    agentWorker.setStatus("Unavailable");
	    break;
	   
	case 3:
	    if (acdSystem.hasCallers())
	    {
		agentWorker.setStatus("Wrap Up Call");
		acdSystem.removeFirstCaller();
            }
	    break;
	    
	case 4:
	     if (acdSystem.hasRoom())
	     {
		 cout << " Enter name : ";
		 cin  >> cname;
		 cout << " Enter Acct : ";
		 cin  >> cacct;
	       
		 if (agentWorker.getStatus() == "Available")
		 {
		     if (acdSystem.hasCallers())
		     {
			 acdSystem.addCaller(cname, cacct, "Waiting");
		     }
		     else
		     {
			 acdSystem.addCaller(cname, cacct, "Talking With Agent");
			 agentWorker.setStatus("Talking With Customer");
		     }
		 }
		 else
		 {
		     acdSystem.addCaller(cname, cacct, "Waiting");
               }
	     }
	     else
		 {
		     cout << "Sorry. No more callers allowed at this time!" << endl;
            }
	     break;
	     
	case 0:
	    done = true;
	    break;
	    
	default:
	    
	    break;
	}
	
	if (!done)
	{
	    system("clear");
	    
	    agentWorker.displayStatus();
	    acdSystem.displayCallers();
	}
    }
    
    return 0;
    
}
