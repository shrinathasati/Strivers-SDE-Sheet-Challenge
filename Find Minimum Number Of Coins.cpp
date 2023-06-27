#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{   int n=0;
    // Write your code here
    if(amount>=1000){
        n+=(amount/1000);
        amount=amount%1000;
    }
    if(amount>=500){
        n+=(amount/500);
        amount=amount%500;
    }
    if(amount>=100){
        n+=(amount/100);
        amount=amount%100;
    }
    if(amount>=50){
        n+=(amount/50);
        amount=amount%50;
    }
    if(amount>=20){
        n+=(amount/20);
        amount=amount%20;
    }
    if(amount>=10){
        n+=(amount/10);
        amount=amount%10;
    }
    if(amount>=5){
        n+=(amount/5);
        amount=amount%5;
    }
    if(amount>=2){
        n+=(amount/2);
        amount=amount%2;
    }
    if(amount>=1){
        n+=(amount/1);
        amount=amount%1;
    }
    return n;
}
