#include <iostream>
#include <vector>
using namespace std;                            // avoids having to call std:: everytime

int main() {
  int array [5]= {2,4,6,9,11}; 
  for ( int i=0; i < 5 ; i++) {
    cout << array[i]<< " ";
  }  
  int num1;
  int num2;
  cout << " What numbers should replace " << array[3] << " and " << array[4] << "?" << endl;    
  cout << "Enter the first number:" ;
  cin >> num1 ;
  cout << "Enter the second number: ";
  cin >> num2;
  array[3] = num1;
  array[4] = num2;
  for (int i :array){
    cout << i << " ";
  }
 cout << endl;
vector <int> v1={1,2,3,4,5};
 for (int i : v1){
    cout << i << " "; 
 }
 
 v1.push_back(6);
 cout << endl << "Modified Vector: " ;
 for (int i : v1){
    cout << i << " "; 
 }
 v1.clear ();
 cout << endl << "Vector size: " << v1.size() << endl;
return 0;
}