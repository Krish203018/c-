#include &lt;stdio.h&gt;
 
// Function to print contents of an array
void print(int arr[], int n)
&#123;
    for (int i = 0; i &lt; n; i++) &#123;
        printf("%d ", arr[i]);
    &#125;
&#125;
 
// Recursive function to reverse elements of a subarray formed
// by `arr[low, high]`
void reverse(int arr[], int low, int high)
&#123;
    if (low &lt; high)
    &#123;
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
 
        reverse(arr, low + 1, high - 1);
    &#125;
&#125;
 
int main(void)
&#123;
    int arr[] = &#123; 1, 2, 3, 4, 5 &#125;;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, 0, n - 1);
    print(arr, n);
 
    return 0;
&#125;