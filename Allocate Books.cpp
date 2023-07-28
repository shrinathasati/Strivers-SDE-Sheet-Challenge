#include <bits/stdc++.h> 

long long ayushGivesNinjatest(int n, int m, vector<int> time){

    long long mx = INT_MIN;

    for(int i = 0; i < m; i++){

        mx = max(mx, (long long)time[i]);

    }   

    long long low = mx, high = 1e18, mx1 = 1e18;

    while(low <= high){

        long long mid = (low + high) / 2;

        long long curr = 1;

        long long sum = 0;

        for(int i = 0; i < m; i++){

            if(sum + time[i] > mid){

                sum = 0;

                curr++;

            }

            sum += time[i];

        }

        if(curr > n){

            low = mid + 1;

        }else{

            mx1 = min(mx1, mid);

            high = mid - 1;

        }

    }

    return mx1;

}
