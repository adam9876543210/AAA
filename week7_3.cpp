//week7_3 後序運算式求值
#include<bits/stdc++.h>
using namespace std;

string input;
int Stack[100] = {0};

int main(){

    int temp = 0 , top = -1;

    int op1 , op2;
    
    while(cin >> input){
        cout << input << endl;
        if(input != "+" && input != "-" && input != "*" && input != "/" && input != "%"){
            temp = stoi(input);                 //change string to int
            Stack[++top] = temp;                //push int into stack
        }
        else{                                   //do +,-,*,/,% 
            op1 = Stack[top];                   //pop out stack
            top--;
            op2 = Stack[top];                   //pop out stack
            top--;
            if(input == "+"){                   // '+'
                Stack[++top] = op2 + op1;
            }
            else if(input == "-"){              // '-'
                Stack[++top] = op2 - op1;
            }
            else if(input == "*"){              // '*'
                Stack[++top] = op2 * op1;
            }
            else if (input == "/"){             // '/'
                Stack[++top] = op2 / op1;
            }
            else if(input == "%"){              //'%'
                Stack[++top] = op2 % op1;
            }
        }
    }
    cout << Stack[top] << endl;                 //final result
    return 0;
}
