#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n)
{
    int dp[n];
    int i, j;

    
    dp[0] = 0;

    
    for (i = 1; i < n; i++)
    {
        dp[i] = INT_MAX;

        
        for (j = 0; j < i; j++)
        {
            if (i <= j + arr[j] && dp[j] != INT_MAX)
            {
                dp[i] = dp[j] + 1;
                break;
            }
        }
    }

    
    if (dp[n-1] == INT_MAX)
        return -1;
    else
        return dp[n-1];
}

int main()
{
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int min_jumps = minJumps(arr, n);
    
    if (min_jumps == -1)
        printf("End is not reachable");
    else
        printf("Minimum number of jumps required to reach the end: %d", min_jumps);
    
    return 0;
}
