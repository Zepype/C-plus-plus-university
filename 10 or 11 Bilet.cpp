#include <iostream>

using namespace std;

void print(int x[], int n, int min, int max);

int main()

{

   const int n = 5;

   int x[n] = {3, 5, 1 ,7, 4};
   int min=x[0];
     int max=x[0];
   print(x, n, min, max);

   return 0;

}

void print(int x[], int n, int min, int max)

{

   cout << "Massiv:" << endl;

   for(int i = 0; i < n; i++)

      cout << x[i] << endl;
      
      for (int i=0; i < n; i++) { if(max < x[i]) max = x[i];
		if(min > x[i]) min = x[i];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
      

}