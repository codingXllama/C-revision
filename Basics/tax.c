//Computing the tax in usa according to a given income amount


#include<stdio.h>

int main()
{

    double tax,income;
    printf("Enter your income: ");
    scanf("%lf",&income);

    // Checking income to compute taxes
    if(income<10000)
        tax=0.1;
        
    else if (income>=10000 && income<20000)
        tax=income*0.1; //10% tax

    else if (income>=2000 && income<50000)
        tax= income *0.2;
    
    else{
        tax= income * 0.25;
        tax= tax+ tax*0.1;
    }
    
    printf("Your payable tax is: $%.2lf\n",tax);
    



    return 0;
}