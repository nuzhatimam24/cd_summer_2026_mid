#include <iostream>

using namespace std;

void checkNumericConstant(){
    char str[100];
    cout<<"Enter string: ";
    cin>>str;

    bool numeric = true;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]<48 || str[i]>57){
            numeric = false;
            break;
        }
    }
    if(numeric){
        cout<<"Numeric Constant.";
    }
    else{
        cout<<"Not numeric.";
    }
}

void checkOperators(){
    char exp[100];
    cout<<"Enter the expression: ";
    cin>>exp;

    int count=1;

    for(int i=0; exp[i]!= '\0'; i++){
        if(exp[i]== '+'){
            cout<<"Operator "<<count<<"Addition Operator(+)"<<endl;
            count++;
        }
        else if(exp[i]== '-'){
            cout<<"Operator "<<count<<": Subtraction Operator(-)"<<endl;
            count++;
        }
        else if(exp[i]== '*'){
            cout<<"Operator "<<count<<": Multiplication Operator(*)"<<endl;
            count++;
        }
        else if(exp[i]== '/'){
            cout<<"Operator "<<count<<": Division Operator(/)"<<endl;
            count++;
        }
        else if(exp[i]== '%'){
            cout<<"Operator "<<count<<": Modulas Operator (%)"<<endl;
            count++;
        }
        else if(exp[i]== '='){
            cout<<"Operator "<<count<<": Equal Operator (=)"<<endl;
            count++;
        }
    }
}

void checkCommentLines(){
    char str[100];
    cout<<"Enter string: ";
    cin>>str;

    if(str[0] == '/' && str[1]== '/'){
        cout<<"Single Line Comment."<<endl;
    }
    else if(str[0]=='/' && str[1]== '*'){
        int i=0;
        while(str[i]!='\0')
            i++;
        if(str[i-2]=='*' && str[i-1]=='/'){
            cout<<"Multi Line Comment."<<endl;
        }
        else{
            cout<<"Not a comment."<<endl;
        }
    }
        else{
            cout<<"Not a comment."<<endl;
    }
}

void checkIdentifiers(){
    char str[100];
    cout<<"Enter identifier: ";
    cin>>str;

    bool valid = true;

    if(!((str[0]>='A'&& str[0]<='Z')||(str[0]>='a' && str[0]<='z')||str[0]=='_')){
        valid = false;
    }

    for(int i=1; str[i]!='\0'; i++){
        if(!((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')||(str[i]>='0' && str[i]<='9')|| str[i]=='_')){
            valid = false;
            break;
        }
    }
    if(valid){
        cout<<"Valid Identifier."<<endl;
    }
    else{
        cout<<"Not a valid identifier."<<endl;
    }
}

void averageOfArray(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    int arr[n];
    int sum=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Average of the array = "<<(float)sum/n<<endl;
}

void minimumAndMaximum(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int minimum = arr[0];
    int maximum = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<minimum){
        minimum=arr[i];
    }

    if(arr[i]>maximum){
        maximum = arr[i];
    }

    cout<<"Minimum : "<<minimum<<endl;
    cout<<"Maximum : "<<maximum<<endl;
}

void concateName(){
    string firstName, lastName;

    cout<<"Enter first name: "<<endl;
    cin>>firstName;

    cout<<"Enter last name: "<<endl;
    cin>>lastName;

    string fullName = firstName + " " + lastName;
    cout<<"Full Name : "<<fullName<<endl;
}

int main(){
    checkNumericConstant();
    checkOperators();
    checkCommentLines();
    checkIdentifiers();
    averageOfArray();
    minimumAndMaximum();
    concateName();

    return 0;
}
