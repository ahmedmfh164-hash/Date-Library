# Date-Library
---

# 📅 clsDate – C++ Date Utility Library

A **C++** library for managing and manipulating dates using **OOP (Object-Oriented Programming)**.
The `clsDate` class provides comprehensive tools for working with dates, including:

* Multiple ways to create dates
* Date validation
* Date comparison
* Adding and subtracting days, weeks, months, and years
* Calculating the difference between dates
* Calculating business days and vacation return dates
* Printing monthly and yearly calendars
* Converting dates to strings and vice versa

---

# 🚀 Features

### ✔ Date Creation

Create dates in several formats.

### ✔ Date Validation

Check if a date is valid.

### ✔ Date Comparison

Compare two dates to determine which comes first.

### ✔ Date Calculations

Add or subtract days, weeks, months, or years.

### ✔ Calendar Printing

Print a monthly or yearly calendar.

### ✔ Business Days

Calculate business days or vacation days between two dates.

### ✔ Date Formatting

Convert dates to text in custom formats.

---

# 📦 Project Structure

```
project
│
├── main.cpp
├── clsDate.h
├── clsString.h
└── README.md
```

---

# 🛠 Installation

1. Copy the files into your C++ project.
2. Make sure these files exist:

```
clsDate.h
clsString.h
```

3. Include in your program:

```cpp
#include "clsDate.h"
```

---

# 🧱 Creating Dates

You can create a `clsDate` object in multiple ways:

```cpp
clsDate Date1;                  // System date
clsDate Date2("31/1/2022");     // From string
clsDate Date3(20, 12, 2022);    // Day, Month, Year
clsDate Date4(250, 2022);       // Day order in year
```

---

# 🖨 Printing Dates

```cpp
Date1.Print();
```

Or convert to string:

```cpp
cout << Date1.DateToString();
```

---

# ✔ Date Validation

```cpp
if (Date1.IsValidDate())
{
    cout << "Valid Date";
}
```

---

# ⬆ Increasing Dates

```cpp
Date1.IncreaseDateByOneDay();
Date1.IncreaseDateByOneWeek();
Date1.IncreaseDateByOneMonth();
Date1.IncreaseDateByOneYear();
Date1.IncreaseDateByXDays(10);
Date1.IncreaseDateByXMonths(3);
Date1.IncreaseDateByXYears(5);
```

---

# ⬇ Decreasing Dates

```cpp
Date1.DecreaseDateByOneDay();
Date1.DecreaseDateByOneWeek();
Date1.DecreaseDateByOneMonth();
Date1.DecreaseDateByOneYear();
Date1.DecreaseDateByXDays(10);
```

---

# 🔍 Date Comparison

```cpp
clsDate::CompareDates(Date1, Date2);
```

Return values:

```
Before = -1
Equal  = 0
After  = 1
```

---

# 📊 Difference Between Two Dates

```cpp
int Days = clsDate::GetDifferenceInDays(Date1, Date2);
```

---

# 📆 Calendar

### Monthly Calendar

```cpp
Date1.PrintMonthCalendar();
```

### Yearly Calendar

```cpp
Date1.PrintYearCalendar();
```

---

# 👨‍💻 Calculate Age in Days

```cpp
cout << clsDate::CalculateMyAgeInDays(clsDate(6,11,1977));
```

---

# 🏢 Business Days

Calculate business days between two dates:

```cpp
short Days = clsDate::CalculateBusinessDays(Date1, Date2);
```

---

# 🏖 Vacation Return Date

Calculate the return date from a vacation:

```cpp
clsDate ReturnDate = clsDate::CalculateVacationReturnDate(Date1, 10);
```

---

# 📚 Example Program

```cpp
#include "clsDate.h"
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

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    cout << "My Age In Days: "
         << clsDate::CalculateMyAgeInDays(clsDate(6,11,1977));

    return 0;
}
```

---

# 🧠 Concepts Used

This project demonstrates:

* Object-Oriented Programming (OOP)
* Classes & Objects
* Static Functions
* Date Algorithms
* STL (`vector`, `string`, `stringstream`)

---

# 👨‍💻 Author

Ahmed Mohamed
