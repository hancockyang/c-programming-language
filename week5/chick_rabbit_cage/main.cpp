//
//  main.cpp
//  chick_rabbit_cage
//
//  Created by hankang yang on 2/9/16.
//  Copyright © 2016 hankang yang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int nCases, i, nFeet;
    // nCase is the number of case we need test
    // nFeet is the total number of feet in the cage
    
    cin >> nCases;
    for (i = 0; i < nCases; i++) {
        cin>>nFeet;
        if (nFeet%2!=0) {
            cout<<"0 0"<<endl;// odd number of feet
        }
        else if (nFeet%4 != 0){
            cout<<nFeet/4+1<<" "<<nFeet/2<<endl;
        }
        else{
            cout<<nFeet/4<<" "<<nFeet/2<<endl;
        }
    }
    
    
    return 0;
}
