/* 
 * File:   main.cpp
 * Author: Capture Station
 * Created on January 30, 2015, 11:30 PM
 * Purpose: Prove your adding and Multiplying skills
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTim=15;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"If you miss 4 times you'll lose and if you get it you will move to the "<<endl;
    cout<<"next level & if time its up you lose. 5 extra second for the reading!"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endTim-begTim){
       if(ans==(x+y)){cout<<"You are Correct"<<endl;
      // LEVEL 2
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%9+2;
    y=rand()%10+10;
    totTim=13;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" * "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"If you miss 3 times you'll lose and if you get it you will move to the "<<endl;
    cout<<"next level & if time its up you lose. 3 extra second for the reading!"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endTim-begTim){
       if(ans==(x*y)){cout<<"You are Correct"<<endl;
       
    
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;
        cin>>ans;
        if(ans==(x*y)){cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;}
        cin>>ans;
        if (ans==(x*y)){ cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;}
        }
    }else{
        cout<<"You took too much time!"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;
   }
       
       return 0;
       }//end 2nd level 
       }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;
        cin>>ans;
        if(ans==(x+y)){cout<<"You are Correct"<<endl;
    // LEVEL 2
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%10+10;
    y=rand()%10+10;
    totTim=13;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" * "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"If you miss 3 times you'll lose and if you get it you will move to the "<<endl;
    cout<<"next level & if time its up you lose. 3 extra second for the reading!"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endTim-begTim){
       if(ans==(x*y)){cout<<"You are Correct"<<endl;
    
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;
        cin>>ans;
        if(ans==(x*y)){cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;}
        cin>>ans;
        if (ans==(x*y)){ cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;}
        }
    }else{
        cout<<"You took too much time!"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;
   }
        
        return 0;
        }//2nd level ends here
        else {cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;}
        cin>>ans;
        if(ans==(x+y)){cout<<"You are Correct"<<endl;
    // LEVEL 2
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%10+10;
    y=rand()%10+10;
    totTim=13;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" * "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"If you miss 3 times you'll lose and if you get it you will move to the "<<endl;
    cout<<"next level & if time its up you lose. 3 extra second for the reading!"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endTim-begTim){
       if(ans==(x*y)){cout<<"You are Correct"<<endl;
    
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;
        cin>>ans;
        if(ans==(x*y)){cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;}
        cin>>ans;
        if (ans==(x*y)){ cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;}
        }
    }else{
        cout<<"You took too much time!"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;
   }
        
        return 0;
        }//2nd level end here
        }
        cin>>ans;
        if (ans==(x+y)){ cout<<"You are Correct"<<endl;
        // LEVEL 2
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%10+10;
    y=rand()%10+10;
    totTim=13;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" * "<<y<<endl;
    cout<<"You have "<<totTim<<" seconds to answer"<<endl;
    cout<<"If you miss 3 times you'll lose and if you get it you will move to the "<<endl;
    cout<<"next level & if time its up you lose. 3 extra second for the reading!"<<endl;
    cin>>ans;
    endTim=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endTim-begTim){
       if(ans==(x*y)){cout<<"You are Correct"<<endl;
    
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;
        cin>>ans;
        if(ans==(x*y)){cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<"                 ||"<<endl;
        cout<<" ________________||"<<endl;}
        cin>>ans;
        if (ans==(x*y)){ cout<<"You are Correct"<<endl;
        
        
        return 0;
        }
        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;}
        }
    }else{
        cout<<"You took too much time!"<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endTim-begTim<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;
        cout<<"LOSER!!! "<<endl;
   }
        
        return 0;
        
        
        }        else{ cout<<"You are wrong"<<endl;
        cout<<"      |==========||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"    ,''',        ||"<<endl;
        cout<<"    ',,,'        ||"<<endl;
        cout<<"    | | |        ||"<<endl;
        cout<<"   |  |  |       ||"<<endl;
        cout<<"      |          ||"<<endl;
        cout<<"     | |         ||"<<endl;
        cout<<"    |   |        ||"<<endl;
        cout<<" ________________||"<<endl;}
        cout<<"LOSER!!! "<<endl;
    
    //Exit stage right
    return 0;
}