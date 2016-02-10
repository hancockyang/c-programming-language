//
//  main.cpp
//  Find_odd_even
//
//  Created by hankang yang on 2/9/16.
//  Copyright © 2016 hankang yang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int all[10], odd[10], even[10];
    for (int i = 0; i<10; i++) {
        cin>>all[i];
    }
    int numOdd{0}, numEven{0};
    // split odd and even
    for (int i = 0; i<10; i++) {
        if (all[i]%2 != 0) {// odd
            odd[numOdd] = all[i];
            numOdd++;
        }
        else{//even
            even[numEven] = all[i];
            numEven++;
        }
    }
    // sort odd,  sort(compare to the first one)
    for (int i = 0; i<numOdd - 1; i++) {
        for (int j = i; j<numOdd; j++) {
            if (odd[j]>odd[i]) {
                int tmp = odd[i];
                odd[i] = odd[j];
                odd[j] = tmp;
            }
        }
    }
    
    
    
    // sort even, sort
    for (int i = 0; i<numEven-1; i++) {
        for (int j = i; j<numEven; j++) {
            if (even[j] < even[i]) {
                int tmp = even[i];
                even[i] = even[j];
                even[j] = tmp;
            }
        }
    }
    //output odd
    for (int i = 0; i<numOdd; i++) {
        cout<<odd[i]<<" ";
    }
    for (int i = 0; i<numEven; i++) {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}
