//find the first negativ e of all  window ;

#include<stdio.h>

int negative(  int arr[],int n , int ws){
        for(int i=0; i<=n-ws;i++){  // 0 to 4
            int found =0;

            for(int j =i; j<i+ws;j++){ // 0 , 2
                if(arr[j]<0){
                    printf("%d ",arr[j]);
                    found =1;
                    break;
                }

            }
            if(!found){
                printf("0 ");
            }


        }

}

int main(){
int arr[]={10,20,-10,30,-20,40};
int n=sizeof(arr)/sizeof(arr[0]);
int window_size = 2;

negative(arr,n,window_size);




return 0;
}