int main()
{
    char route [5][7], repeat;
    int row, column;
    for (int r = 0; r < 5; r++)
	for (int c = 0; c < 7; c++)
	    route[r][c] = '.';
    do
    {
        cout << "Enter row of new home: ";
	cin  >> row;
	cout << "Enter column of new home: ";
	cin  >> column;
	route[row][column] = 'X';
	cout << "Do you want another home built?";
	cin  >> repeat;
    }while(repeat == 'Y');
    cout << "Enter row of Bob's house: ";
    cin  >> row;
    cout << "Enter column of Bob's house: ";
    cin  >> column;
    route[row][column] = 'H';

    cout << "Enter row of Bob's position: ";
    cin  >> row;
    cout << "Enter column of Bob's position: ";
    cin  >> column;
    route[row][column] = 'B';
    return 0;
}
