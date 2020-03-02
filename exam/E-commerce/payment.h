#include <stdio.h>

int A(int Id, int find[]){
	for(int i=0; find[i] != 0; i++){
		if(Id == find[i]){
			return i;
		}
	}
	return -1;
}

double payment(int itemID[], double price[], int orderItemID[],int orderQuantity[], int onSaleItemID[]){

	double total = 0.0;


	for(int i=0; orderItemID[i] != 0; i++){
		int check = A(orderItemID[i], itemID);

		if(check >= 0){
			double profit = orderQuantity[i]*price[check];
			if( A(orderItemID[i], onSaleItemID) >= 0){
				profit *= 0.8;
			}
			total += profit;
		}

	}

	if (total < 490.0)
	 total += 80;

	return total;

}
