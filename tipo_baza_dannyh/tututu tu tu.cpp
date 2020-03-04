#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;
int n = 0, int_role, answ;
string password, login, add_log, add_pass, count, add_name, add_surname, add_filename;
char c_role, roles;
string passwords, logins, bans, names, surnames, filenames;
bool banned = false, sucess = false;
class worker{
	public:
		string w_login;
		string w_password;
		char w_role;
		string w_banned;
		string w_name;
		string w_surname;
		string w_filename;
};

class accountant : public worker{
	public:
		accountant(string temp_1, string temp_2, char temp_3, string temp_4, string temp_5, string temp_6){
			w_login = temp_1;
			w_password = temp_2;
			w_role = temp_3;	
			w_name = temp_4;
			w_surname = temp_5;
			w_filename = temp_6;
		}	
		void file_out(){
			string temp;
			ifstream file_1;
			file_1.open("accountant.txt");
			for(int i = 0; !file_1.eof(); i++){
				getline(file_1, temp);
				cout << i+1 << ") " << temp << endl;
			}
			file_1.close();
		}
		void proj_info(){
			string proj_name, proj_price;
			cout << "������� �������� �������(��������� � ������ ������� �������!!!!!!)" << endl;
			cin >> proj_name;
			cout << "������� ��� ���������" << endl;
			cin >> proj_price;
			ofstream file_1;
			file_1.open("accountant.txt", std::ios::app);
			file_1 << "������ " << proj_name << "� ����������, ��� ��������� - " << proj_price <<endl;
			file_1.close();
			
		}
		void worker_info(){
			string worker_name, worker_surname, worker_fathername, worker_sex, worker_number , worker_stonks;
			cout << "������� ���, �������, ��������, ���, ����� � �������� ���������" << endl;
			cin >> worker_name;
			cin >> worker_surname;
			cin >> worker_fathername;
			cin >> worker_sex;
			cin >> worker_number;
			cin >> worker_stonks;
			ofstream file_1;
			file_1.open("accountant.txt", std::ios::app);
			file_1 << worker_surname <<" "<<worker_name << " "<<worker_fathername << ", ��� " <<worker_sex <<", ����� "<< worker_number << ", �� - " <<worker_stonks << endl;
			file_1.close();
			
		}
};

class designer : public worker{
	public:
		designer(string temp_1, string temp_2, char temp_3, string temp_4, string temp_5, string temp_6){
			w_login = temp_1;
			w_password = temp_2;
			w_role = temp_3;	
			w_name = temp_4;
			w_surname = temp_5;	
			w_filename = temp_6;
		}
		void des_file_out(){
			string temp;
			ifstream file_1;
			file_1.open("designer.txt");
			for(int i = 0; !file_1.eof(); i++){
				getline(file_1, temp);
				cout << i+1 << ") " << temp << endl;
			}
			file_1.close();
		}
			
		void add_note(){
			string note;
			bool to_wrt = true;
			cout << "������� ����� �������� �������(��� �������� ���� ����)" << endl;
			cin >> note;
			ofstream file_1;
			file_1.open("designer.txt", std::ios::app);
			for(int i = 0; i < note.length(); i++){
				if(note[i] == ' '){
					note[i] = '_';
					cout << "�� � �� �������� ����" << endl;
					to_wrt = false;
					break;
				}
			}	
			if(to_wrt){
				file_1 << note << endl;
			}		
			file_1.close();
		}
			
		void search_note(string key_word){
			string srch;
			ifstream in_file;
			in_file.open("designer.txt");
			while(!in_file.eof()){
				int o = 1;
				getline(in_file, srch);
				int pos = srch.find(key_word);
				if(pos!= -1){
					cout << o << ") " << srch << endl;
					o++;
				}
			
			}
			
		}	
};

class  developer : public worker{
	public:
		developer(string temp_1, string temp_2, char temp_3, string temp_4, string temp_5, string temp_6){
			w_login = temp_1;
			w_password = temp_2;
			w_role = temp_3;	
			w_name = temp_4;
			w_surname = temp_5;	
			w_filename = temp_6;	
		}
		void dev_file_out(){
			string temp;
			ifstream file_1;
			file_1.open("developer.txt");
			for(int i = 0; !file_1.eof(); i++){
				getline(file_1, temp);
				cout << i+1 << ") " << temp << endl;
			}
			file_1.close();
		}
			
		void add_note(){
			string note;
			bool to_wrt = true;
			cout << "������� ����� �������� �������(��� �������� ���� ����)" << endl;
			cin >> note;
			ofstream file_1;
			file_1.open("developer.txt", std::ios::app);
			for(int i = 0; i < note.length(); i++){
				if(note[i] == ' '){
					note[i] = '_';
					cout << "�� � �� �������� ����" << endl;
					to_wrt = false;
					break;
				}
			}	
			if(to_wrt){
				file_1 << note << endl;
			}		
			file_1.close();
		}
			
		void search_note(string key_word){
			string srch;
			ifstream in_file;
			in_file.open("developer.txt");
			while(!in_file.eof()){
				int o = 1;
				getline(in_file, srch);
				int pos = srch.find(key_word);
				if(pos!= -1){
					cout << o << ") " << srch << endl;
					o++;
				}
			
			}
			
		}			
			
};

class admin: public worker{
	public:
		admin(string temp_1, string temp_2, char temp_3, string temp_4, string temp_5, string temp_6){
			w_login = temp_1;
			w_password = temp_2;
			w_role = temp_3;	
			w_name = temp_4;
			w_surname = temp_5;	
			w_filename = temp_6;	
		}
		
		void add_user(){
			cout << "���� �� ������ ��������?" << endl;
			cout << "1 - ����������" << endl;
			cout << "2 - ���������" << endl;
			cout << "3 - �����������" << endl;
			cin >> answ;
			switch(answ){
				case 1:{
					cout << "������� �������� ����� � ������" << endl;
					cin >> add_log;
					cin >> add_pass;
					cout << "������� ��� � �������" << endl;
					cin >> add_name;
					cin >> add_surname;
					cout << "������� ��� ����� ���������" << endl;
					cin >> add_filename;
					ofstream file_2;
					file_2.open("data_base.txt", std::ios::app);
					file_2 << add_log << " " << add_pass << " " << "0" << " 1" << add_name << " "<< add_surname << " " << add_filename << endl;
					file_2.close();
					break;
				}
				case 2:{
					cout << "������� �������� ����� � ������" << endl;
					cin >> add_log;
					cin >> add_pass;
					cout << "������� ��� � �������" << endl;
					cin >> add_name;
					cin >> add_surname;
					ofstream file_2;
					file_2.open("data_base.txt", std::ios::app);
					file_2 << add_log << " " << add_pass << " " << "0" << " 2" << add_name << " "<< add_surname << " " << add_filename << endl;
					file_2.close();
					break;
				}
				case 3:{
					cout << "������� �������� ����� � ������" << endl;
					cin >> add_log;
					cin >> add_pass;
					cout << "������� ��� � �������" << endl;
					cin >> add_name;
					cin >> add_surname;
					ofstream file_2;
					file_2.open("data_base.txt", std::ios::app);
					file_2 << add_log << " " << add_pass << " " << "0" << " 3" << add_name << " "<< add_surname << " " << add_filename << endl;
					file_2.close();
					break;
				}
			}
			cout << endl;
		}

		void delete_user(){
			cout << "������� ����� � ������ ���������� ������������" << endl;
			cin >> add_log;
			cin >> add_pass;
			string temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7;
			ifstream in;
			ofstream out;
			in.open("data_base.txt");
			out.open("temp.txt");
			while(!in.eof()){
				in >> temp_1;
				if(temp_1 != add_log){
					in >> temp_2;
					in >> temp_3;
					in >> temp_4;
					in >> temp_5;
					in >> temp_6;
					in >> temp_7;
					out << temp_1 << " " << temp_2 << " " << temp_3 << " " << temp_4 << " " << temp_5 <<" " << temp_6 << " "<< temp_7 <<  endl; 
				}
				else{
					in >> temp_2;
					if(temp_2 == add_pass){
						in >> temp_3;
						in >> temp_4;
						in >> temp_5;
						in >> temp_6;
						in >> temp_7;
					}
					else{
						in >> temp_3;
						in >> temp_4;
						in >> temp_5;
						in >> temp_6;
						in >> temp_7;
						out << temp_1 << " " << temp_2 << " " << temp_3 << " " << temp_4 << " " << temp_5 <<" " << temp_6 << " " << temp_7 <<endl;	
					}
				}
			}
			in.close();
			out.close();
			remove("data_base.txt");
    		rename("temp.txt", "data_base.txt");
    		cout << endl;
		}
			
		void ban_user(){
			cout << "������� ����� � ������ ������������ ��� ����" << endl;
			cin >> add_log;
			cin >> add_pass;
			string temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7;
			ifstream in;
			ofstream out;
			in.open("data_base.txt");
			out.open("temp.txt");
			while(!in.eof()){
				in >> temp_1;
				if(temp_1 == add_log){
					in >> temp_2;
					if(temp_2 == add_pass){
						in >> temp_3;
						in >> temp_4;
						in >> temp_5;
						in >> temp_6;
						in >> temp_7;
						out << temp_1 << " " << temp_2 <<  " 1 " << temp_4 << " " << temp_5 <<" " << temp_6 << " " << temp_7 <<endl;
					}
					else{
						in >> temp_3;
						in >> temp_4;
						in >> temp_5;
						in >> temp_6;
						in >> temp_7;
						out << temp_1 << " " << temp_2 << " " << temp_3 << " " << temp_4 << " " << temp_5 <<" " << temp_6 << " " << temp_7 <<endl;
					}
				}
				else{
					in >> temp_2;
					in >> temp_3;
					in >> temp_4;
					in >> temp_5;
					in >> temp_6;
					in >> temp_7;
					out << temp_1 << " " << temp_2 << " " << temp_3 << " " << temp_4 << " " << temp_5 <<" " << temp_6 << " " << temp_7 <<endl;
				}
			}
			in.close();
			out.close();
			remove("data_base.txt");
    		rename("temp.txt", "data_base.txt");
    		cout << endl;
		}
		void full_list(){
			string temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7;
			ifstream in_file;
			in_file.open("data_base.txt");
			for(int i = 0; ! in_file.eof(); i++){
				in_file >> temp_1;
				in_file >> temp_2;
				in_file >> temp_3;
				in_file >> temp_4;
				in_file >> temp_5;
				in_file >> temp_6;
				in_file >> temp_7;
				
				cout << i+1 << ") " << temp_5 << " " << temp_6 ;
				if(temp_3 == "0"){
					cout << " �� ������� ";
				} 
				else {
					cout << "������� ";
				}
				if(temp_4 == "0"){
					cout << "�������������"<< endl;
				}
				else if(temp_4 == "1"){
					cout << "���������" << endl;
				}
				else if(temp_4 == "2"){
					cout << "��������" << endl;
				}
				else if(temp_4 == "3"){
					cout << "�����������" << endl;
				}
					
			}
			cout << endl;
		}
		void choose_list(){
			string prof_tf;
			cout << "�������������� ����� ��������� �������?" << endl;
			cout << "1 - �������������" << endl;
			cout << "2 - ���������" << endl;
			cout << "3 - ��������" << endl;
			cout << "4 - �����������" << endl;
			cin >> answ;
			switch(answ){
				case 1:{
					prof_tf = "0";
					break;
				}
				case 2:{
					prof_tf = "1";
					break;
				}
				case 3:{
					prof_tf = "2";
					break;
				}
				case 4:{
					prof_tf = "3";
					break;
				}
			}
			string temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7;
			ifstream in_file;
			in_file.open("data_base.txt");
			for(int i = 0; ! in_file.eof(); i++){
				in_file >> temp_1;
				in_file >> temp_2;
				in_file >> temp_3;
				in_file >> temp_4;
				in_file >> temp_5;
				in_file >> temp_6;
				in_file >> temp_7;
				if(temp_4 == prof_tf){
					cout << i+1 << ") " << temp_5 << " " << temp_6 ;
					if(temp_3 == "0"){
						cout << " �� ������� ";
					} 
					else {
						cout << "������� ";
					}
				}
		}
		cout << endl;
	}
};

int autorize(){
	cout << "������� �����" << endl;
	cin >> login ;
	cout << "������� ������" << endl;
	cin >> password;
	ifstream users;
	users.open("data_base.txt");
	for(int i = 0;!users.eof(); i++){
		users >> logins;
		users >> passwords;
		users >> bans;
		users >> roles;
		users >> names;
		users >> surnames;
		users >> filenames;
		if(login == logins){
			if(password == passwords){
				cout << "�������"<< endl;
				sucess = true;
				c_role = roles;
				if(bans == "1"){
					banned = true;
				}
				return 1;
			}
		}
	}
	if(!sucess){
		return 0;
	}
	users.close();
}

int main(){
	setlocale(LC_ALL, "Russian");
	bool going = true;
	if(autorize() == 1){
		if(c_role == '0'){
				admin first(login, password, c_role, names, surnames, filenames);
				if(!banned){
					cout << "����������� ���! - " << names << " " << surnames << endl;
					while(going){
						cout << "��� ����� : " << first.w_login << endl;
						cout << "�� �������������"<< endl;
						cout << "�� �� �������� " << endl;
						cout << "1 - �������� ������������" << endl;
						cout << "2 - ������� ������������" << endl;
						cout << "3 - �������� ������������" << endl;
						cout << "4 - ������� ������ ���� �������������" << endl;
						cout << "5 - ������� ������������� ������������ ���������" << endl;
						cout << "6 - �����" << endl;
						cin >> answ;
						if(answ == 1){
							first.add_user();
						}
						else if(answ == 2){
							first.delete_user();
						}
						else if(answ == 3){
							first.ban_user();
						
						}
						else if(answ == 4){
							first.full_list();
						}
						else if(answ == 5){
							first.choose_list();
						}
						else if(answ == 6){
							going = false;
						}
						else{
							continue;
						}
						
						continue;
					}
				}
				else{
					cout << "� ��� ���)" << endl;
				}
			}
			
		else if(c_role == '1'){
			cout << "����������� ���! - " << names << " " << surnames << endl;
			accountant first(login, password, c_role, names, surnames, filenames);
			if(!banned){
				while(going){
					cout << "��� ����� : " << first.w_login << endl;
					cout << "�� ��������"<< endl;
					cout << "�� �� �������� " << endl;
					cout << "���������� ������ �����" << endl;
					first.file_out();
					cout << "������ � ����" << endl;
					cout << "1 - ������ � ����������" << endl;
					cout << "2 - ���� � ���������" << endl;
					cout << "3 - �����" << endl;
					cin >> answ;
					if(answ == 1){
						first.proj_info();
					}
					else if(answ == 2){
						first.worker_info();
					}
					else if(answ == 3){
						going = false;
					}
					else{
						continue;
					}
				}
			}	
			else{
				cout << "� ��� ���(" << endl;
			}		
			
		}
		else if(c_role == '2'){
			cout << "����������� ���! - " << names << " " << surnames << endl;
			designer first(login, password, c_role, names, surnames, filenames);
			cout << "��� ����� : " << first.w_login << endl;
			cout << "�� ��������"<< endl;
			if(!banned){
				cout << "�� �� �������� " << endl;
				while(going){
					cout << "���� ����� �� �������:" << endl;
					for(int i = 0; i < 20; i++){
						cout << i+1 << ") rgb(" << rand()%255 << ", " << rand()%255 << ", " << rand()%255 << ")"<< endl; 
					}
					cout << endl;
					first.des_file_out();
					cout << "��������"<< endl;
					cout << "1 - �������� � ���� �������" << endl;
					cout << "2 - ����� �������" << endl;
					cout << "3 - �����" << endl;
					cin >> answ;
					if(answ == 1){
						first.add_note();
					}
					else if(answ == 2){
						string kw;
						cout << "������� ����� ��� ������" << endl;
						cin >> kw;
						first.search_note(kw);
					}
					else if(answ == 3){
						going = false;
					}
					else{
						
					}
				}
			}
			else{
				cout << "� ��� ���(" << endl;
			}	
		}
		else if(c_role == '3'){
			cout << "����������� ���! - " << names << " " << surnames << endl;
			developer first(login, password, c_role, names, surnames, filenames);
			cout << "��� ����� : " << first.w_login << endl;
			cout << "�� �����������"<< endl;
			if(!banned){
				cout << "�� �� �������� " << endl;
				while(going){
					cout << "���� ����� �� �������:" << endl;
					for(int i = 0; i < 20; i++){
						cout << i+1 << ") rgb(" << rand()%255 << ", " << rand()%255 << ", " << rand()%255 << ")"<< endl; 
					}
					cout << endl;
					first.dev_file_out();
					cout << "��������"<< endl;
					cout << "1 - �������� � ���� �������" << endl;
					cout << "2 - ����� �������" << endl;
					cout << "3 - �����" << endl;
					cin >> answ;
					if(answ == 1){
						first.add_note();
					}
					else if(answ == 2){
						string kw;
						cout << "������� ����� ��� ������" << endl;
						cin >> kw;
						first.search_note(kw);
					}
					else if(answ == 3){
						going = false;
					}
					else{
						
					}
				}
			}
	
			else{
				cout << "� ��� ���(" << endl;
			}						
		}
	
	}
	return 0;
}
