//name - anshul rawat
//section - D
//student id -20011349
//roll num - 2018190
#include <iostream>

using namespace std;
long fact(int );
    int main()  
    {  
      int number;  
      long f; 
      cout<<"Enter a number: ";  
      cin>>number;   
       
      f = fact(number);  
      cout<<number<<f<<endl;  
      return 0;  
    }  

      
    long fact(int n)  
    {  
      if (n == 0)  
        return 1;  
      else  
        return(n * fact(n-1));  
    }  
     
