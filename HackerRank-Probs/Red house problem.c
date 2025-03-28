// You live on a long street, represented as an array, where each position on the street has a specific type:

// 1 → Red House (target)
// -1 → Road Blockage (you cannot pass through)
// 0 → Normal House (walkable)
// 2 → Fast Road (you move twice as fast, meaning each step on a road counts as half a step)
// Your task is to calculate the shortest distance from every position on the street to the nearest red house (1), considering these movement rules:

// Allowed Moves: You can move left or right.
// Road Blocks (-1) Cannot Be Crossed: You cannot pass through them.
// Normal House (0) Can Be Crossed: Moving across a normal house counts as 1.0 step.
// Fast Roads (2) Count as Half a Step: Moving onto a road speeds up movement, meaning each road step counts as 0.5 instead of 1.0.
// If a Red House cannot be reached from any point, return -1.0 for that position.
// Input Format

// An integer n → The number of positions in the street.
// An array arr of length n where:
// 1 represents a red house.
// -1 represents a road block (impassable).
// 0 represents a normal house.
// 2 represents a road (fast movement).
// Constraints

// 1 ≤ n ≤ 10⁶
// arr[i] ϵ {-1,0,1,2}
// The array always contains at least one 1 (red house).
// There may be multiple obstacles (-1) and roads (2).
// Output Format

// An array of the same length, where each index contains:
// The shortest distance to the nearest red house, formatted to 1 decimal place, considering the rules.
// -1.0 if any red house cannot be reached by that position. Sample Testcases

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    double result[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double dist = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            dist = 0.0;
        } 
        else if (arr[i] == -1) {
            dist = INT_MAX; 
        } 
        else if (dist < INT_MAX) {
            dist += (arr[i] == 2) ? 0.5 : 1.0;
        }
        result[i] = dist;
    }
     
    dist = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 1) {
            dist = 0.0;
        } 
        else if (arr[i] == -1) {
            dist = INT_MAX; 
        } 
        else if (dist < INT_MAX) {
            double newDist = dist + ((arr[i] == 2) ? 0.5 : 1.0);
            
            if (newDist < result[i]) {
                result[i] = newDist;
            }
        }
        dist = result[i];
    }

    for (int i = 0; i < n; i++) {
        if (result[i] == INT_MAX) {
            result[i] = -1.0;
        }
        printf("%.1f ", result[i]);
    }

    return 0;
}
