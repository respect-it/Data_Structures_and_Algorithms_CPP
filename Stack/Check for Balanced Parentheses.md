### Check for balanced parentheses

**Problem**: Given an expression in the form of a string comprising of constants, variables, operators and parenthesis. In the definition of parenthesis we also include curly braces and brackets, i.e. (, {, [, ], }, ). So the expression or string can contain characters that can be upper or lower case letters, symbols for operators and an opening or closing parenthesis (or an opening or closing curly brace, or an opening or closing square bracket). Let's write down some expressions here:

- **(A+B)**         *balanced*
- **{(A+B)+(C+D)}** *balanced*

Given such expressions we want to write a program that would tell us whether parenthesis in the expression are balanced or not and what do we really mean by balanced parenthesis is that corresponding to each opening parenthesis or opening curly brace or opening bracket we should have a closing counter part in correct order. The upper two expressions are balanced, however the following expressions are not balanced:
- **{(x+y).(z)** *not balanced*
  - missing a closing curly brace at the end
- **[2+3]+(A)]** *not balanced*
  - missing an opening square bracket at the beginning
- **{a+z)** *not balanced*
  - corresponding to the opening curly brace we do not have a closing curly brace and corresponding to the closing paranthesis we do not have an opening paranthesis
  
  Checking for balanced paranthesis is one of the tasks performed by a compiler. When we write a program we often miss an opening or closing curly brace or an opening or closing paranthesis:
```cpp
int main()
{
	for (int i = 0; i < 100; i++)
	{
		// some code	
}
```
Compiler must check for this balancing and if symbols are not balanced it should give you an error. In the above problem what's inside the paranthesis does not matter, we do not want to check for correctness of anything that is inside a paranthesis so in the string any character other than opening and closing paranthesis or opening or closing curly brace or opening or closing square bracket can be ignored. This problem sometimes is better stated like this: Given a string comprising only of opening and closing characters of paranthesis braces or brackets - check for balancing. So only these characters and their order is important:
- **()**
- **{()()}**
- **{()()**
- **[]()]**
- **{)**

While parsing a real expression we can simply ignore other characters. All we care about is these characters and their order.

Now, how do we solve this problem? One straight forward thing that comes to mind is that because we should have a closing counter part for an opening paranthesis or opening curly brace or opening square bracket what we can do is, we can count the number of opening and closing symbols for each of these three types and they should be equal. So the number of opening paranthesis should be equal to number of closing paranthesis. And the number of opening curly braces should be equal to number of closings curly braces and same should be true for square brackets as well. But this would not be good enough and here is a counter example:
- **)(**
  - this expression has one opening paranthesis and one closing paranthesis, but it is not balanced
- **[()]**
  - this one is balanced
- **[(])**
  - but this one with the same number of characters of each type as the second expression is not balanced

So the above approach with counting will not work. Apart from count being equal that are some other properties that must be conserved. **Every opening paranthesis must find a closing counterpart to its right and every closing paranthesis must find an opening counterpart in its left**, which is not true in the first expression. And the other property that must be conserved is that **a paranthesis can close only when all the paranthesis opened after it are closed**. In the third expression, the bracket is closed before the paranthesis is closed. 

### Last Opened First Closed

which is the same as LIFO principle (Last In First Out)

The property that must be conserved is that as we scan the expression from left to right any closer should be for the previous unclosed paranthesis (any closer should be for the last unclosed).

What we can do is to scan the expression from left to right and as we scan at any stage we can keep track of all the unclosed paranthesis. Basically what we can do is whenever we get an opening symbol an opening paranthesis an opening curly brace or an opening square bracket, we can add it to a list. If we get a closing symbol it should be the closer for the last element in the list. In case of an inconsistency, like if the last opening symbol in the list is not the same type as the closing symbol, or if there is no last opening symbol at all because the list is empty, we can stop whole process and say that paranthesis are not balanced else we can remove the last opening symbol in the list, because we have got its counterpart and continue this whole process.

If paranthesis are balanced we will always end with an empty list. And if in the end list is not empty then some opening paranthesis have not found its closing counterpart and expression is not balanced. One thing worth noticing here is that we are always inserting or removing one element at a time from the same end of the list. In this whole process whatever is coming in last in the list is going out first. There is a special kind of list that enforces this behaviour that element should be inserted and removed from the same end and we call it a **stack**. In a stack we can insert and remove an element one at a time from the same end in constant time. So what we can do is whenever we get an opening symbol while scanning the list we can push it onto the stack and when we get a closing symbol we can check whether the opening symbol at the top of stack is of the same type as the closing symbol. If it's of the same type we can pop, else if it's not of the same type we can simply say that paranthesis are not balanced. So the pseudocode for this logic will look like something like this:

```cpp
CheckBalancedParanthesis(expression)
{
	n=length(expression);
	Create a stack of charachters:-S
	for i=0 to n-1
	{
		if expression[i] is opening symbol (is '(' or '{' or '[')
			Push(expression[i])
		else if expression[i] is ')' or '}' or ']'
		{
			if (S is empty) || (top of stack does not pair with expression[i])
			{
				return false;
			}
			else
			Pop()
		}
	}
	return S is empty? true : false
}
```
Here is the implementation with C++ programming language:
```cpp
/*
  C++ Program to check for balanced parentheses in an expression using stack.
  Given an expression as string comprising of opening and closing characters
  of parentheses - (), curly braces - {} and square brackets - [], we need to
  check whether symbols are balanced or not.
*/
#include<iostream>
#include<stack>
#include<string>
// Function to check whether two characters are opening 
// and closing of same type. 
bool ArePair(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '{' && closing == '}') return true;
	else if (opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(std::string exp)
{
	std::stack<char> S;
	unsigned len = exp.length();
	for (unsigned i = 0; i < len; i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (S.empty() || !ArePair(S.top(), exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true : false;
}

int main()
{
	/*Code to test the function AreParanthesesBalanced*/
	std::string expression;
	std::cout << "Enter an expression:  "; // input expression from STDIN/Console
	std::cin >> expression;
	AreParanthesesBalanced(expression) ? std::cout << "Balanced\n" : 
		std::cout << "Not Balanced\n";
	return 0;
}
```

Let us add an additional condition.<br>
There are 3 types of brackets – {}, [] and (). {} can contain {}, [] and () brackets. Square brackets [] can contain [] and () brackets. Curved () brackets can contain only () brackets. Said simply, each type of brackets can contain the same type of brackets inside, or a “lower” type of brackets (() is lower than [] which is lower than {}).
<br>If we also want to match the priority of the brackets, we can add the following checks:
```cpp
#include<iostream>
#include<stack>
#include<string>

bool arePair(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '{' && closing == '}') return true;
	else if (opening == '[' && closing == ']') return true;
	return false;
}
bool areParanthesesBalanced(std::string exp) //   [()]{}{[()()]()}
{
	std::stack<char> S;
	unsigned len = exp.length();

	int squareBracket(0), curlyBracket(0), ordinaryBracket(0);

	for (unsigned i = 0; i < len; i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
		{
			if (exp[i] == '{')
			{
				if (ordinaryBracket>0||curlyBracket>0) return false;
				squareBracket ++;
			}
			else if (exp[i] == '[')
			{
				if (ordinaryBracket > 0) return false;				
				curlyBracket ++;
			}
			else ordinaryBracket ++;
			
			S.push(exp[i]);
		}
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (S.empty() || !arePair(S.top(), exp[i]))	return false;
			
			if (exp[i]==')') ordinaryBracket--;
			else if (exp[i] == ']')	curlyBracket--;
			else squareBracket--;
			
			S.pop();
		}
	}
	return S.empty() ? true : false;
}

int main()
{
	std::string exp; std::cin >> exp;
	areParanthesesBalanced(exp) ? std::cout << "valid\n" : std::cout << "invalid\n";
	return 0;
}
```

#### Example:
For example if we know that the parantheses int he input string are balanced, we can extract all expressions from that given string which are within parantheses:

```cpp
#include <iostream>
#include <string>
#include <stack>

void extract(std::string exp)
{
	std::stack<int> stack;

	for (int i = 0; i < exp.length(); i++)
	{
		char c = exp[i];
		if (c == '(')
		{
			stack.push(i);
		}
		else if (c == ')')
		{
			int startIndx = stack.top(); stack.pop();
			int length = i + 1;

			std::string contents("");
			for (size_t j = startIndx; j < length; j++)
			{
				contents += exp[j];
			}
			std::cout << contents << '\n';
		}
	}
}

int main()
{
	std::string exp1("1+(2-(2+3)*4/(3+1))*5"),exp2("C++ (C plus plus)");
	extract(exp1);
	extract(exp2);
	return 0;
}
```
