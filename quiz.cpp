#include<iostream>
using namespace std;

int main()
{
  int  score = 0;
  char ans;
  int select;
  int store = 0;


  cout<<"-----------------------------QUIZ APP!--------------------------------------"<<endl;
  cout<<"|     There are 5 subject related quize you can select on your choice      |"<<endl;
  cout<<"|                                                                          |"<<endl;
  cout<<"|            1. Computer Science and others game comming soon              |"<<endl;
  cout<<"|                                                                          |"<<endl;

  cout<<"|                 Select your game enter 1, 2 or ......                    |"<<endl;
  cin>>select;


    switch (select)
    {
    case 1:     
                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;
                cout<<"| Score: "<<store<<endl;
                cout<<"|                                                                          |"<<endl;
                cout<<"| Q1. What is the term used for a computer program that appears to be      |\n|     legitimate but actually contains malicious code?"<<endl;
                cout<<"| A) Virus            B) Trojan         C) Worm          D) Spyware        |"<<endl;
                cout<<"| Select your answer                                                       |"<<endl;
                cin>>ans;
                cout<<"| Result:                                                                  |"<<endl;
                if(ans == 'B' || ans == 'b'){
                cout<<"|                                                                          |"<<endl;
                cout<<"| congratulation                                                           |"<<endl;
                score += 1;
                store = score;
                }else{
                cout<<"|  Looser                                                                  |"<<endl;
                score -= 1;
                store = score;
                }

                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;
                cout<<"| Score: "<<store<<endl;
                cout<<"|                                                                          |"<<endl;
                cout<<"| Q2. What does HTML stand for?                                            |"<<endl;
                cout<<"| A) Hyperlinks and Text Markup Language\n| B) Hyper Text Markup Language\n| C) Home Tool Markup Language\n| D) Hyper Terminal Markup Language\n|"<<endl;
                cout<<"| Select your answer                                                       |"<<endl;
                cin>>ans;
                cout<<"| Result:                                                                  |"<<endl;
                if(ans == 'D' || ans == 'd'){
                cout<<"|                                                                          |"<<endl;
                cout<<"| congratulation                                                           |"<<endl;
                score += 1;
                store = score;
                }else{
                cout<<"|  Looser                                                                  |"<<endl;
                score -= 1;
                store = score;
                }

               
                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;
                cout<<"| Score: "<<store<<endl;
                cout<<"|                                                                          |"<<endl;
                cout<<"| Q3. Which of the following is not a programming language?                |"<<endl;
                cout<<"| A) Python           B) CSS         C) Java         D) C++                |"<<endl;
                cout<<"| Select your answer                                                       |"<<endl;
                cin>>ans;
                cout<<"| Result:                                                                  |"<<endl;
                if(ans == 'B' || ans == 'b'){
                cout<<"|                                                                          |"<<endl;
                cout<<"| congratulation                                                           |"<<endl;
                score += 1;
                store = score;
                }else{
                cout<<"|  Looser                                                                  |"<<endl;
                score -= 1;
                store = score;
                }


                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;
                cout<<"| Score: "<<store<<endl;
                cout<<"|                                                                          |"<<endl;
                cout<<"| Q4. Which of the following is an example of a database management system?|"<<endl;
                cout<<"| A)  MySQL      B) Windows     C) Photoshop       D) Microsoft Word       |"<<endl;
                cout<<"| Select your answer                                                       |"<<endl;
                cin>>ans;
                cout<<"| Result:                                                                  |"<<endl;
                if(ans == 'A' || ans == 'a'){
                cout<<"|                                                                          |"<<endl;
                cout<<"| congratulation                                                           |"<<endl;
                score += 1;
                store = score;
                }else{
                cout<<"|  Looser                                                                  |"<<endl;
                score -= 1;
                store = score;
                }


                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;
                cout<<"| Score: "<<store<<endl;
                cout<<"|                                                                          |"<<endl;
                cout<<"| Q5.What is the name of the process where a computer converts high-level|\n|   programming code into machine-readable code?"<<endl;
                cout<<"| A) Compilation       B) Interpretation      C)  Execution    D) Debugging|"<<endl;
                cout<<"| Select your answer                                                       |"<<endl;
                cin>>ans;
                cout<<"| Result:                                                                  |"<<endl;
                if(ans == 'A' || ans == 'a'){
                cout<<"|                                                                          |"<<endl;
                cout<<"| congratulation                                                           |"<<endl;
                score += 1;
                store = score;
                }else{
                cout<<"|  Looser                                                                  |"<<endl;
                score -= 1;
                store = score;
                }
                cout<<"|--------------------------------------------------------------------------|"<<endl;


                cout<<"                                                                            "<<endl;
                cout<<"|----------------------      Computer Science        ----------------------|"<<endl;               
                cout<<"| Total Score: "<<score<<endl;
                cout<<"|                          Thank You For Playing!                          |"<<endl;
                cout<<"|--------------------------------------------------------------------------|"<<endl;
               

                 break;
    
    default:
        cout<<"Please select the correct game option!"<<endl;
        break;
    }


return 0;

}


