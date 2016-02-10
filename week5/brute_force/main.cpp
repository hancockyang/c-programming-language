//
//  main.cpp
//  brute_force
//
//  Created by hankang yang on 2/9/16.
//  Copyright © 2016 hankang yang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x, y ,z;
    for (x = 0; x<=33; x++) {
        for (y = 0; y<=50; y++) {
            for (z = 0; z<100; z++) {
                if ((x+y+z==100)&&(3*x+2*y+0.5*z==100)) {
                    cout<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
                }
            }
        }
    }
    
    
    
    return 0;
}
