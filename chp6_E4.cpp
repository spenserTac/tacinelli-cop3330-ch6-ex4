#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
//#include  <bits/stdc++.h>
#include "chp6_E4.h"

using namespace std;


int vector_compare(){
    // Array of vectors (Name_value).
    Name_value vectorArray[10];

    int i = 0;
    while(1){
        string tempName;
        int tempValue;

        cin >> tempName;
        cin >> tempValue;

        if(tempName == "NoName" && tempValue == 0){
            break;
        }

        Name_value temp_Name_value;

        temp_Name_value.name = tempName;
        temp_Name_value.value = tempValue;

        vectorArray[i] = temp_Name_value;
        i++;
    }

    Name_value vector1 = vectorArray[0];
    Name_value vector2 = vectorArray[1];

    /*
    - Check that each name is unique.
    - Terminate with an error message if a name is entered twice. 
    
    - Write out all the (name,score) pairs, one per line.
    */

    if(vector1.name == vector2.name){
        cout << "ERROR: Names are not unique." <<endl;
        return 0;
    }

    int vectorArrayLength = sizeof(vectorArray)/sizeof(Name_value);
    for(int i = 0; i < vectorArrayLength; i++){
        Name_value tempVectorCompare = vectorArray[i];
        //printf("%s - %d\n", tempVectorCompare.name, tempVectorCompare.value);
        if(tempVectorCompare.name != ""){
            for(int j = 0; j < vectorArrayLength; j++){
                Name_value tempVectorCompare2 = vectorArray[j];
                
                if(i != j){
                    if(tempVectorCompare.name == tempVectorCompare2.name){
                        cout << "ERROR: Same name entered." << endl;
                        return 0;
                    }
                }
            }
            cout << tempVectorCompare.name;
            cout << " ";
            cout << tempVectorCompare.value << endl;
        }
    }

    return 0;
}
