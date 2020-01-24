#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int N,int M){
	int i = 0;
	
	/*for(int j= 0 ; j<N ; j++){
		if(N>0) cout << endl; 
		
		for( i = 0 ; i<M ; i++){
		if(M>0) cout << "O";
	}
	}*/

	if(N>0 && M>0){
		for(int j= 0 ; j<N ; j++){
			cout << endl;

			for(i = 0 ; i<M ; i++){
				cout << "O";
			}
		}
	}else{
		cout << "Invalid Input";
	}
	
	
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
