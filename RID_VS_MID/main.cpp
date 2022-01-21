#include<iostream>
#include<cmath>
#include<conio.h>
#include<string.h>
using namespace std;
float moh_rank=7.5;
float rid_rank=8.5;
int match_played=16;
int press;
string p1="Mohammad";
string p2="Ridwan";
string ch1="Checkmate";
string ch2="Time";
string ch3="resign";
string dr="Draw";
string dr1="Undisputed";
string dr2="Stalement";
string dr3="Dead Position";
//FUNCTIONS
void leader_board();
void match_result();
void all_match_result();
void player_information();
int main(){
		int action;
		cout<<"\t\tMohammad VS Ridwan"<<endl;
		cout<<"\t\tMatch played ("<<match_played<<")"<<endl;
		cout<<"1.Leader Board"<<endl;
		cout<<"2.Match Result"<<endl;
		cout<<"3.All Match results"<<endl;
		cout<<"4.Player Information"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<" Enter Action: ";
		cin>>action;
		if(action==1){
			leader_board();
		}
		else if(action==2){
			match_result();
		}
		else if(action==3){
			all_match_result();
		}
		else if(action==4){
			player_information();
		}
		else if(action==5){
			cout<<"\n\n"<<endl;
			cout<<"#BYE!"<<endl;
		}
	return 0;
}
void leader_board(){
	cout<<"\n"<<endl;
	cout<<"\t\tMOHAMMAD: "<<moh_rank<<"\t\tRIDWAN: "<<rid_rank<<endl;
	cout<<"\n"<<endl;
	cout<<"Press: [1]";
	cin>>press;
	if(press==1){
		main();
	}
}
void match_result(){
	int match_number;
	cout<<"\n"<<endl;
	cout<<"Enter Match number: "<<endl;
	cin>>match_number;
	if(match_number==1){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: "<<match_number<<endl;
		cout<<"\tWhite: "<<p2<<endl;
		cout<<"\tBlack: "<<p1<<endl;
		cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 0"<<endl;
		cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==2){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: "<<match_number<<endl;
		cout<<"\tWhite: "<<p1<<endl;
		cout<<"\tBlack: "<<p2<<endl;
		cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 1"<<endl;
		cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==3){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 1"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==4){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: "<<match_number<<endl;
		cout<<"\tWhite: "<<p2<<endl;
		cout<<"\tBlack: "<<p1<<endl;
		cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 2"<<endl;
		cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==5){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: "<<match_number<<endl;
		cout<<"\tWhite: "<<p1<<endl;
		cout<<"\tBlack: "<<p2<<endl;
		cout<<"\tResult: "<<dr<<" By "<<dr1<<endl;
		cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 2.5"<<endl;
		cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==6){
			cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 3.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==7){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 3.5"<<"\t"<<p2<<": 3.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==8){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 8"<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr2<<endl;
	 cout<<"\tPoint: "<<p1<<": 4"<<"\t"<<p2<<": 4"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==9){
	 cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 9"<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	 cout<<"\tPoint: "<<p1<<": 4.5"<<"\t"<<p2<<": 4.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==10){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	 cout<<"\tPoint: "<<p1<<": 5"<<"\t"<<p2<<": 5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==11){
			cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p2<<"-WON By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 5"<<"\t"<<p2<<": 6"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==12){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<p1<<"-WON By "<<ch3<<endl;
	 cout<<"\tPoint: "<<p1<<": 6"<<"\t"<<p2<<": 6"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==13){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	 cout<<"\tPoint: "<<p1<<": 6.5"<<"\t"<<p2<<": 6.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==14){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p1<<"-WON By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 6.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==15){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p2<<"-WON By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 7.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==16){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: "<<match_number<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<p2<<"-WON By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 8.5"<<endl;
	 cout<<"Press: [1]";
		cin>>press;
		if(press==1){
			main();
		}
	}
	else{
			cout<<"Invalid Action"<<endl;
			main();
	}
}
void all_match_result(){
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 1"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 0"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 2"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 1"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 3"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 1"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 4"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 2"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 5"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<dr<<" By "<<dr1<<endl;
	cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 2.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 6"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 3.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 7"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 3.5"<<"\t"<<p2<<": 3.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 8"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<dr<<" By "<<dr2<<endl;
	cout<<"\tPoint: "<<p1<<": 4"<<"\t"<<p2<<": 4"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 9"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	cout<<"\tPoint: "<<p1<<": 4.5"<<"\t"<<p2<<": 4.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 10"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	cout<<"\tPoint: "<<p1<<": 5"<<"\t"<<p2<<": 5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 11"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p2<<"-WON by "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 5"<<"\t"<<p2<<": 6"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 12"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<p1<<"-WON by "<<ch3<<endl;
	cout<<"\tPoint: "<<p1<<": 6"<<"\t"<<p2<<": 6"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 13"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<dr<<" by "<<dr3<<endl;
	cout<<"\tPoint: "<<p1<<": 6.5"<<"\t"<<p2<<": 6.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 14"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p1<<"-WON by "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 6.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 15"<<endl;
	cout<<"\tWhite: "<<p2<<endl;
	cout<<"\tBlack: "<<p1<<endl;
	cout<<"\tResult: "<<p2<<"-WON by "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 7.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\tMatch Number: 16"<<endl;
	cout<<"\tWhite: "<<p1<<endl;
	cout<<"\tBlack: "<<p2<<endl;
	cout<<"\tResult: "<<p2<<"-WON by "<<ch1<<endl;
	cout<<"\tPoint: "<<p1<<": 7.5"<<"\t"<<p2<<": 8.5"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"Press: [1]";
	cin>>press;
	if(press==1){
		main();
	}
}
void player_information(){
	cout<<"\nMatch Played: "<<match_played<<endl;
	cout<<"\t\tMohammad"<<endl;
	cout<<"WON: \tWhite: 2(match number 3,12)"<<endl;
	cout<<"     \tBlack: 3(match number 1,7,14)"<<endl;
	cout<<"\n"<<endl;
	cout<<"LOST: \tWhite: 2(Match number 2,16)"<<endl;
	cout<<"      \tBlack: 4(Match number 4,6,11,15)"<<endl;
	cout<<"\n"<<endl;
	cout<<"DRAW: \tWhite: 5(Match number 5,8,9,10,13)"<<endl;
	cout<<"      \tBlack: 0(Match number )"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\t\tRidwan"<<endl;
	cout<<"WON: \tWhite: 4(Match number 4,6,11,15)"<<endl;
	cout<<"     \tBlack: 2(Match number 2,16)"<<endl;
	cout<<"\n"<<endl;
	cout<<"LOST: \tWhite: 2(Match Number 1,7)"<<endl;
	cout<<"      \tBlack: 3(Match number 3,12,14)"<<endl;
	cout<<"\n"<<endl;
	cout<<"DRAW: \tWhite: 0(Match number )"<<endl;
	cout<<"      \tBlack: 5(Match number 6,8,9,10,13)"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"Press: [1]";
	cin>>press;
	if(press==1){
		main();
	}
}
