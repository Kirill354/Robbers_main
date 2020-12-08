#pragma once
#include <iostream>
#include <string>
#include "robber.hpp"

using namespace std;

void PushRobber(Robber *arr){

    int i = CurrentRobbers;

    cout << " Enter Robber " << endl;
    cin >> arr[i].name >> arr[i].life >> arr[i].skakun >> arr[i].sabli >> arr[i].rubin >> arr[i].ozher >> arr[i].wifes >> arr[i].money;
    cout << '\n';

    CurrentRobbers++;

    if (arr[i].life) {
        CurrentLiveRobbers++;
    }

}

void RobbersWealth(Robber *arr){

    int a,b,c,d,e;
    int maxx = 0;
    string theRichest;
    int summ = 0;

    cout << " Enter skakun's cost: ";
    cin >> a;

    cout << " Enter sabli's cost: ";
    cin >> b;

    cout << " Enter rubin's cost: ";
    cin >> c;

    cout << " Enter ozherel's cost: ";
    cin >> d;

    cout << " Enter wife's cost: ";
    cin >> e;

    cout << "\n-----THE BEGIN----- " << endl <<endl;

    for (int i = 0; i < CurrentRobbers; i++) {

        cout << " Wealth for robber " << arr[i].name << " : ";

        if (arr[i].life){

            cout << (arr[i].skakun * a) + (arr[i].sabli * b) + (arr[i].rubin* c) + (arr[i].ozher * d) - (arr[i].wifes * e) + (arr[i].money) << endl;
            summ += ((arr[i].skakun * a) + (arr[i].sabli * b) + (arr[i].rubin* c) + (arr[i].ozher * d) - (arr[i].wifes * e) + (arr[i].money));

            if ((arr[i].skakun * a) + (arr[i].sabli * b) + (arr[i].rubin* c) + (arr[i].ozher * d) - (arr[i].wifes * e) + (arr[i].money) > maxx) {

                maxx = (arr[i].skakun * a) + (arr[i].sabli * b) + (arr[i].rubin* c) + (arr[i].ozher * d) - (arr[i].wifes * e) + (arr[i].money);

                theRichest = arr[i].name;

            }

        }

        else{
            cout << "0" << endl;
        }
        
    }

    if (maxx){

        cout << " The richest robber is " << theRichest << endl;

    }
    else {

        cout << "All robbers have died or have been bankrupts " << endl;
    }
    cout << " Gang wealth: " << summ << endl;
    cout << "\n-----THE END----- " << endl <<endl;

}

void PrintPobbers(Robber *arr){

    cout << "-----THE LIST OF ROBBERS-----" << endl << endl;

    for (int i = 0; i < CurrentRobbers; i++){
        cout << " Robber " << i+1 << ":" << endl;
        
        cout <<"\n"<< arr[i].name << endl;

        if (arr[i].life){
            cout << " life " << endl;
        }
        else{
            cout << " death " << endl;
        }
        
        cout << "Number of skakun: " <<  arr[i].skakun << endl;
        cout << "Number of sabli: " << arr[i].sabli << endl;
        cout << "Number of rubin: " << arr[i].rubin << endl;
        cout << "Number of ozher: " << arr[i].ozher << endl;
        cout << "Number of wifes: " << arr[i].wifes << endl;
        cout << "Number of money: " << arr[i].money << endl <<endl;

    }

    cout << "Live robbers: "  << CurrentLiveRobbers << endl;
    cout << "Death robbers: " << CurrentRobbers - CurrentLiveRobbers << endl <<endl;

    cout << "-----THE END OF LIST-----" << endl << endl;

}

void RobbersProperty(Robber *arr){
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int lifes = 0;
    
    
    for (int i = 0; i < CurrentRobbers; i++) {
        
        if (arr[i].life) {
        
            lifes++;
        
            a += arr[i].skakun;
        
            b += arr[i].sabli;
        
            c += arr[i].rubin;
        
            d += arr[i].ozher;
        
            e += arr[i].wifes;
        
            f += arr[i].money;
        }
        
    }
    cout << "\n-----THE BEGIN----- " << endl <<endl;
    
    cout << "Quantity of alive robbers: " << lifes << endl;
    cout << "Quantity of gang's skakun: " << a     << endl;
    cout << "Quantity of gang's sabli: "  << b     << endl;
    cout << "Quantity of gang's rubin: "  << c     << endl;
    cout << "Quantity of gang's ozher: "  << d     << endl;
    cout << "Quantity of gang's wifes: "  << e     << endl;
    cout << "Quantity of gang's money: "  << f     << endl << endl;
    
    cout << "\n-----THE END----- " << endl <<endl;
    
}

void KillRobber(Robber *arr){

    string victim;

    cout << "Enter a name future victim: ";
    cin  >> victim;
    cout << "\n";

    int i = 0;

    while (arr[i].name != victim){

        i++;

    }
    
    if (arr[i].life) {
        
        arr[i].life = 0;
        
    }
    else{

        cout << "This robber has been died " << endl << endl;

    }

}

void RobberInfo(Robber *arr){

    string robberinfo;
    cout << "Who do you want to know about? Put his name: ";
    cin >> robberinfo;

    for (int i = 0; i<CurrentRobbers; i++) {

        if (arr[i].name == robberinfo) {

            if (arr[i].life){
                cout << "\n life " << endl;
            }
            else{
                cout << "\n death " << endl;
            }

            cout << "Quantity of " << robberinfo << " skakun: " << arr[i].skakun << endl;
            cout << "Quantity of " << robberinfo << " sabli: "  << arr[i].sabli  << endl;
            cout << "Quantity of " << robberinfo << " rubin: "  << arr[i].rubin  << endl;
            cout << "Quantity of " << robberinfo << " ozher: "  << arr[i].ozher  << endl;
            cout << "Quantity of " << robberinfo << " wifes: "  << arr[i].wifes  << endl;
            cout << "Quantity of " << robberinfo << " money: "  << arr[i].money  << endl << endl;

        }

    }
}
