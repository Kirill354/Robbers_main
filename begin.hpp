#pragma once
#include <iostream>
#include "robber.hpp"
#include "menu.hpp"
#include "main.hpp"

using namespace std;


Robber arr[40];

void beginning(){
    
    for (int i = 0; i<1; i++){ //пока только 1 разбойник имеется

        cout << " Enter Robber " << i+1 << ":" << endl;
        
        cout << "\nname: ";
        cin >> arr[i].name;
        cout << "\nlife or death? put 1 for life, 2 for death: ";
        cin >> arr[i].life;
        cout << "\nquantity of skakun: ";
        cin >> arr[i].skakun;
        cout << "\nquantity of sabli: ";
        cin >> arr[i].sabli;
        cout << "\nquantity of rubin: ";
        cin >> arr[i].rubin;
        cout << "\nquantity of ozher: ";
        cin >> arr[i].ozher;
        cout << "\nquantity of wifes: ";
        cin >> arr[i].wifes;
        cout << "\nquantity of money: ";
        cin >> arr[i].money;

        CurrentRobbers++;

        if (arr[i].life) {
            
            CurrentLiveRobbers++;
        }
        cout << '\n';

    }

    char c;

    do {

        menu();

        cin>>c;
        cout<<'\n';

        switch(c){

            case '0':

                break;

            case '1':

                PrintPobbers(arr);
                break;

            case '2':

                PushRobber(arr);
                break;

            case '3': 

                RobbersWealth(arr);
                break;

            case '4':
            
                RobbersProperty(arr);
                break;

            case '5': 

                KillRobber(arr);
                break;

            case '6':

                RobberInfo(arr);
                break;

            default:

                cout << " incorrect data " << endl;
                break;

        }

    }
    while (c !='0');

}

