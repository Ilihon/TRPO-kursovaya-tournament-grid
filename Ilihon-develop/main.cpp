#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;


const int n=33;

int round_match_count(int num);

void round_match(int num );

struct match_struct{
	char first[n];
	char second[n];
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
/*
	for(i=0;i<team_num;i++){
		char str[n];
		scanf("%s",&str);
		strcpy(team_names[i],str);
	}
	for(i=0;i<team_num;i++){
		printf("\n%s", team_names[i]);
	}
*/	
	int round_amount=0,v=team_num;
	for(i=0;i<5;i++){
		if((team_num > pow(2,i)) && (team_num <= pow(2,i+1))){
			round_amount=i+1;
		}
	}
	cout << "Кол-во раундов: "<< round_amount << "\n";
	
	int match = round_match_count(team_num);
}

int round_match_count(int num){
	int matches = num/2;
	if(num % 2 != 0)
		matches++;
	cout <<"Кол-во матчей в 1м раунде: "<< matches;
	return(matches);
}
