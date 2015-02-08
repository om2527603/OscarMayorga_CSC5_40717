/*  File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 7, 2015, 9:29 AM
 * Purpose: Homework 
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here

const int NUM_QUES=20;//Holds the number of questions set to 20
const int MIN_COR=15; //Validated the student/user must have at least a 15/20 grade to pass
void checkAnswers(char[], char[], int, int); //Void function to check the answers

int main(int argc, char** argv) {
    
//The 20 answers prefabricated into an array
char answers[NUM_QUES]={
'B', 'D', 'A', 'A', 'C',
'A', 'B', 'A', 'C', 'D',
'B', 'C', 'D', 'A', 'D',
'C', 'C', 'B', 'D', 'A'};
	     
char studAns[NUM_QUES]; //Char variable holds the array for student answers for the 20 questions
	     
	    //Loop for users answers
for (int replies=0; replies<NUM_QUES; replies++) { //For loop, prompts the student/user to enter in the answers to the test
        cout<<"Please enter your answers: ";         //Incremented to 20 questions
        cout<<(replies + 1)<<": ";
        cin>>studAns[replies];
	         
//Input validation for user when entering the answers
//User/student is tasked to inputing the answers, A,B,C,or D
while (studAns[replies] != 'A' && studAns[replies] != 'B' && studAns[replies] != 'C' && studAns[replies] != 'D') {
        cout<<"You must enter A, B, C, or D";
        cout<<endl;
        cout<<"Enter your answers: ";
        cout<<(replies + 1)<< ": ";
        cin>> studAns[replies];} 
}
	     
        checkAnswers(answers, studAns, NUM_QUES, MIN_COR);

    //Exit stage right
    return 0;
}

//Void function that checks the student answers and comparing it to the correct answers
//Using for loop and if statement: if the answers given by user is equal to student answers
void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUES, int MIN_COR) {
//cout << "max: " << NUM_QUES;
int correctAnswers = 0;	     
//Check the student's replies against the correct answers
for (int i=0; i<NUM_QUES; i++)  {
if (answers1[i] == stu_answers1[i])
    correctAnswers++;	    }
//Displays whether the user/student has failed or passed the exam
//If the correct answers is greater than or equal to 15 the student passes, else, student fails
        cout<<endl;
        cout<<"You must have at least 15 correct to pass.";
if (correctAnswers>=MIN_COR){
        cout<<endl;
        cout<<"Student passed the exam";
        cout<<endl;
	    }
else {
        cout <<"Student failed the exam";
        cout<<endl;
	    }	     
//Displays the number of questions that was answered incorrectly by user/student
        cout<<" answered questions."<<endl;
for (int i=0; i<NUM_QUES; i++) {
if (answers1[i] !=stu_answers1[i])
        cout<<"Question # "<<i<<" is incorrect."<<endl;
	    }   
//Display the number of correct and incorrect answers provided by the user/student
        cout<<endl;
        cout<<"Correct Answers = "<<correctAnswers<<endl;
        cout <<"Incorrect Answers = "<<NUM_QUES-correctAnswers<<endl;
	}