#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("enter no of rows");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            (j==1||j==i)?printf("*"):printf(" ");
        }
        for(int j = 1; j<=2*(n-i); j++){
            printf(" ");
        }
        for(int j =1; j<=i; j++){
            (j==1||j==i)?printf("*"):printf(" ");
        }
        printf("\n");
    }    

    for(int i = n; i>=1; i--){
       for(int j =1; j<=i; j++){
            (j==1||j==i)?printf("*"):printf(" ");
        }
        for(int j = 1; j<=2*(n-i); j++){
            printf(" ");
        }
        for(int j =1; j<=i; j++){
            (j==1||j==i)?printf("*"):printf(" ");
        }
        printf("\n");
    } 

    return 0;
}