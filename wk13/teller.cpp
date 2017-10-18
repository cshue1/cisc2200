void Teller::setName (string s)
{
    name = s;
}

void Teller::setStatus(string s)
{
    status = s;
}

string Teller::getName()
{
    return name;
}

string Teller::getStatus()
{
    return status;
}

void Teller::displayStatus()
{
    system("tput cup 2 10");
    cout << "Teller : " << name << endl;

    system ("Tput cup 3 10");
    cout << "Status : " << status << endl;
}
