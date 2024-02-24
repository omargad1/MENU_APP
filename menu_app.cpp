
#include <iostream>
#include <array>
#include <string>


class Person
{
public:
int age;
std::string name;
int id;
};

  std::array<Person,100>info;
  int iterator=0;

void show_menu(){

    std::cout<<"pls select option"<<"\n";
    std::cout<<"1. ADD"<<"\n";
    std::cout<<"2. FETCH"<<"\n";
    std::cout<<"3. QUIT"<<"\n\n";
}


void add(){

  std::cout<<"pls enter name and age\n";
  std::cout<<"name: ";
  std::cin>>info[iterator].name;
  std::cout<<"age: ";
  std::cin>>info[iterator].age;
  info[iterator].id=iterator;
  iterator++;
  
  
}
void fetch(){
    int id;
    std::cout<<"pls enter user id : ";
    std::cin>>id;
    std::cout<<"id: "<<info[id].id<<"\n"<<"name: "<<info[id].name<<'\n'<<"age: "<<info[id].age<<"\n\n";
}

void get_input(){
int option;
 std::cout<<"enter option: ";
 std::cin>>option;
 std::cout<<"\n";
 switch (option)
 {
 case 1:
    add();
    break;
 case 2:
      fetch();
      break;
  case 3:
  exit(0);
  break;    
 
 default:
    break;
 }
}

int main(void)
{

    while (1)
    {
        /* code */
        show_menu();
         get_input();
    }
    
  
  
  

 
}