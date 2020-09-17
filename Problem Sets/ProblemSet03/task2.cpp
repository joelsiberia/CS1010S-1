/*************************
 * Problem Set 3: Task 2 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>
#include<iostream>

using namespace std;

// a.
bool is_leap_year(int year) 
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            return false;
        }
    return true;
    }
    else
    {
        return false;
    }
}


// b. 
int days_in_month(int month, int year) 
{
    if (month == 2 && is_leap_year(year))
    {
        return 29;
    }
    else if (month == 2 && is_leap_year(year)== 0)
    {
        return 28;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else
    {
        return 30;
    }
}

// c.
int days_from_epoch(int day, int month, int year) 
{
    int daysum = 0;
    int year_diff = year - 1970;
    int month_diff = month - 1;
    int day_diff = day - 1;

    for (int i = year; i > 1970; i--)
    {
        if (is_leap_year(i))
        {
            daysum += 366;
        }
        else //if (year != 0 && is_leap_year(year)==0)
        {
            daysum += 365;
        }
    }
    
    cout << "1. Current Day: " << daysum << endl;

    for (int i = 2; i <= month; i++)
    {
        daysum += days_in_month(i, year); 
    }
    cout << "2. Current Day: " << daysum << endl;

    daysum += day_diff;
    
    cout << "3. Current Day: " << daysum << endl;
    return daysum;
         
}


// d.
int day_of_week(int day, int month, int year) {
    // your answer here
}    


// e. 
void display_month(int month, int year) {
    // your code here
}

int main(void)
{
    bool test = is_leap_year(2012);
    cout << test << endl;
    int test1 = days_in_month(2,2000);
    cout << "There are " << test1 << " days." << endl;
    int test2 = days_from_epoch(9, 8, 1965)	;
    cout << "Epoch: " << test2 << endl;

}