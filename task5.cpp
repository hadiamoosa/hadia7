#include<iostream>
using namespace std;
float totalIncome(string type,int rows,int columns );
main()

{
    string type;
    int rows;
    int columns;
    float earning;
    cout<< "Enter type of screen :";
    cin>>type;
    cout<< " Enter rows: ";
    cin>>rows;
    cout<<"Enter columns: ";
    cin>>columns;
    earning=totalIncome(type,rows,columns );
    cout<<"earnings"<<earning;
   
}
float totalIncome(string type,int rows,int columns )
{

    float earning;
    if (type=="premier")
    {
    earning=12.00*rows*columns;
    }
    else if (type== "normal")
    {
        earning=7.50*rows*columns;
    }
    else if (type == "discount")
    {
        earning=5.00*rows*columns;

    }
    return earning;
}