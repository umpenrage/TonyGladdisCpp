#include <iostream>
#include <string>
#include <cctype>

std::string upperCaseIt(std::string s);

bool sameString(std::string s1, std::string s2);
int main()
{
    std::string name1;
    std::string name2;
    std::cout << "Please input the first name : ";
    std::getline(std::cin, name1);
    std::cout << "Please input the second name : ";
    std::getline(std::cin, name2);
    std::cout << "Name 1 and Name 2 are the same ? ";
    if( sameString(name1,name2)){
        std::cout << "True";
    }
    else{
        std::cout<< "False";
    }
    return 0;
}

std::string upperCaseIt(std::string s){
    for(unsigned i = 0 ; i<s.length(); i++){
            s[i]=std::toupper(s[i]);
    }
    return s;
}

bool sameString(std::string s1, std::string s2){

    if(upperCaseIt(s1)==upperCaseIt(s2)){

        return true;
       }
   else{
        return false;
    }

}
