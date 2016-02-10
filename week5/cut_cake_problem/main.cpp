//
//  main.cpp
//  cake_cut
//
//  Created by hankang yang on 2/9/16.
//  Copyright © 2016 hankang yang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int blockCount = 0; // block number
    int i = 0, N = 0;// N cuts
    
    cin >> N;
    
    blockCount = 1;
    for (i = 1; i<=N; i++) {
        blockCount = blockCount + i;
    }
    cout<<"max blocks are "<<blockCount<<endl;
    return  0;
}
