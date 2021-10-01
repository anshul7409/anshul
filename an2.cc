/*name - anshul rawat
 section - D
 stu id - 20011349
*/

#include <iostream>
using namespace std;


int sum_of_digit(int );

int sum_of_digit(int n)
{
if(n == 0)
return 0;
return(n%10+sum_of_digit(n/10));
}


int main()
{
int n;
cin>>n;
int result = sum_of_digit(n);
cout<<"sum of digit \t"<< n<< "\tis\t"<<result<<endl;
return 0;
}



