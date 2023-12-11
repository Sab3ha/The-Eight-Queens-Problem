//Name: Sabeha Khan
// Question index: 6
//Complete the "dumb" 8 queens program that we looked at in lecture. Use the 1 dimensional array representation.


#include <iostream>
#include <cmath>

using namespace std;

// Returns true if the queen in column c is ok
bool ok(int q[]) {
	//c is column 
	//for loop is used to iterate through the array to carry out tests
	for(int c = 7; c>0;c--){
 		for(int i=0;i<c;i++){
//abs returns the absolute value and is part of cmath library
//All three row test and diagonal tests are all carried out using this one test
 			if(q[i]==q[c]||((c-i)==(abs(q[c]-q[i])))) return false;
		 }
 	}
	return true;
}
//function to print out the solutions
void print(int q[]) {
	static int numSolutions = 0;
	cout << "Solution #" << ++numSolutions << ": ";
	for(int i=0; i<8 ; i++){
		cout << q[i];
	}
// Print the array by printing string "0" or "1" directly
	cout << "\n";
	for(int i =0; i<8; i++){
		for(int j = 0; j<8; j++){
			if(q[j]==i) 
				cout << "1 ";
			else 
				cout << "0 ";
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	int q[8]={};// Initialize the array to 0.
	//8 for loops are used to fill in array q with integers from 0 to 7
    for(int i0=0;i0<8;i0++){
    	for(int i1=0;i1<8;i1++){
    		for(int i2=0;i2<8;i2++){
    			for(int i3=0;i3<8;i3++){
				    for(int i4=0;i4<8;i4++){
    				    for(int i5=0;i5<8;i5++){
    				         for(int i6=0;i6<8;i6++){
    				             for(int i7=0;i7<8;i7++){
								    //filling in array q with values from each loop 	                 
    				                 q[0] = i0; 
    				                 q[1] = i1;
    				                 q[2] = i2;
    				                 q[3] = i3;
    				                 q[4] = i4;
    				                 q[5] = i5;
    				                 q[6] = i6;
    			                     q[7] = i7;
    			                     if(ok(q)) //once q is filled in check if it is a solution using ok function
									    print(q);// if ok fuction returns true print the solution
		                        }
		                    }
		                }	
		            }
		        }
		    }
	    }
    }
    return 0;
}