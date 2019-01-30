#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  //the use of auto
  auto ch = "a";
  auto i= 1;
  auto name= "Mango Sauce";
  
  cout << "Char is: " << ch << endl;
  cout << "Int is: " << i << endl;
  cout << "String is: " << name << endl;
  
  //the use of vectors
  vector<int> vec;
  
  
  vec.push_back(5);
  vec.push_back(6);
  
  vec.pop_back();
  
  for (unsigned int v=0; v<5; v++) //use of  standard for loop with push_back
  {
   vec.push_back(v);
  }
  
  
  
  for(unsigned int a=0; a < vec.size(); a++) //use of standard for loop for printing the elements in the vector
  {
    cout<< "Vector: " << vec[a] << endl;
  }
  
  for (unsigned int l=0; l<1; l++) //use of standard for loop with pop_back
  {
     vec.pop_back();
  }
  
  for (auto vect: vec)// use of for loop with auto
  {
    cout << vect << endl;
  }
  
  
  //the use of strings
  string s1="Great";
  string s2= s1 + name;
  cout << "First string: "<< s1 << endl;
  cout << "Second character of first string: "<< s1[1] << endl;
  cout << "Second string: "<< s2 << endl;
  cout << "Size of first string: " << s1.size() << endl;
  
  if (s1 == "Great")
  {
   cout << "Correct"<<endl;
  }
  
  if (s1 != s2)
  {
   cout << "Excellent" << endl;
  }
  
  system("Pause");
  return 0;
 }
  
  
  
  
  
  
  
