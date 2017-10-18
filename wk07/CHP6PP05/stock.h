/* CHRISTINE SHUE
   DUE: MARCH 3, 2017
   PURPOSE: stock.h is a header file for the class Stock and the
   struct stockType.  The class Stock creates a stock portfolio for
   the user and the struct stockType creates structures for each stock
   that the user buys.*/

#ifndef STOCK_H
#define STOCK_H

struct stockType
{
    string symbol;
    int qty;
    double price;
    stockType *link;
};

class Stock
{
private:
    stockType *topStock;
    stockType *lastStock;
    double netWorth;
    double totalWorth;
public:
    Stock();
    void purchase(string,int,double); //push
    void sell(); //pop
    bool isEmpty();
    void displayPortfolio();
    void getNetWorth();
};


#endif
