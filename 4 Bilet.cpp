#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
 using namespace std;
int main(){
    string s = "Pascal, APL, ADA, java, PL/I, COBOL, ARRRRRRRRRRRRRRRRRR";
 
    int up = 0, lw = 0;
    
    
    for(string::const_iterator i = s.begin(); i != s.end(); ++i){
        if(isupper(*i))
            ++up;
        else if(islower(*i))
            ++lw;
    }
 
    int n = s.length();
    double p1 = static_cast<double>(up) / n * 100.0;
    double p2 = static_cast<double>(lw) / n * 100.0;
 
   cout << std::setprecision(4);
   cout << "upper char: " << p1 << '%' << endl;
   cout << "lower char: " << p2 << '%' << endl;
   cout << "other char: " << 100.0 - (p1 + p2) << '%' <<endl;
    return 0;
}