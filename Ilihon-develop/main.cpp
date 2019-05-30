#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <string>

using namespace std;


const int n=33;
int j=0;

int round_match_count(int num);
int round_amount_count(int team_num);
void round_match(int num_matches, char team_mas[][n], int num);

struct match_struct{
	char first[n];
	int first_score;
	char second[n];
	int second_score;
	char winner[n];
};


int main()
{      
	int team_num;
	cin >> 	team_num;
	if (team_num<=0 || team_num >=33) {
		puts("Uncorrect team count!");
    	main();
  	}	

	char team_names[team_num][n];
	
	// cout << team_num << "\n";
	int i;	
	

	// имена комманд
	cout << "Enter team names? (y/n) \n";
	char g='0';
	cin >> g;
	while((g!='y') && (g!='n')){
		cout << "Yes OR Not?\n";
		cin >>g;
	} 

	if(g=='y'){
		for(i=0;i<team_num;i++){
			char str[n-3];
			scanf("%s",str);
			strcpy(team_names[i],str);
		}
	}
	else{
		for(i=0;i<team_num;i++){
			char str[n-3]="TeamNum";
			char num[n-3];
			sprintf(num,"%d",i+1);
			strcat(str,num);
			strcpy(team_names[i],str);
		}
	}	
	
	for(i=0;i<team_num;i++){
		printf("\n%s", team_names[i]);
	}

	int round_amount=round_amount_count(team_num);
	
	cout << "\n\nRound amount: "<< round_amount << "\n";
	
	int match = round_match_count(team_num);
	cout <<"Match amount for next round: "<< match;
	
	j=team_num;
	FILE *f = fopen("tour.txt", "w");
	fclose(f);
	round_match( match, team_names, j);
	
	
	
	return 0;
}

int round_amount_count(int team_num){
	int round_amount=0;
	for(int i=0;i<5;i++){
		if((team_num > pow(2,i)) && (team_num <= pow(2,i+1))){
			round_amount=i+1;
		}
	}
	return round_amount;
}

int round_match_count(int num){
	int matches = num/2;
	if(num % 2 != 0)
		matches++;
	return(matches);
}

void round_match(int num_matches, char team_mas[][n], int num){ 
	match_struct A[num_matches];
	int i;
	for(i=0, j=0; i<num; i=i+2){
		strcpy(A[j].first, team_mas[i]);
		//cout << "\n\n" << A[j].first;
		if (i+1>=num){
			strcpy(A[j].second, "Phantom name");
			//cout << "\n" << A[j].second;
		}
		else{
			strcpy(A[j].second, team_mas[i+1]);
			//cout << "\n" << A[j].second;
		}
		cout << "\n\n" << A[j].first << "\n" << A[j].second;
		
		strcpy(A[j].winner,A[j].first); // поменять на считываие баллов
		
		cout << "\n" << A[j].winner <<" - winner"; // побдеитель пока-что 1ый игрок
		
		j++;
	}
	int num_matches_old=num_matches;
	num_matches = round_match_count(j);
	char team_names[j][n];
	for(i=0;i<j;i++){
		strcpy(team_names[i],A[i].winner);
	}
	
	FILE *f = fopen("tour.txt", "a");
	for(i=0;i<num_matches_old;i++){
		fputs(A[i].first,f);
		fputs(A[i].second,f);
		fputs("\n\n",f);
	}
	fputs("\n-------\n",f);
	fclose(f);
	
	if(j!=1){
	cout << "\n\n"<<j; // кол-во игроков в след раунде
	cout <<"\nMatch amount for next round: "<< num_matches << "\n---------------------------------------";
		round_match(num_matches,team_names,j);
	}
}




