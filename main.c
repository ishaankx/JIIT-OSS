#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20];
    int N;
    printf("Enter the number");
    scanf("%d",&N);
    printf("Enter data");
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
     for(int i=N-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
