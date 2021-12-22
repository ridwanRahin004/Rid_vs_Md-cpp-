#include<iostream>
#include<cmath>
#include<conio.h>
#include<string.h>
using namespace std;
int moh_rank=5;
int rid_rank=5;
int press;
string p1="Mohammad";
string p2="Ridwan";
string ch1="Checkmate";
string ch2="Time";
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
		cout<<"\t\tMatch played(10)"<<endl;
		cout<<"1.Leader Board"<<endl;
		cout<<"2.Match Result"<<endl;
		cout<<"3.All Match results"<<endl;
		cout<<"4.Player Information"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<" Enter Action: "<<endl;
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
	cout<<"Press: [1]"<<endl;
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
		cout<<"\tMatch Number: 1"<<endl;
		cout<<"\tWhite: "<<p2<<endl;
		cout<<"\tBlack: "<<p1<<endl;
		cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 0"<<endl;
		cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==2){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: 2"<<endl;
		cout<<"\tWhite: "<<p1<<endl;
		cout<<"\tBlack: "<<p2<<endl;
		cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 1"<<"\t"<<p2<<": 1"<<endl;
		cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==3){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 3"<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 1"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==4){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: 4"<<endl;
		cout<<"\tWhite: "<<p2<<endl;
		cout<<"\tBlack: "<<p1<<endl;
		cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
		cout<<"\tPoint: "<<p1<<": 2"<<"\t"<<p2<<": 2"<<endl;
		cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==5){
		cout<<"\n"<<endl;
		cout<<"\tMatch Number: 5"<<endl;
		cout<<"\tWhite: "<<p1<<endl;
		cout<<"\tBlack: "<<p2<<endl;
		cout<<"\tResult: "<<dr<<" By "<<dr1<<endl;
		cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 2.5"<<endl;
		cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==6){
			cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 6"<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p2<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 2.5"<<"\t"<<p2<<": 3.5"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==7){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 7"<<endl;
	 cout<<"\tWhite: "<<p2<<endl;
	 cout<<"\tBlack: "<<p1<<endl;
	 cout<<"\tResult: "<<p1<<"-Won By "<<ch1<<endl;
	 cout<<"\tPoint: "<<p1<<": 3.5"<<"\t"<<p2<<": 3.5"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==8){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 8"<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr2<<endl;
	 cout<<"\tPoint: "<<p1<<": 4"<<"\t"<<p2<<": 4"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==9){
	 cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 9"<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	 cout<<"\tPoint: "<<p1<<": 4.5"<<"\t"<<p2<<": 4.5"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else if(match_number==10){
		cout<<"\n"<<endl;
	 cout<<"\tMatch Number: 10"<<endl;
	 cout<<"\tWhite: "<<p1<<endl;
	 cout<<"\tBlack: "<<p2<<endl;
	 cout<<"\tResult: "<<dr<<" By "<<dr3<<endl;
	 cout<<"\tPoint: "<<p1<<": 5"<<"\t"<<p2<<": 5"<<endl;
	 cout<<"Press: [1]"<<endl;
		cin>>press;
		if(press==1){
			main();
		}
	}
	else{
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
	cout<<"Press: [1]"<<endl;
	cin>>press;
	if(press==1){
		main();
	}
}
void player_information(){
	cout<<"\nMatch Played: 10"<<endl;
	cout<<"\t\tMohammad"<<endl;
	cout<<"WON: \tWhite: 1(match number 3)"<<endl;
	cout<<"     \tBlack: 2(match number 1,7)"<<endl;
	cout<<"\n"<<endl;
	cout<<"LOST: \tWhite: 1(Match number 2)"<<endl;
	cout<<"      \tBlack: 2(Match number 4,6)"<<endl;
	cout<<"\n"<<endl;
	cout<<"DRAW: \tWhite: 4(Match number 5,8,9,10)"<<endl;
	cout<<"      \tBlack: 0(Match number )"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\t\tRidwan"<<endl;
	cout<<"WON: \tWhite: 2(Match number 4,6)"<<endl;
	cout<<"     \tBlack: 1(Match number 2)"<<endl;
	cout<<"\n"<<endl;
	cout<<"LOST: \tWhite: 2(Match Number 1,7)"<<endl;
	cout<<"      \tBlack: 1(Match number 3)"<<endl;
	cout<<"\n"<<endl;
	cout<<"DRAW: \tWhite: 0(Match number )"<<endl;
	cout<<"      \tBlack: 4(Match number 6,8,9,10)"<<endl;
	cout<<"\n\n"<<endl;
	cout<<"Press: [1]"<<endl;
	cin>>press;
	if(press==1){
		main();
	}
}
