/* CHRISTINE SHUE
   DUE: 7 APRIL 2017
   PURPOSE: SortedLinkedList.cpp is an implementation of the class
   sortedLinkedList.*/
sortedLinkedList::sortedLinkedList()
{
    anchorPtr     = NULL;
    numOfElements = 0;
}

bool sortedLinkedList::insertSorted(string n, string o)
{
   struct nameDirType *prevPtr, *searchPtr, *newDataPtr;;
   bool rc;

   rc = false;

   newDataPtr = new nameDirType;
   if (newDataPtr != NULL)
   {
      newDataPtr->name       = n;
      newDataPtr->occupation = o;
      newDataPtr->next       = NULL;

      if (anchorPtr == NULL)
      {
         anchorPtr = newDataPtr;

         numOfElements++;
         rc = true;
      }
      else
      {
         prevPtr   = NULL;
         searchPtr = anchorPtr;

         while (searchPtr != NULL && searchPtr->name < n)
         {
            prevPtr   = searchPtr;
            searchPtr = searchPtr->next;
         }

         if (searchPtr == NULL)
         {
            prevPtr->next = newDataPtr;
         }
         else if (prevPtr == NULL)
         {
            anchorPtr        = newDataPtr;
            newDataPtr->next = searchPtr;
         }
         else
         {
            prevPtr->next    = newDataPtr;
            newDataPtr->next = searchPtr;
         }

         numOfElements++;
         rc = true;
      }
   }
   else
   {
      cout << "ERROR : new failed!" << endl;
   }
      
   return rc;
}

bool sortedLinkedList::removeSorted(string n)
{
    bool rc = false;
    nameDirType *deletePtr;
    deletePtr = anchorPtr;
    if (anchorPtr->name == n)
    {
	anchorPtr = deletePtr->next;
	rc = true;
	displaySortedList();
    }
    else 
    {
	while (deletePtr != NULL)
        {
	    if (deletePtr->next->name == n)
	    {
		deletePtr->next = deletePtr->next->next;
		rc = true;
		displaySortedList();
		deletePtr = NULL;

	    }
	    else
		deletePtr = deletePtr->next;
	}
    }
    if (!rc)
        cout << "ERROR : Unable to delete " << n << endl;

    return rc;
}

bool sortedLinkedList::isEmpty()
{
    bool rc = false;
    if (numOfElements == 0)
	rc = true;
    return rc;
}

void sortedLinkedList::displaySortedList()
{
    int counter = 1;
    nameDirType *displayPtr;
    displayPtr = anchorPtr;

    if (isEmpty())
	cout << "ERROR : No names in the list" << endl;
    else
    {
	cout << "\tNAME\t\t\tOCCUPATION\t" << endl;
	while(displayPtr != NULL)
	{
	    cout << counter << ")\t"<< displayPtr->name
		 << "\t\t\t" << displayPtr->occupation << endl;
	    counter ++;
	    displayPtr = displayPtr->next;
	}
	cout << endl << endl;

    }
    
}
