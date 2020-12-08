#pragma once
#include <iostream>
#include "struct.hpp"
#include "menu.hpp"
#include "main.hpp"

using namespace std;

int CurrentRobbers = 0;
int CurrentLiveRobbers = 0;

Robber arr[40];

void beginning(){
    
    for (int i = 0; i<1; i++){ //пока только 1 разбойник имеется

        cout << " Enter Robber " << i+1 << ":" << endl;
        cin >> arr[i].name >> arr[i].life >> arr[i].skakun >> arr[i].sabli >> arr[i].rubin >> arr[i].ozher >> arr[i].wifes >> arr[i].money;

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

