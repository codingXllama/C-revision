#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount=0;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	printf("****** Welcome to the ABC Power Supply Company *******\n");
	printf("Input Unit Consumed: ");
	
	// using scanf read the value into the unit variable.
	scanf("%d",&units);


	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units>100 && units<=250){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	
		bill_amount+=100*0.2;
		bill_amount+=(units-100)*0.5;


		// bill_amount+=units*0.2;
		// bill_amount+=(units-100)*0.5;


	}
	else if(units>250 && units <=500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)

		bill_amount+=100*0.2;
		bill_amount+=150*0.5;
		bill_amount+=(units-250)*0.75;



		// bill_amount+=*0.2;
		// bill_amount+=(units-100)*0.5;
		// billamount+=(units-)
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)

		// bill_amount+=100*0.2;
		// bill_amount+150*0.5;
		// bill_amount+200*0.75;
		// bill_amount+=(units-500)*1;
		bill_amount=(100*0.2)+(150*0.5)+(250*0.75)+((units-500)*1);

	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	// invalid that is negative then no bill should be printed. **
	if(units>0)
	{
			printf("Total bill: $%.2lf for %d units\nThank you!\n",bill_amount,units);
	}


	return 0;
}






/*

ex3.

320

1. 100 * 0.2 = 20
2. 20+(150*.50) =95
3. 95+ ()




1. units = 320
2. balance+=100*0.2  //20
3. units= (units-100); //230
4. balance+= 150 * 0.5; // 75  + 20 = 95
5. units = (units-150); // 80
6. balance+ = 80 * 0.75 // 95 + 





units = 125
1. balance + =100*0.2
2. balance+= (units-100)*.5;


units = 320
1.  balance+=100 * 0.2  //20
2.  balance+=150 *0.5;   //75+20 = 95
3. balance+=(units-250)*0.75; //52.5 + 95







 */