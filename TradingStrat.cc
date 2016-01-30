#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const int five_days_windowSize = 5;
const int ten_days_windowSize = 10;

int main() {
	
	// import data here
	
	double prices[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};
    	int days = sizeof(prices) / sizeof(prices[0]);
    	cout << days << endl;
    	                      
   double sum = 0.0;
   double five_days_movingAverage = 0.0;
   
   //nested for loop below for calculating 5 days moving average
   
   for (int i = 0; i<=(days - five_days_windowSize); i++){
	   sum = 0.0;
	   
	   for (int j=i; j<= (i + five_days_windowSize - 1); j++){
	   sum = sum + prices[j];
   }
   
   five_days_movingAverage = sum/five_days_windowSize;
   cout << five_days_windowSize << " days Moving Average is: " 
								<< five_days_movingAverage << endl;
	}
	
	//nested for loop below for calculating 10 DMA
	double ten_days_movingAverage = 0.0;
	for (int i = 0; i<=(days - ten_days_windowSize); i++){
	   sum = 0.0;
	   
	   for (int j=i; j<= (i + ten_days_windowSize - 1); j++){
	   sum = sum + prices[j];
   }
   
   ten_days_movingAverage = sum/ten_days_windowSize;
   cout << ten_days_windowSize << " days Moving Average is: " 
								<< ten_days_movingAverage << endl;
	}
	return 0;
}
