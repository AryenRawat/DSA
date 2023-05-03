int* game_with_number(int arr[], int n)
{
    // Complete the function
    for(int i=0;i<n;i++){
        if(i==n-1) continue;
        arr[i]^=arr[i+1];
    }
    return arr;
}
