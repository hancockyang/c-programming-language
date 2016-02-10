//
//  main.cpp
//  bubble_sort
//
//  Created by hankang yang on 2/9/16.
//  Copyright © 2016 hankang yang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, a[1000];
    cin >> n; //input the how many integer do you want to sort
    for (int i = 0; i < n; i++) {
        cin >>a[i];
    }
    // bubble sort
    // from 0 to n-1
    for (int i = 0; i < n-1; i++) {
        // compare loop from 1 to n-i
        for (int j = 1; j < n-i ; j++) {
            //if the left is greater then swap
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<endl;
    }
    
    
    
    return 0;
}
