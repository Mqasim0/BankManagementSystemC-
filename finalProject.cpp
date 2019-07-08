//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************

int main(){
//***************************************************************
//    	THE MAIN variables OF PROGRAM
//****************************************************************

	int acco;
	int amount[1000];
	int balance[1000];
	
	string fname[1000];
	string lname[1000];
	int code[1000];
    string religion[1000];
	string birth[1000];
	long day[1000],year[1000];
	long long int cnic[1000], bform[1000];
	char type[1000];
	
	int numbers =0;
	ifstream infile("accountNumber.txt");
	while(!infile.eof()){
		infile>>numbers;
	}
	infile.close();
	int accountNumber=numbers+1;
	int i;
	int num;
	int a=0;


	do{
		
		
	cout<<"\n\t\t\t\t\t\t\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
		cout<<"\n\t\t\t\t\t\t\t\xb0  WELCOME TO BAHRIAN BANK  \xb0";
		cout<<"\n\t\t\t\t\t\t\t\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0\xb0";
		cout<<"\n\n\t\t\t\t********************************************************************";
		cout<<"\n\n\t\t\t\t\t01. NEW ACCOUNT";
		cout<<"\t\t\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t\t\t\t\t03. WITHDRAW AMOUNT";
		cout<<"\t\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t\t\t\t\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\t06. CLOSE AN ACCOUNT";
		cout<<"\n\n\t\t\t\t\t07. MODIFY AN ACCOUNT";
		cout<<"\t\t08. EXIT";
		cout<<"\n\n\t\t\t\t********************************************************************";
		
		
	cout<<"\n\n \t\t Enter your desired number according to the give info above : ";
	cin>>num;
	
		
	
	switch(num){
		case 1:{
			// ******************** Create Account ***************
			     cout<<"\n\n\t\t\t\t *********** CREAT ACCOUNT ************ ";
					for(i=accountNumber; i<=accountNumber; i++){
						cout<<"\n\n\t\t Your account Number is : "<<accountNumber<<endl;
					cout<<"\n\t\t Enter your First name : ";
					cin>>fname[i];
		            cout<<"\n \t\t Enter your Last name : ";
					cin>>lname[i];
					
					cout<<"\n \t\t Set your code (code must be greater than 4 numbers): ";
					cin>>code[i];
					if(code[i]<9999){
						cout<<"\n\t\t account number must be greater than 4";
						cout<<"\n\t\t Please enter number which must be greater than 4 : ";
						cin>>code[i];
						if(code[i]<9999){
							exit(0);
						}
					}
					cout<<"\n\t\t Enter your religion : ";
						cin>>religion[i];
					cout<<"\n\t\t Enter your birth month in Alphabetic : ";
					 cin>>birth[i];
					cout<<"\n\t\t Enter your birth day(In Number) : ";
					 cin>>day[i];
					cout<<"\n\t\t Enter your birth year : ";
					 cin>>year[i];
					 balance[i] =0;
					 if (year[i]>2001)
					 {
					  cout<<"\n\t\t You are under 18";
					  cout<<"\n\t\t Enter your b-form no : ";
					  cin>>bform[i];
					 }
					 else if(year[i]<=2001)
					 {
					  cout<<"\n\t\t Enter your CNIC no : ";
					  cin>>cnic[i];
					 }
		              cout<<"\n\t\t Enter Type of the account current/saving(c/s) : ";
					  cin>>type[i];
					  
						
					}
					cout<<"\n \n \t\t\t  Your Account has been created successfully"<<endl;
					
					stringstream ss;
					ss<<accountNumber;
					
					string a = ss.str();
					
					
					string FileName = a + ".txt";
		             
		           // file handling 
			        ofstream createAccount;
					createAccount.open(FileName.c_str());
					createAccount<<fname[accountNumber]<<"\t";
					createAccount<<lname[accountNumber]<<"\t";
					createAccount<<code[accountNumber]<<"\t";
					createAccount<<type[accountNumber]<<"\t";
					createAccount<<religion[accountNumber]<<"\t";
					createAccount<<day[accountNumber]<<"\t";
					createAccount<<birth[accountNumber]<<"\t";
				    createAccount<<cnic[accountNumber]<<"\t";
				    createAccount<<year[accountNumber]<<"\t";
					createAccount<<balance[accountNumber]<<"\t";
					
					
					createAccount.close();		
						
					ofstream AccountList;
					AccountList.open("accountList.txt",  ios::in|ios::out|ios::app);
				    AccountList<<"\t"<<accountNumber<<"\t";
					AccountList<<fname[accountNumber]<<"\t\t";
					AccountList<<type[accountNumber]<<"\t\t"<<endl;
				
					createAccount.close();		
					
					
					ofstream accountNumbers;
					accountNumbers.open("accountNumber.txt");
					accountNumbers<<accountNumber<<endl;
		            accountNumbers.close();
		
				   
					a+=1;		
				    accountNumber+=1;	
				
			break;
		}
			case 2:{
				// ******************** Deposit Amount ***************
				cout<<"\n\n\t\t\t\t *********** DEPOSIT AMOUNT ************ ";
					    int acno;
						string account;
						string a;
						string showData;
						int showInt;
						char showChar;
						int  showIntData;
						int showIntyData;
					    int showbData;
						long long int showLongData;
						
						
						
						cout<<"\n\n\t\t Enter Your Account Number : ";
					    cin>>acno;
						cout<<"\n\n\t\t Enter Your password : ";
					    cin>>account;
					    
					    stringstream ss;
					   ss<<acno;
					   string b = ss.str();
					   
					    string showFileName = b + ".txt";
						
					    	ifstream datafile;  
					    	ifstream datashow;  
							datafile.open(showFileName.c_str());  
						int jj = 0;
						int jshow = 0;
						while(!datafile.eof())	{
							jj++; 
							datafile>>a; 
							if ( jj == 3 ) {
								if ( a == account) {
		//							cout<<"pass is matched!";
									datashow.open(showFileName.c_str());
									while(!datashow.eof())	{
									 jshow++;
										
										
										if ( jshow == 1 ) {
										    datashow>>showData;
										    fname[acno] = showData;
											cout<<"\n\t\t\t\t Welcome : "<<fname[acno];	
										}else if(jshow ==2 ){
											datashow>>showData;
											lname[acno] = showData;
										   cout<<" "<<lname[acno]<<endl;
										}
										else if(jshow == 3){
										    datashow>>showInt;
											code[acno] =  showInt;
										} 
										 else if ( jshow == 4 ) {
										 	 datashow>>showChar;
										     type[acno]  =  showChar;
										
										}  else if ( jshow == 5 ) {
											 datashow>>showData;
											religion[acno] = showData;
										
										}  else if ( jshow == 6 ) {
											datashow>>showIntData;
											 day[acno] = showIntData;
										}  else if ( jshow == 7 ) {
											 datashow>>showData;
											 birth[acno]= showData;
										}
										else if ( jshow == 9 ) {
											 datashow>>showIntyData;
											year[acno] = showIntyData;
									      
										}
										else if(jshow == 8){
											 datashow>>showLongData;
											cnic[acno] = showLongData;
											
										} 
										
									else if(jshow == 10){
		                                
		                                datashow>>showbData;
		                                balance[acno] = showbData;
		                                int amount=showbData;
		 								cout<<"\n\t\t\t\t Balance : "<<balance[acno]<<endl;
									    cout<<"\n\t\t\t\t Enter the amount : ";
									    
									    cin>>balance[acno];
									    balance[acno]+=amount;
										 
									    cout<<"\n\t\t\t\t Your Current amont is : "<<balance[acno]<<endl;
									    ofstream dataWrite; 
									    dataWrite.open(showFileName.c_str());
									    dataWrite<<fname[acno]<<"\t";
									    dataWrite<<lname[acno]<<"\t";
										dataWrite<<code[acno]<<"\t";
										dataWrite<<type[acno]<<"\t";
										dataWrite<<religion[acno]<<"\t";
										dataWrite<<day[acno]<<"\t";
										dataWrite<<birth[acno]<<"\t";
									    dataWrite<<cnic[acno]<<"\t";
										dataWrite<<year[acno]<<"\t";
										dataWrite<<balance[acno]<<"\t";
										dataWrite.close();
										break;
									}
									    							
									}
									
						}		
					else {
									
									cout<<"pass not matched!";
								   break;
								}
							}
		}
		
							
			
				

		break;		
		}
		
	
	    	case 3:{
	    		// ******************** WithDRAW AMOUNT ***************
	    		cout<<"\n\n\t\t\t\t *********** WITHDRAW AMOUNT ************ ";
				    	int acno;
						string account;
						string a;
						string showData;
						int showInt;
						char showChar;
						int  showIntData;
						int showIntyData;
					    int showbData;
						long long int showLongData;
						
						
						
						cout<<"\n\n\t\t Enter Your Account Number : ";
					    cin>>acno;
						cout<<"\n\n\t\t Enter Your password : ";
					    cin>>account;
					    
					    stringstream ss;
					   ss<<acno;
					   string b = ss.str();
					   
					    string showFileName = b + ".txt";
						
					    	ifstream datafile;  
					    	ifstream datashow;  
							datafile.open(showFileName.c_str());  
						int jj = 0;
						int jshow = 0;
						while(!datafile.eof())	{
							jj++; 
							datafile>>a; 
							if ( jj == 3 ) {
								if ( a == account) {
		//							cout<<"pass is matched!";
									datashow.open(showFileName.c_str());
									while(!datashow.eof())	{
										jshow++;
										
										
										if ( jshow == 1 ) {
										    datashow>>showData;
										    fname[acno] = showData;
											cout<<"\n\t\t\t\t Welcome : "<<fname[acno];	
										}else if(jshow ==2 ){
											datashow>>showData;
											lname[acno] = showData;
										   cout<<" "<<lname[acno]<<endl;
										}
										else if(jshow == 3){
										    datashow>>showInt;
											code[acno] =  showInt;
										} 
										 else if ( jshow == 4 ) {
										 	 datashow>>showChar;
										     type[acno]  =  showChar;
										
										}  else if ( jshow == 5 ) {
											 datashow>>showData;
											religion[acno] = showData;
										
										}  else if ( jshow == 6 ) {
											datashow>>showIntData;
											 day[acno] = showIntData;
										}  else if ( jshow == 7 ) {
											 datashow>>showData;
											 birth[acno]= showData;
										}
										else if ( jshow == 9 ) {
											 datashow>>showIntyData;
											year[acno] = showIntyData;
									      
										}
										else if(jshow == 8){
											 datashow>>showLongData;
											cnic[acno] = showLongData;
											
										} 
										
									else if(jshow == 10){
		                                
		                                datashow>>showbData;
		                                balance[acno] = showbData;
		                                int amount=showbData;
		 								cout<<"\n\t\t\t\t Your Current Balance is: "<<amount<<endl;
									    cout<<"\n\t\t\t\t Enter the amount (you can with draw more than 50,000 at a day): ";
									    
									    cin>>balance[acno];
									    if(balance[acno]>50000){
									    	cout<<"\n\t\t\t\t sorry you can''t withdraw : ";
									    	cout<<"\n\t\t\t\t Enter correct amount : ";
											cin>>balance[acno];
											
										}
										else if(balance[acno]>showbData){
											cout<<"\t\t\t\t Sorry you can't withdraw : ";
											cout<<"\n\t\t\t\t Enter correct amount : ";
											cin>>balance[acno];
											
										}
									    int totalAmount = amount - balance[acno];
										 cout<<"\n\t\t\t\t You have successfully withdraw your amount"<<endl;
									    cout<<"\n\t\t\t\t Your Current amont is : "<<totalAmount<<endl;
									    balance[acno] = totalAmount;
									    ofstream dataWrite; 
									    dataWrite.open(showFileName.c_str());
									    dataWrite<<fname[acno]<<"\t";
									    dataWrite<<lname[acno]<<"\t";
										dataWrite<<code[acno]<<"\t";
										dataWrite<<type[acno]<<"\t";
										dataWrite<<religion[acno]<<"\t";
										dataWrite<<day[acno]<<"\t";
										dataWrite<<birth[acno]<<"\t";
									    dataWrite<<cnic[acno]<<"\t";
										dataWrite<<year[acno]<<"\t";
										dataWrite<<balance[acno]<<"\t";
										dataWrite.close();
										break;
									}
									    							
									}
									
						}		
					
		
								else {
									
									cout<<"pass not matched!";
								   break;
								}
							}
		}
				    
				    
		    break;
                
		}
		case 4:{
			   // ******************** Balance Enquiry ***************
			   cout<<"\n\n\t\t\t\t *********** BALANCE ENQUIRY ************ ";
			    int acno;
				string account;
				string a;
				string showData;
				
				cout<<"\n\n\t\t Enter Your Account Number : ";
			    cin>>acno;
				cout<<"\n\n\t\t Enter Your password : ";
			    cin>>account;
			    
			    stringstream ss;
			   ss<<acno;
			   string b = ss.str();
			   
			    string showFileName = b + ".txt";
				
			    	ifstream datafile;
			    	ifstream datashow;
					datafile.open(showFileName.c_str());
				int jj = 0;
				int jshow = 0;
				while(!datafile.eof())	{
					jj++;
					datafile>>a;
					if ( jj == 3 ) {
						if ( a == account) {
//							cout<<"pass is matched!";
							datashow.open(showFileName.c_str());
							while(!datashow.eof())	{
								jshow++;
								datashow>>showData;
								if ( jshow == 1) {
									cout<<"\n\n\t\t First Name: "<<showData;
								}else if( jshow == 2 ){
									cout<<"\n\n\t\t Last Name: "<<showData;
								} 
								else if ( jshow == 4 ) {
								    cout<<"\n\n\t\t Account Type: "<<showData;
								}  else if ( jshow == 5 ) {
									cout<<"\n\n\t\t Religion: "<<showData;
								}  else if ( jshow == 6 ) {
									cout<<"\n\n\t\t Birthday Day: "<<showData;
								}  else if ( jshow == 7 ) {
									cout<<"\n\n\t\t Birthday Month: "<<showData;
								}else if(jshow == 8){
									cout<<"\n\n\t\t CNIC : "<<showData;
									
								} else if ( jshow == 9 ) {
									cout<<"\n\n\t\t Year: "<<showData<<endl;
							      
								}
                              else if ( jshow == 10 ) {
									cout<<"\n\n\t\t Balance: "<<showData<<endl;
							      
								}
							}
						}
						else {
							
							cout<<"pass not matched!";
						   break;
						}
					}
					

				}

	
		
			break;
		}
		case 5:{
			
			// ********************  Account Holder List ***************
			cout<<"\n\n\t\t\t\t *********** ACCOUNT HOLDER LIST ************ ";
					cout<<"\n\n\t\tAccount Holder List\n";
					cout<<"\t*****************************\n";
					cout<<"\tA/c No	   Name 	Type"<<endl;
					cout<<"\t*****************************\n"; 
					ifstream input("accountList.txt");      
					string a;
					int i=1;
						while (!input.eof())
					{
						getline(input,a);
						cout<<a;
						cout<<endl;
						i++;
					}
							
			break;
		}
	   case 6:{
	   	    // ******************** Close an Account ***************
	   	    cout<<"\n\n\t\t\t\t *********** CLOSE AN ACCOUNT ************ ";
	   	        int acno;
				string account;
				string a;
				string showData;
				
				cout<<"\n\t\t Enter Your Account Number : ";
			    cin>>acno;
				cout<<"\n\t\t Enter Your Password : ";
			    cin>>account;
			    
			    stringstream ss;
			   ss<<acno;
			   string b = ss.str();
			   
			    string showFileName = b + ".txt";
				
			    	ifstream datafile;
			    	ifstream datashow;
					datafile.open(showFileName.c_str());
				int jj = 0;
				int jshow = 0;
				while(!datafile.eof())	{
					jj++;
					datafile>>a;
					if ( jj == 3 ) {
						if ( a == account) {
							
							datafile.close();
                          remove(showFileName.c_str());
						   cout<<"\n\t\t\tAccount Deleted"<<endl;				
						}
						else {
							
							cout<<"\n\t\t Incorrect Code!";
						   break;
						}
					}
					

				}

	   	
		break;
	   } 
	   case 7:{
	   	    
	   	// ******************** MODIFY Account ***************
	   	cout<<"\n\n\t\t\t\t *********** MODIFY AN ACCOUNT ************ ";
			   	    cout<<"\n\t\t Enter account Number : ";
			   	    cin>>acco; 
			   		cout<<"\n \t\t Enter your First name : ";
					cin>>fname[acco];
		            cout<<"\n \t\t Enter your Last name : ";
					cin>>lname[acco];
					
					cout<<"\n\t\t Set your code : ";
					cin>>code[acco];
					if(code[acco]<9999){
						cout<<"\n\t\t account number must be greater than 4";
					}
					cout<<"\n\t\t Enter your religion : ";
						cin>>religion[acco];
					cout<<"\n\t\t Enter your birth month in Alphabetic : ";
					 cin>>birth[acco];
					cout<<"\n\t\t Enter your birth day : ";
					 cin>>day[acco];
					cout<<"\n\t\t Enter your birth year : ";
					 cin>>year[acco];
					 balance[i] =0;
					 if (year[acco]>2001)
					 {
					  cout<<"\n\t\t You are under 18";
					  cout<<"\n\t\t Enter your b-form no : ";
					  cin>>bform[acco];
					 }
					 else if(year[acco]<=2001)
					 {
					  cout<<"\n\t\t Enter your CNIC no : ";
					  cin>>cnic[acco];
					 }
		              cout<<"\n\t\t Enter Type of the account current/saving(c/s) : ";
					  cin>>type[acco];
					  if(type[acco]=='s'){
					  	amount[acco] = -500;
					  	
					  }
					  else{
					  	amount[acco] = -1000;
					  }
			
						stringstream ss;
					ss<<acco;
					
					string a = ss.str();
					
					
					string FileName = a + ".txt";
		             
		//             ios::in|ios::out|ios::app
			        ofstream createAccount;
					createAccount.open(FileName.c_str());
					createAccount<<fname[acco]<<"\t";
					createAccount<<lname[acco]<<"\t";
					createAccount<<code[acco]<<"\t";
					createAccount<<type[acco]<<"\t";
					createAccount<<religion[acco]<<"\t";
					createAccount<<day[acco]<<"\t";
					createAccount<<birth[acco]<<"\t";
				    createAccount<<cnic[acco]<<"\t";
				    createAccount<<year[acco]<<"\t";
					createAccount<<balance[acco]<<"\t"<<endl;
					createAccount.close();		
						
					ofstream AccountList;
					AccountList.open("accountList.txt",  ios::in|ios::out|ios::app);
				    AccountList<<acco<<"\t";
					AccountList<<fname[acco]<<"\t\t";
					AccountList<<type[acco]<<"\t\t"<<endl;
				    
				
					createAccount.close();	
					break;	
			}
			
			
		case 8 :{
			// ******************** CLOSE AN ACCOUNT ***************
	     	exit(0);
		    break;
		}
		
	
}
}while(num != 8);




//***************************************************************
//    			END OF PROJECT
//***************************************************************	
}



	

















