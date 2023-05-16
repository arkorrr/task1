#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int count,          //#1
        gb;
    double speed,
           size;
    cout << "Enter movie size in 'gb': "; 
    cin >> size;
    cout << "Enter your speed of internet: ";
    cin >> speed;
    gb = 1024; // mbit
    count = (size * gb) / (speed / 8);
    int hours,
        minutes;
    hours = count % 3600;
    minutes = hours % 60;
    cout << "time to download that film = " << count / 3600 << " hours " << hours / 60 << " minutes " << minutes << " seconds ";

    int memory,         //#2
        film = 760, //Mg
        countmemory,
        Gb = 1024; //Mg
    cout << "Enter size of flash drive: ";
    cin >> memory;
    countmemory = (memory * Gb) / film;
    cout << countmemory << " films can fit on a flash drive.";
   
    double value;           //#3
    cout << "Enter a fractional number: ";
    cin >> value;
    cout << round(value * 100) / 100 << endl;
    
    double students,        //#4
           homework;
    cout << "Enter number of students in group: ";
    cin >> students;
    cout << "Enter number of students which completed homework: ";
    cin >> homework;
    cout << "Percent of students which didnt completed homework: " << ((students - homework) / students) * 100 << "%";
    
    int day = 86400, //seconds      //#5
        time,
        hours,
        minutes;
    cout << "Enter how many seconds have passed start of the day: ";
    cin >> time;
    hours = (day - time) % 3600;
    minutes = hours % 60;
    cout << "Time which left until the end of the day: " << (day - time) / 3600 << " Hours " << hours / 60 << " Minutes " << minutes << " Seconds";
    
    double money,       //#6
        rate,
        percent,
        rate1;
    cout << "Enter sum of money which you want to put on deposit: ";
    cin >> money;
    cout << "Specify for what period of time: ";
    cin >> rate;
    cout << "Specify for what percent you put money: ";
    cin >> percent;
    rate1 = percent / 100;
    cout << "Sum of money which you can receive at the end of the time: " << money * pow(1 + rate1 / 12, rate);
    
    const double pi = 3.14;     //#7
    const double radios = 6356.8;
    cout << 4 * pi * pow(radios, 2);
        
}

