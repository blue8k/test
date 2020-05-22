//
//  1284.cpp
//  swexpert
//
//  Created by blue8k on 2020/05/22.
//  Copyright © 2020 blue8k. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int A, B, T, P, Q, R, S, W, i;
    cin >> T;
   for (i = 0 ; i < T ; i++){
        cin >> P >> Q >> R >> S >> W;
        A = P * W;
        if (W < R) B = Q;
        else B = Q + (W - R) * S;
        cout << "#" << i+1 << " " << min(A,B) << endl;
    }
    return 0;
}
