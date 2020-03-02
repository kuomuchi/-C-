#include<stdio.h>
#include <stdbool.h>


int ASD(int A, int B){

	if(A > B){
		return 1;
	}else{
		return -1;
	}

}


int stationDistance(int R_distance[],int G_distance[],int B_distance[],int G_origin,int G_destination,int startStation[],int endStation[]){

	int distance=0;

	int map[][];





		for(int i=0; R_distance[i]!=0; i++){
			map[0][i] = R_distance[i];
		}

		for(int i=0; G_distance[i]!=0; i++){
			map[1][i] = G_distance[i];
		}

		for(int i=0; B_distance[i]!=0; i++){
			map[2][i] = B_distance[i];
		}



	if(startStation[0] = endStation[0]){

		int Towards = (startStation[1], endStation[1]);

		for(){
			
		}


	}else{

	}


}
