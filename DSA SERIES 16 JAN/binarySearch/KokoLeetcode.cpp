#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Check if Koko can eat all bananas
    at speed = mid within h hours
*/
bool isPossible(vector<int>& piles, int h, int mid) {

    long long totalHours = 0;

    for(int i = 0; i < piles.size(); i++) {

        int bananas = piles[i];

        int hoursForThisPile = bananas / mid;

        if(bananas % mid != 0) {
            hoursForThisPile++;
        }

        totalHours += hoursForThisPile;
    }

    return totalHours <= h;
}

int main() {

    vector<int> piles;
    piles.push_back(3);
    piles.push_back(6);
    piles.push_back(7);
    piles.push_back(11);

    int h = 8;

    int start = 1;
    int end = 0;

    for(int i = 0; i < piles.size(); i++) {
        end = max(end, piles[i]);
    }

    int answer = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isPossible(piles, h, mid)) {
            answer = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Minimum eating speed: " << answer << endl;

    return 0;
}
