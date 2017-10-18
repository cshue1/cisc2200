/* CHRISTINE SHUE
   DUE: MARCH 3, 2017
   PURPOSE: stock.cpp is an implementation of the class Stock.  
   It defines the method functions that enable the user to perform the
   following actions: buy stocks, sell their most recent stock, view
   their portfolio, and view their net worth.*/

Stock::Stock()
{
    totalWorth = 0.00;
    netWorth = 0.00;
    topStock = NULL;
    lastStock = NULL;
}

void Stock::purchase(string s,int q,double p)
{
    stockType* buyStock;
    buyStock = new stockType;
    buyStock->symbol = s;
    buyStock->qty    = q;
    buyStock->price  = p;
    buyStock->link   = NULL;
    if (topStock == NULL)
	topStock = buyStock;
    else
	lastStock->link = buyStock;
    lastStock = buyStock;

    totalWorth += buyStock->price * buyStock->qty;
    
    cout << "You have bought " << buyStock->qty << " shares of "
	 << buyStock->symbol << " at " << buyStock->price << endl << endl << endl;
}

void Stock::sell()
{
    stockType* deleteStock;
    deleteStock = topStock;
    char all;
    double newCost, oldCost;
    int dltQty;
    cout << "What is the stock's current price?";
    cin  >> newCost;
    while (all != 'y' && all != 'Y' && all != 'n' && all != 'N')
    {
	cout << "Would you like to sell all of your shares?";
	cin  >> all;
	if (all == 'y' || all == 'Y')
	{
	    while (deleteStock != NULL)
	    {
		if (deleteStock == topStock && deleteStock == lastStock)
		{
		    newCost *= deleteStock->qty;
		    oldCost = deleteStock->qty * deleteStock->price;
		    topStock = NULL;
		    lastStock = NULL;
		}
		else if (deleteStock->link == lastStock)
	        {
		    newCost *= deleteStock->link->qty;
		    oldCost = deleteStock->link->qty * deleteStock->link->price;
		    deleteStock->link = NULL;
		    lastStock = deleteStock;
		}
		deleteStock = deleteStock->link; 
	    }
	    cout << "Most recent stock purchase was sold." << endl << endl << endl;
	}
	else
        {
	    cout << "How many shares would you like to share?";
	    cin  >> dltQty;
	    while (deleteStock != NULL)
	    {
		    
		if (deleteStock == lastStock)
		{
		    deleteStock->qty -= dltQty;
		    oldCost = dltQty * deleteStock->price;
		    deleteStock->price = newCost;
		    newCost *= dltQty;
		    if (deleteStock == topStock)
			topStock = deleteStock;
		    lastStock = deleteStock;
		}
		deleteStock = deleteStock->link;
      	    }
	}
    }
    totalWorth -= newCost;
    netWorth += newCost - oldCost;  
}

bool Stock::isEmpty()
{
    bool confirm = false;
    if (topStock == NULL)
	confirm = true;
    return confirm;
}

void Stock::displayPortfolio()
{
    stockType *displayStock;
    displayStock= topStock;
    if (isEmpty())
    {
	cout << "Your stock portfolio is empty." << endl;
	return;
    }
    cout << "SYMBOL\t"  << setw(9) << "QTY\t"  << setw(15) << "PRICE\t"
	 << setw(14) << "COST" << endl;
    while(displayStock != NULL)
    {
	cout << displayStock->symbol << "\t"  << setw(8) << displayStock->qty
	     << "\t@" << fixed << showpoint << setprecision (2) << setw(8)
	     << "$" << displayStock->price <<"\t"<< setw(8) << "$"
	     << displayStock->price * displayStock->qty << endl;
	displayStock = displayStock->link;
    }
    cout << endl << endl;
    getNetWorth();
 }

void Stock::getNetWorth()
{
    cout << fixed << showpoint << setprecision (2);
    cout << "Your net worth is:\t" <<  netWorth << endl << endl << endl;
}
