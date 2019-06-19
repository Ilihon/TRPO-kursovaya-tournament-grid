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

struct playoff{
	match_struct A[16];
	playoff *next;
} *V[6];

int match_fill_empty(int team_num, int round_amount, struct playoff *V[6]);
int match_fill(int team_num, int round_amount, char team_mas[][n], struct playoff *V[6]);
int match_round(int team_num, int round_amount, char team_mas[][n], struct playoff *V[6]);

int main()
{    
	setlocale(LC_ALL,"Rus");	
	cout << "Enter team num: ";
	int team_num; //кол-во комманд
	cin >> 	team_num;
	while (team_num<=0 || team_num >=33) {
		puts("Uncorrect team count!");
		cin >> 	team_num;
  	}	

	int round_amount=round_amount_count(team_num); //кол-во раундов
	int match = round_match_count(team_num);//кол-во матчей в раунде
	char team_names[team_num][n]; // имена комманд
	
	V[0]=new playoff;  
	if ( V[0] == NULL ) { 
		printf("Failed to allocate memory");
	   	return 1; // выход по ошибке, код ошибки 1
	}
	for(int i=1;i<=5;i++){//выделяем память
		V[i]=new playoff;  
		if ( V[i] == NULL )	{
			printf("Failed to allocate memory");
	    	return 1; // выход по ошибке, код ошибки 1
		}
		V[i-1]->next=V[i];
	}
	V[5]->next=NULL;
	
	//сгенерировать или считать имена комманд
	cout << "Enter team names? (y/n) \n";
	char g='0'; //
	cin >> g;
	while((g!='y') && (g!='n')){
		cout << "Yes OR Not?\n";
		cin >>g;
	} 

	if(g=='y'){ //считываем имена комманд
		for(int i=0;i<team_num;i++){
			char str[n-3];
			scanf("%s",str);
			strcpy(team_names[i],str);
		}
	}
	else{ //генерируем имена комманд
		for(int i=0;i<team_num;i++){
			char str[n-3]="TeamNum";
			char num[n-3];
			sprintf(num,"%d",i+1);
			strcat(str,num);
			strcpy(team_names[i],str);
		}
	}	
	
	for(int i=0;i<team_num;i++){ //выводим имена коммад
		printf("\n%s", team_names[i]);
	}
	
	cout << "\n\nRound amount: "<< round_amount << "\n";
	
	cout <<"Match amount for next round: "<< match;
	
	
	//сохраняем комманды в текстовый файл
	FILE *team_file = fopen("teams.txt","w");
	char num[n-3];
	sprintf(num,"%d",team_num);
	fputs(num,team_file);
		fputs("\0",team_file);
	for(int i=0;i<team_num;i++){
		fputs("\n",team_file);
		fputs(team_names[i],team_file);
		fputs("\0",team_file);
	}
	fclose(team_file);
	
	
	// создаём файлы для раундов
	FILE *round5 = fopen("round5.txt","w");
	fclose(round5);
	FILE *round4 = fopen("round4.txt","w");
	fclose(round5);
	FILE *round3 = fopen("round3.txt","w");
	fclose(round3);
	FILE *round2 = fopen("round2.txt","w");
	fclose(round2);
	FILE *round1 = fopen("round1.txt","w");
	fclose(round1);	
	
	
	match_fill_empty(team_num,round_amount,V);
	match_fill(team_num,round_amount,team_names,V);
	match_round(team_num,round_amount,team_names, V);
	
	return 0;
}


int match_fill_empty(int team_num, int round_amount, struct playoff *V[6]){ //заполняем пустые структуры в массиве "неизвестными"
	for(int i=6-round_amount;i<6;i++){
		if(team_num%2!=0)
			team_num++;
		team_num=team_num/2;	
		for(int d=0;d<team_num;d++){	
			strcpy(V[i]->A[d].first,"UnknownFirstPlayer");
			strcpy(V[i]->A[d].second,"UnknownSeconPlayer");	
			V[i]->A[d].first_score=0;
			V[i]->A[d].second_score=0;
			strcpy(V[i]->A[d].winner,"UnknownWinner");
		}	
	}
}

int match_fill(int team_num, int round_amount, char team_mas[][n], struct playoff *V[6]){  //заполяем структуры в массиве с "неизвестными" фактическими данными
	int i;
	for(i=0, j=0; i<team_num; i=i+2){
		strcpy(V[6-round_amount]->A[j].first, team_mas[i]);
		if (i+1>=team_num){
			strcpy(V[6-round_amount]->A[j].second, "Phantom name");
		}
		else{
			strcpy(V[6-round_amount]->A[j].second, team_mas[i+1]);
		}
		cout << "\n\n" << V[6-round_amount]->A[j].first << "\n" << V[6-round_amount]->A[j].second;				
		j++;
	}
	return 0;
}

int match_round(int team_num,int round_amount, char team_mas[][n], struct playoff *V[6]){ //переносим данные из структур в массиве в текстовые файлы
	FILE *f;
	while(round_amount!=0){
		switch(round_amount){
			case 1:
				f = fopen("round5.txt", "a");	
			break;	
			case 2:
				f = fopen("round4.txt", "a");	
			break;
			case 3:
				f = fopen("round3.txt", "a");	
			break;	
			case 4:
				f = fopen("round2.txt", "a");	
			break;	
			case 5:
				f = fopen("round1.txt", "a");	
			break;	
		}
		if(team_num%2!=0)
			team_num++;
		team_num=team_num/2;	
		for(int i=0;i<team_num;i++){
			char num[n-3];
			fputs(V[6-round_amount]->A[i].first,f);
			fputs("\0",f);
			fputs("\n",f);
			sprintf(num,"%d",V[6-round_amount]->A[i].first_score);
			fputs(num,f);
			fputs("\0",f);
			fputs("\n",f);
			fputs(V[6-round_amount]->A[i].second,f);
			fputs("\0",f);
			fputs("\n",f);
			sprintf(num,"%d",V[6-round_amount]->A[i].second_score);
			fputs(num,f);
			fputs("\0",f);
			fputs("\n",f);
			fputs(V[6-round_amount]->A[i].winner,f);
			fputs("\0",f);
			fputs("\n\n",f);
		}
		round_amount--;
	}
}

int round_amount_count(int team_num){
	int round_amount=0;
	for(int i=0;i<5;i++){
		if((team_num > pow(2,i)) && (team_num <= pow(2,i+1))){
			round_amount=i+1;
		}
	}
	if(team_num==1) round_amount++;
	return round_amount;
}

int round_match_count(int team_num){
	int matches = team_num/2;
	if(team_num % 2 != 0)
		matches++;
	return(matches);
}



