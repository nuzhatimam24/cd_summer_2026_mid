#include <iostream>

using namespace std;

void tokenization(string input){
    input = "cout << 60 + sum << \"Hello\" << endl;";

    string keywords[]= {"cout","endl"};
    string operators[]= {"<<", "+"};
    string punctuations[]= {";"};
    int numbers[]= {"60"};

    int start=0,end;

    for(end=0; end<=input.length();end++){
        if(input[end]=='<' && input[end+1]== '<'){
            if(start!= end){
                string token = "";
                for(int i=start; i<end; i++){
                    token+=input[i];
                    if(token == "cout" || token=="endl"){
                        cout<<"W : "<<token<<" is a keyword."endl;
                    }
                    else if(token=="sum"){
                        cout<<"W : "<<token<<" is an identifier."<<endl;
                    }
                    else if(token== "60"){
                        cout<<"W: "<<token<<" is a number."<<endl;
                    }
                    else{
                        cout<<token<< " is an invalid token."<<endl;
                    }
                }
                cout<<"<< ---> Operator" <<endl;
                end++;
                start= end+1;
            }
            else if(input[end]== '+'){
                string token = "";
                for(int i=start; i<end;i++){
                    if(input[i]!= ''){
                        token+=input[i];
                    }
                    if(token=="60"){
                        cout<<token<<" is a number."<<endl;
                    }
                    else if(token=="sum"){
                        cout<<token<<" is an identifier."<<endl;
                    }
                    cout<<"+ is an operator."<<endl;
                    start=end+1;
                }
                else if(input[end]=='"'){
                    string token = "\"";
                    end++;
                }
                while(input[end]!= '"'){
                    token += input[end];
                    end++;
                }
                token+= "\"";
                cout<< token<<" a String Literal."<<endl;
                start= end+1;
            }
            else if(input[end] == ";"){
                string token="";
                for(int i=start; i<end; i++){
                    if(input[i]!= ''){
                        token+=input[i];
                    }
                    if(token=="endl"){
                        cout<<token<<" is a keyword."<<endl;
                    }
                    else if(token!= ""){
                        cout<<token<< "is an invalid token."<<endl;
                    }
                    cout<<"; is a punctuation."<<endl;
                    start = end + 1;
                }
            }
        }
    }
}

int main()
{
    string input;
    tokenization(input);
    return 0;
}
