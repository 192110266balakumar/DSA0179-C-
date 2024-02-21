
#include <bits/stdc++.h> 
using namespace std; 


float Cel_To_Fah(float N) 
{ 
	return ((N * 9.0 / 5.0) + 32.0); 
} 

 
int main() 
{ 
	float N = 20.0; 
	
 
	cout << Cel_To_Fah(N); 
	return 0; 
}

