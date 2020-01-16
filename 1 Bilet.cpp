#include <iostream>

using namespace std;
int main() 
{  int k=0;
      int first_element=0;
        int second_element=0;
    const int n=7;
 int arr[n];   
 
 
 
 
 
 for ( int i=0; i<7;i++)
 {
     cout<< "[" <<  i <<  "]" ; cin >> arr[i]; }
     
     for (int i=0; i<7; i++) { cout <<   arr[i] << endl ; }
    
    
    
   // Нахождение первого элемента равного 0
    for ( int i = 0; i < 7; i++) {
        if (arr[i]==0) {
            first_element=i;
             cout  << "  First element equal=0   "<< "[" <<  first_element << "]"  << endl ; 
            break;} 
            
        }
       
    
    
  // Нахождение второго элемента равного 0
    for (int i = first_element+1; i < 7; i++) {
        if (arr[i]==0) {
            second_element=i; 
          
            
            cout << " Second element equal=0 " << "[" << second_element << "]" << endl;
            
             
              
                break;
        }
    }
    
    
    
    
    // Сумма элементов между двумя нулями
    for ( int i = first_element+1; i<second_element; i++) { k+=arr[i]; cout << k << endl;}
    
    
    return k;
}