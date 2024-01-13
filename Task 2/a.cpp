#include<iostream>
using namespace std;
int main(){
    float input1, input2;
    string operation;
    float solution;

    cout << "Enter first input : ";
    cin >> input1;
    cout << "Enter second input : ";
    cin >> input2;

    cout << "1. Add for addition \n2. Sub for subtraction \n3. Mul for multiplication \n4. Div for division" << endl;
    cout << "Enter the operation you want to perform : ";
    cin >> operation;

    if(operation == "Add" || operation == "add" || operation == "ADD" ){
        solution = input1 + input2;
    }

    else if(operation == "Sub" || operation == "sub" || operation == "SUB"){
        solution = input1 - input2;
    }

    else if(operation == "Mul" || operation == "mul" || operation == "MUL"){
        solution = input1 * input2;
    }

    else if(operation == "Div" || operation == "div" || operation == "DIV"){
        solution = input1 / input2;
    }

    else{
        cout << "The operation you provide is invalid.";
    }

    cout << "Your answer is : " << solution;

    return 1;
}