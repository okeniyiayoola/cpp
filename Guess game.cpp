#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int min=1,max=100,num,guess,i,lol=1;
	srand(time(NULL));
	for ( i=1;i<=100;i++){
	num=(rand()%(max-min+1))+min;}
	cout<<"\n\t\t GUESS GAME";
	cout<<"\n I have a number between 1 and 100 .";
	cout<<"\n\n Can you guess my number?";
	
	while ((guess!=num)&&(guess>=1)&& (guess<=100)){
	
	cout<<"\n please type your answer: ";
	cin>>guess;
	if (guess>100)
	cout<<"\n Number greater than 100";
	else if(guess<0)
	cout<<"\n Number less than 0";
	
	else if (guess==num)
	cout<<"\n\a\a Excellent! You guessed the number! "<<(char)lol;
	
	else if (guess>num)
	cout<<"\n Too high. Try again";
	
	else if (guess<num)
	cout<<"\n Too low. Try again";
	
		}
	
	cout<<"\n\n\t Game Over";
	
	
	
	cin.ignore();
	cin.get();
	return 0;
}
