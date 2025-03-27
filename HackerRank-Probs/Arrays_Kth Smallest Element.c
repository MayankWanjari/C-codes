#include <stdio.h>
#include <limits.h>

int kthSmallest(int arr[], int n, int k) {
    int last_min = INT_MIN;
    
    for(int i=0; i<k; i++){      
        int min = INT_MAX;
        for(int j=0; j<n; j++){
            if(arr[j]<min && arr[j]>last_min){
                min=arr[j];
            }
        }
        last_min = min;
    }
    return last_min;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
//change