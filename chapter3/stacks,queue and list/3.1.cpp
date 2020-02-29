// A common problem for compilers and text editors is determining whether the
// parentheses in a string are balanced and properly nested. For example, the string
// ((())())() contains properly nested pairs of parentheses, which the strings )()( and
// ()) do not. Give an algorithm that returns true if a string contains properly nested
// and balanced parentheses, and false if otherwise. For full credit, identify the position
// of the first offending parenthesis if the string is not properly nested and balanced
#include <stack>
#include <string>
#include <iostream>
int checkparenthese(std::string parentheses) { // if true,return -1 ,else return the wrong position
  std::stack<char> tempstatck;
  int retval = 0;
  for(auto i : parentheses) {
    if(i == ')' && tempstatck.empty()) {
      return retval;
    } else {
      if(i == ')') {
        tempstatck.pop();
      } else {
        tempstatck.push('(');
      }
    }
    retval++;
  }
  if(tempstatck.empty()) {
    return -1;
  } else {
    return parentheses.size(); //  more ")" than "("
  }
}

int main()
{
  std::cout<< checkparenthese("(())") <<std::endl;
  std::cout<< checkparenthese("())") <<std::endl;
  std::cout<< checkparenthese("(()") <<std::endl;
  std::cout<< checkparenthese("((())())()") <<std::endl;

}