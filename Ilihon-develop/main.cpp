#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;


const int n=33;

int round_match_count(int num);

void round_match(int num_matches, const char team_mas[][n], int num);

struct match_struct{
	char first[n];
	int first_score;
	char second[n];
	int second_score;
	char winner[n];
};


main()
{
	setlocale(LC_ALL, "russian");        
	int team_num;
	cin >> 	team_num;
	if (team_num<=0 || team_num >=33) {
		puts("Не корректное количество комманд!");
    	return 0;
  	}	

	char team_names[team_num][n];
	
	// cout << team_num << "\n";
	int i;	
	

	
	
	// имена комманд

	for(i=0;i<team_num;i++){
		char str[n];
		scanf("%s",&str);
		strcpy(team_names[i],str);
	}
	for(i=0;i<team_num;i++){
		printf("\n%s", team_names[i]);
	}

	int round_amount=0,v=team_num;
	for(i=0;i<5;i++){
		if((team_num > pow(2,i)) && (team_num <= pow(2,i+1))){
			round_amount=i+1;
		}
	}
	cout << "\n\nКол-во раундов: "<< round_amount << "\n";
	
	int match = round_match_count(team_num);
	cout <<"Кол-во матчей в 1м раунде: "<< match;
	round_match( match, team_names, team_num);
}

int round_match_count(int num){
	int matches = num/2;
	if(num % 2 != 0)
		matches++;
	return(matches);
}

void round_match(int num_matches, const char team_mas[][n], int num){
	match_struct A[num_matches];
	for(int i=0, j=0; i<num; i=i+2){
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
		j++;
	}
	num_matches = num_matches /2;
}




