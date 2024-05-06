/*
Write a Program that calculates the net electricity cost depending on two consumer types; home and commercial 
consumers, ask user to enter 'H' for home consumer and 'C' for commercial Consumers:
for Home Consumers:
first 100 units ---> Rs. 11
Next 100 units  ---> Rs. 15
For Next units  ---> Rs. 20
Fixed Tax       ---> Rs. 700
GST             ---> 10% of electricity Cost

for Commercial Consumers:
first 100 units ---> Rs. 15
Next 100 units  ---> Rs. 22
For Next units  ---> Rs. 30
Fixed Tax       ---> Rs. 1100
GST             ---> 15% of electricity Cost

The program asks for consumer type( C for commercial and H for
home consumer) and then scans for number of units consumed
and it displays the electricity cost ,GST and Total electricity bill
that is sum of electricity cost, fixed tax, and GST.

*/

#include<stdio.h>

int main() {
// calculating electricity bills depending on consumer type

    char consumerType;
    int units;
    float electricCost, gst, total_bill;

    printf("Select the consumer type:\nC for commercial\nH for home.\nEnter consumer type: "); // asking user for consumer type

    scanf("%c", &consumerType);

    printf("Enter the number of units consumed: ");  //asking user for units Consumed
    scanf("%d", &units);

    if(consumerType == 'H' || consumerType == 'h') {

        int fixed_tax= 700;   

        if(units <= 100) {
        electricCost= units*11;
        } else if(units <= 200) {
            electricCost= 100*11 + (units-100)*15;
        } else {
            electricCost= 100*11 + 100*15 + (units-200) * 20;
        }

        gst = 0.1*electricCost;
        total_bill = electricCost + gst + fixed_tax;

    } 
    

    else if(consumerType == 'C' || consumerType == 'c') {

        int fixed_tax= 1100;

        if(units <= 100) {
            electricCost= units*15;
        } else if(units <= 200) {
            electricCost= 100*15 + (units-100)*22;
        } else {
            electricCost= 100*15 + 100*22 + (electricCost-200) * 30;
        }

        gst= 0.15*electricCost;
        total_bill = electricCost + gst + fixed_tax;

    }

    printf("Electricity Cost: %.2f rupees\n", electricCost);
    printf("GST             : %.2f rupees\n", gst);
    printf("Net electricity Bill: %.2f rupees\n", total_bill);

   
    return 0;
}



