//Name: Sabeha Khan
// Question index: 5
//Redo the 8 queens 1 dimensional array program with backtracking WITHOUT gotos.


#include <iostream>
#include <cmath>

using namespace std;

// Returns true if the queen in column c is ok
bool ok(int q[], int c) {
	for(int i=0;i<c;i++){
//abs returns the absolute value and is part of cmath library
//All three row test and diagonal tests are all carried out using this one test
		if(q[i]==q[c]||((c-i)==(abs(q[c]-q[i])))){  
			return false; //returns false if the queen in column c not ok
		}
	}
	return true;
}

//function to print out the solutions
void print(int q[]) {
	static int numSolutions = 0;
	cout << "Solution #" << ++numSolutions << ": ";
	//print out 1D solution
	for(int i=0; i<8 ; i++){
		cout << q[i];
	}
// Print the array by printing string "0" or "1" directly
	cout << "\n";
	for(int i =0; i<8; i++){
		for(int j = 0; j<8; j++){
			if(q[j]==i) //q[j] is row in 1D array and i is row in 2D representation
				cout << "1 ";
			else 
				cout << "0 ";
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	int q[8] = {}; // Initialize the array to 0.
	int c = 0;
    q[0] = 0;     // Start in the 1st row, 1st column
    while (c >= 0) { // End the loop if you backtrack from the first column 
    	c++;// Move to the next column
		if(c==8){// If you have passed the last column,
    		print(q);// Call the print function and backtrack
			c--;
		}
        else q[c]=-1;// Otherwise, move to one before the first row
		while (c >= 0) {
			q[c]++;// Move to the next row
			if(q[c]==8)
				 c--;// If you have passed the end of the column, backtrack
			else if(ok(q,c)) 
				break;// Otherwise, call the ok function. If it returns true, go 
	//back to the beginning of the outer loop.
	}
  }
return 0;
}