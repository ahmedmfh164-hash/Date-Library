#include"clsDate.h"
#include <iostream>
using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250, 2022);
        Date4.Print();

        Date1.IncreaseDateByOneMonth();
        Date1.Print();

        Date3.PrintYearCalendar();
        cout << "My Age In Days : " << clsDate::CalculateMyAgeInDays(clsDate(6, 11, 1977));

        cout << "\n";
        clsDate D1(12, 2, 2023);
        cout << D1.DateToString(D1)<<"\t" << Date3.DateToString(Date3) << endl;
        clsDate::SwapDate(D1, Date3);
        cout << D1.DateToString(D1) <<"\t" << Date3.DateToString(Date3) << endl;
        

        system("pause>0");

}

