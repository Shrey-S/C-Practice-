//
//  main.cpp
//  CS 2360 HomeWork
//
//  Created by Shrey Sethi on 4/4/17.
//  Copyright © 2017 Shrey Sethi. All rights reserved.
//

#include <iostream>
using namespace std;

void sort(int [], int);
int bSearch(int [], int, double);

int main() {
    
    const int len = 10;
    int target, arr[len] = {93121, 62483, 13579, 26791, 33445, 26792, 55555, 85647, 77777, 79422};
    
    cout << "Enter this week's lottery number : " << endl;
    cin >> target;
    
    sort( arr, len);
    
    int ans = bSearch( arr, len, target);
    if (ans == -1)
        cout << "You lost!" << endl;
    else
        cout << "You won!" << endl;
    
//    for (int c = 0; c < len; c++)         // To output sorted array
//        cout << arr[c] << " ";
//    cout << endl << "Answer: " << ans << endl; //To output answer
}


void sort(int arr[], int len) {
    bool swap = 0;
    int hold;
    do {
        swap = 0;
        for (int i = 1; i < len; i ++) {
            if (arr[i-1] > arr[i]) {
                hold = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = hold;
                swap = 1;
            }
        }
    } while (swap);
}

int bSearch(int arr[], int l, double t) {
    int c = 0, mid = l - 1, test;
    
    do {
        mid = (mid + 1) / 2;
        test = mid + c - 1;
        
        if ( arr[test] < t)
            c += mid;
        else if ( arr[test] == t)
            return test;
    } while (mid != 1);
    
    return -1;
}
