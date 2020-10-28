#include <iostream>

int main()
{
    struct ListObj
    {
        int data;
        ListObj *next;
    };
    int UserInput;
    ListObj *Head;
    Head=NULL;
        
    for(bool a=false; a==false;)
    {
        std::cout<< "press 1 for adding item at the end of list" << std::endl;
        std::cout<< "press 2 for removing first item" << std::endl;
        std::cout<< "press 3 for printing the list in correct order" << std::endl;
        std::cin>>UserInput;
        switch (UserInput)
        {
            case 1: {
                ListObj *NewObj = new ListObj;
                NewObj->next=nullptr;              
                std::cout << "Add value:" << std:: endl;
                std::cin>>NewObj->data;
                if (Head==nullptr)
                {
                    Head=NewObj;
                }
                else
                {
                    ListObj *LastObject=Head;
                    while(LastObject->next!=nullptr)
                    {
                        LastObject=LastObject->next;
                    } 
                    LastObject->next=NewObj;
                }
                break;
            }
            case 2:
            {
                ListObj *CurrentObject=Head->next;
                Head=CurrentObject;
                break;
            }
                
            case 3: 
            {
                ListObj *CurrentObject=Head;
                while(CurrentObject!=nullptr)
                    {
                        std::cout<< CurrentObject->data<< std::endl;
                        CurrentObject=CurrentObject->next;
                    } 
                break;
            }

            case 4: {a=true;
                    break;
            }
        } 
    //break;
    }
}
