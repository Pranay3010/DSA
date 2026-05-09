#include<stdio.h>


void findTargetSum(int arr[],int n,int target){

    int sum =0;
    int found =0;
    int count=0;
    for(int i=0; i<n; i++){

        for (int j =i+1; j < n; j++)
        {
            sum=arr[i] +arr[j];
            if (sum==target)
            {
                printf("The targeted sum 50 is obtained by values %d and %d",arr[i],arr[j]);
                printf("\n");
                found++;
                count++;
            }
            
        }
        
    }
    if(found==0){
        printf("NO sum is found");
}
    printf("The total no. of sum are %d",count);    
}
    
int main(){

    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    int target=50;
    findTargetSum(arr,n,target);

    return 0;

}

