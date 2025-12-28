//The admin user name and password for this trial program is:
//username: user
//password: @astu

#include <iostream>//input(cin)-output(cout) stream header file
#include<string>//header file to use string functions
#include<fstream>//header file to use file handling
#include<chrono>// provides a set of classes and functions for
				// measuring time durations and time points
#include<thread>//provides a set of classes and functions for creating and managing threads


using namespace std;

		struct Library {//The structure Library data type which contains book features
		string title ;//The title of the book
		string author;//The author of the book
		string isbn;//The ISBN of the book
		string id;//The Id of the book in the library
		int  page;//The number of the pages in the book


	};



//FUNCTION DECLARATION
void addbook(struct Library book);//A function to add book to the library
void deletebook(struct Library book);//A function to delete unnecessary book in the library
void display();//A function to display all the books in the library
void update(struct Library book);//A function to  update the book features
void search_book_by_title(struct Library book);//A function to search
												//the book using the book title
void resetpassword ();//A function used to reset administrator password,
					//accessible by only the admin
void write_to_file();//A funtion needed to write the admin password for the first time,
// but not important after once the password file is created;
//this is just for clarity, i.e., we can ommit this function
void search_book_by_id(struct Library book);//A function used to search a book by its id
void about_this_project();//A funtion used to display the information about this project

int main()
//FUNCTION CALL IN THE MAIN FUNCTION
{ int choice;
 struct Library book;//book is a variable of Library data type
 //MAIN MENU PAGE
    cout << "\t\t\t\t _______________________________________________________\n";
    cout << "\t\t\t\t|                     ************                      |\n";
    cout << "\t\t\t\t|_______________________________________________________|\n";
    cout << "\t\t\t\t|                                                       |\n";
    cout << "\t\t\t\t| <<  WELCOME TO ASTU LIBRARY MANAGEMENT SYSTEM >>      |\n";
    cout << "\t\t\t\t|                                                       |\n";
    cout << "\t\t\t\t|_______________________________________________________|\n";
    cout << "\t\t\t\t|                     ************                      |\n";
    cout << "\t\t\t\t|_______________________________________________________|\n";
    cout<<"\n\n\n\n\t\t\t\tPress any key to continue: ";//Any key on the keyboard is possible
    _getwch();// used to read a single wide character from the console without echoing it
    system ("cls");//to clear the screen and display new content
					//without cluttering the console window
    int input;
    //If the user enters: 1 -- librarian (admin access), 2 -- student access,
	// 3 -- about the project, 4 -- to quit the program
    cout<<"\t\tPRESS 1 FOR ADMINISTRATOR. \n\t\tPRESS 2 FOR STUDENT.\n"
        <<"\t\tPress 3 to know about the details of this program.\n"
		<<"\t\tPress 4 to quit.\n"
		<<"\n\n\t\tEnter your choice: ";
    cin>>input;
    system("cls");

//write_to_file(); This fuction omitted for it is to write a user's information:
//username and password, for the first time to create the user's file, not needed further

//LIBRARIAN ACCESS
if (input==1){
    string username, password,id,pass;
	cout<<"\t\t*** YOU ARE LOGGING IN AS LIBRARIAN (ADMIN) ***"
		<<"\n\t\tPlease enter your user name and password.";
		this_thread::sleep_for(chrono::seconds(2));//time delay before the screen is cleared

	int count;
	book.id=count;
	system("cls");
	cout<<"Please enter user name: ";
	cin>>username;
	cout<<"Please enter your password: ";
	cin>>password;

	ifstream input ("administrator_book.txt");//The text file containing
												//the admin username and password.
	while (input>>id>>pass){
		if (id==username&&pass==password){//checks if the user's (admin) username and password
		//match with the previously registered file
			count=1;
			system ("cls");
		}
	}
	input.close();
	if (count==1){//If the password and username match well the admin has the following access
		int adminchoice;
    cout<<"\t\tPlease enter what you want to do in this library.\n"
        <<"\t\tPress 1 to add book.\n\t\tPress 2 to display books in the library.\n"
        <<"\t\tPress 3 to delete book from the library. "
		<<"\n\t\tPress 4 to update a book details.\n"
        <<"\t\tPress 5 to search a book by its title (or press 6 to search by book id)."
        <<"\n\t\tPress 7 to reset admin password.\n"
        <<"\t\tPress 8 to back to the main menu."
        <<"\n\t\tPress 0 to quit the program."
        <<"\n\n\t\tPlease enter your choice: ";
        this_thread::sleep_for(chrono::seconds(4));//the screen will delay for 4
		//seconds before it accept the user input
		cin>>adminchoice;
	// This switch statement gives the admin to enter his choice,
	//and provides the needed function
		switch (adminchoice){
    case 1:
        system ("cls");
        addbook(book);//addbook() function call
        main();
        break;
    case 2://Option 2: to display all the book in the library
        system ("cls");
        display();
        main();//Goes back to the main menu funtion after the display function is completed
        break;//If the option is matched, the program will immidiately
		//get out of the switch statement
    case 3://Option 3: to delete unneccessary book
        system ("cls");
        deletebook(book);
        main();
        break;
    case 4://The fourth option: to update the features of a book (accessed by the book's id)
        system ("cls");
        update(book);
        main();
        break;
    case 5://Fifth option: to seach a book by its title
        system ("cls");
        search_book_by_title(book);//
        main();
        break;
    case 6://to seach a book by its id number
        system ("cls");
        search_book_by_id(book);
        main();
        break;
    case 7://to reset the admin password
        system ("cls");
        resetpassword();
         this_thread::sleep_for(chrono::seconds(4));
         system ("cls");
        main();
        break;
    case 8:
        system ("cls");
        main();
        break;
    case 0://to exit from the program
        system ("cls");
        exit(0);

        }
	}
	else//If the user's username and password didn't match
	{
		cout<<"\nLOGIN ERROR. PLEASE CHECK YOUR USERNAME AND PASSWORD, AND TRY AGAIN.\n";
		this_thread::sleep_for(chrono::seconds(2));
		system ("cls");
		main();


	}



	}
	//STUDENT ACCESS: students have the access to display
	//the books in the library and to search a book either by its title or by id number
	//The funtion display(), searh_book_by_title() and  searh_book_by_id()
	//is the same with admin access
	else if (input==2){
        cout<<"\t\t*** YOU LOGGED IN AS A STUDENT ***"<<endl;
         cout<<"\t\tPlease enter what you want to do in this library.\n"
        <<"\t\tPress 1 to display books in the library.\n"
        <<"\t\tPress 2 to search a book by its title."
        <<"\n\t\t Press 3 to search by book id."
        <<"\n\t\tPress 4 to back to main menu."
        <<"\n\t\tPress 0 to quit the program.\n\n";
      this_thread::sleep_for(chrono::seconds(4));
        cout<<"\t\tPlease enter your choice: ";
    int onechoice;
        cin>>onechoice;

        switch (onechoice){
    case 1:
        display();
        main();
        break;

    case 2:
        system ("cls");
        search_book_by_title(book);
        main();
        break;
    case 3:
        system("cls");
        search_book_by_id(book);
        main();
        break;
    case 4:
        system("cls");
        main();
        break;
    case 0:
        system ("cls");
        exit(0);
        break;
    default:
        cout<<"\t\tYou entered invalid input. Please try again"<<endl;
        main();
        }



        }
    else if (input==3){//The third user's option is to see the detail of the project
        about_this_project();//a function to display the detail info about the project
        cout<<"\t\tPress any key to continue";
        _getwch();
        system("cls");
        main();
    }
    else if (input==4){
        exit(0);
    }

	else //If the user (either student or user) enters an invalid choice,
	//the user will be denied the access
        cout<<"\n\tYOU ENTERED AN INVALID CHOICE. TRY AGAIN,"
        <<" AND PLEASE CHOOSE ONE OF THE THREE ALTERNATIVES.\n";


    return 0;
}
//FUNCTION DEFINITION

void resetpassword()//function definition to reset the admin password
 {
	cout << endl << "--- RESET PASSWORD ---" << endl;
	//prompt the user to enter the old password.
	string password;
	cout << "Enter the old password: ";
	cin >> password;//input correct the old admin password
	cin.ignore ();

	//Read the password from the file
	bool passwordExist = false;
	ifstream data("administrator_book.txt");
	ofstream temp;
	temp.open("temp.dat", ios::app); //Temporary file

	//Check if the file where opened successfully
	if(!data || !temp)
    {
        cout << "Error opening files!" << endl;
        return;
    }
		//search for the old password in the file
	string strTemp;
    while(getline(data, strTemp))
    {
		size_t found = strTemp.find(password);//condition used to check if a substring is found
                                    //within a string
                                //size_t is used to search for the first occurrence of a substring entered by cin
		if (found != string::npos) {
			string pass,username;
		//prompt the user to enter a new user name and password
			cout << "\tThe old password is: " << strTemp << endl;

			cout << "\tNew user name: ";
			getline(cin, username);
			cout << "\tNew password: ";
			getline(cin, pass);
		//Update the password in the file
			strTemp = username+" "+pass;
			passwordExist = true;
		}
		temp << strTemp << endl;
	}
//close the file
	data.close();
	temp.close();
//Display a success message if the password was reset
	if(passwordExist) {
		// delete old password file file
		if( remove( "administrator_book.txt" ) != 0 )
			perror( "Error deleting file" );

		// Rename the temporary file to the old file
		if ( rename("temp.dat", "administrator_book.txt")) {
			perror("Error reset password. ");
			return;
		}

		cout << "Password reset successful." << endl;

	}
	//Display an error message if the old password was incorrect
	 else cout << "No old password match with the password: " << password <<"\tTry again! "<< endl;

}





void addbook(struct Library book){
		int count=0;
		//prompt the user to enter the important details
		cout<<"\t\t---- PROVIDE THE IMPORTANT DETAILS OF THE BOOK ----"
		    <<"\n\t\tUse underscore between two words."<<endl;
		cout<<"\tEnter the book title: ";
		cin>>book.title;
		cout<<"\tEnter the book author: ";
		cin>>book.author;
		cout<<"\tEnter the book isbn: ";
		cin>>book.isbn;
		cout<<"\tEnter the book pages: ";
		cin>>book.page;


		//count books in the library;
		//then, increase  the book's id number by 1 from the previous
		string line, bookinfo;
		ifstream countbooks("library_mgt_record.txt");
			while (getline(countbooks, line)){

				count ++;
			}
		countbooks.close();

	//open a file to write the details of the book
	ofstream addbooks("library_mgt_record.txt", ios::app);
	// create a string with the book information
	 bookinfo="Book ID No.: "+to_string(count)+ "\tTitle: "+book.title +  "\t Author: "+book.author+"\tISBN: "+book.isbn+"\tPages: "+to_string(book.page)+"\t";
	//write the book information with the book's information
	addbooks<<bookinfo<<endl;
	addbooks.close();
	//print a success message
	cout<<"\t\tTHE BOOK WITH ["<<bookinfo<<"] IS ADDED SUCCESSFULLY.\n";

	}

//a function to display the books in the library
void display() {
			//print a header to for the list of books
            cout << "\t\t\t--- LIST OF BOOKS IN THE LIBRARY ---" << endl;
		//open the file containing the list of books
            ifstream data("library_mgt_record.txt");
            //read each line of the file and print it to the console
            string row;
            while(getline(data, row))
            {
                cout << row << endl;
            }
            data.close();
        }




void deletebook(struct Library book) {
	//print a header text for the delete book section
                cout << endl << "\t\t--- Delete Book ---" << endl;
                //prompt the user to enter the book id
                cout << "Enter Book ID: ";
                cin >> book.id;
                cin.ignore ( );
			//open the file containing the list of books
                bool bookExist = false;
                ifstream data("library_mgt_record.txt");
                //Temporary file  to write the updated lists of books
                ofstream temp;
                temp.open("temp.dat", ios::app);
			//check if both the files are open
                if(!data || !temp)
                {
                    cout << "Error opening files!" << endl;
                    return;
                }
			// check each line of the file and check if the book exists
                string strTemp;
                bool delBook = false;
                while(getline(data, strTemp))
                {
                    size_t found = strTemp.find(book.id);
                    if (found != string::npos) {
                        cout << "Book: " << strTemp << endl;
                        bookExist = true;
                        delBook = true;
                    }
                    if(delBook) {
                        delBook = false;
                        continue;
                    }
                    temp << strTemp << endl;
                }
			//close both files
                data.close();
                temp.close();
			//if the book exists, delete it from the file
                if(bookExist) {

                    // delete old file
                    if( remove( "library_mgt_record.txt" ) != 0 )
                        perror( "Error deleting file" );

                    // Rename the temporary file to the old file
                    if ( rename("temp.dat", "library_mgt_record.txt")) {
                        perror("Error renaming");
                        return;
                }

				//print a success message
                    cout << "Book Deleted" << endl;
                }

                //if the entered id didn't match with the id registered in the file
                else cout << "No book found with ID " << book.id << endl;


            }


void update(struct Library book) {
                cout << endl << "\t\t--- UPDATE BOOK---" << endl;
                //prompiting the user to enter the book id number
                cout << "Enter Book ID: ";
                cin >> book.id;
                cin.ignore ();

                bool bookExist = false;
                ifstream data("library_mgt_record.txt");
                ofstream temp;
                temp.open("temp.dat", ios::app); //Temporary file

                if(!data || !temp)
                {
                    cout << "Error opening files!" << endl;
                    return;
                }

                string strTemp;
                while(getline(data, strTemp))
                {
                    size_t found = strTemp.find(book.id);
                    if (found != string::npos) {


                        cout << "Book: " << strTemp << endl;

                        cout << "New Book Title: ";
                        getline(cin, book.title);
                        cout << "New Book Author: ";
                        getline(cin, book.author);
                        cout<<"New book ISBN: ";
                        getline(cin,book.isbn);
                        cout<<"New book pages: ";
                        cin>>book.page;

                       strTemp="Book ID No.: "+book.id+ "\tTitle: "+book.title +  "\t Author: "+book.author+"\tISBN: "+book.isbn+"\tPages: "+to_string(book.page)+"\t";
                       bookExist=true;
                    }
                    temp << strTemp << endl;
                }

                data.close();
                temp.close();

                if(bookExist) {
                    // delete old file
                    if( remove( "library_mgt_record.txt" ) != 0 )
                        perror( "Error deleting file" );

                    // rename new file to old file
                    if ( rename("temp.dat", "library_mgt_record.txt")) {
                        perror("Error renaming");
                        return;
                    }

                    cout << "Book Details Updated" << endl;

                }
                else cout << "No book found with ID " << book.id << endl;
            }
//a function to search a book by its title
void search_book_by_title(struct Library book){
        cout<<"\t\t\t-----SEARCHING BOOK BY TITLE-----"<<endl;
        cout<<"\t\t\tENTER THE BOOK TITLE: "<<endl;
        cin>>book.title;
        cin.ignore();//used to ignore or discard characters in the input stream
        //to clear the input buffer of any remaining characters, such as newline characters,
		//that may interfere with subsequent input operations

		//open a file to read from
        ifstream data ("library_mgt_record.txt");
        //check if the file is opened
        ofstream temp;
        temp.open("temp.dat", ios::app); //Temporary file
        if (!data||!temp){
            cout<<"\t\t\tError opening file. "<<endl;
            return;
        }
        string strtemp;

        while (getline(data,strtemp)){
		//to find the id of the book in the books list file
            size_t found =strtemp.find(book.title);
            if (found!=string ::npos){
                cout<<"\t\t\tBOOK FOUND: \n\t"<<strtemp<<endl;

            }
        }
        if (false){

        }
            cout<<"NO BOOK FOUND WITH TITLE: "<<book.title<<endl;
        }

        //to write a password

        ////This function is used only once to administrator
		//file to store username and password
void write_to_file(){
string Username,Password;
	system ("cls");
	cout<<"Enter the user name: \n";
	cin>>Username;
	cout<<"Enter the password: \n";
	cin>>Password;

	ofstream file1("administrator_book.txt", ios::app);
	file1<<Username<<"  "<<Password<<endl;
	system("cls");
	cout<<"Password saved."<<endl;
	file1.close();}

//A function used to search a book by its id
	void search_book_by_id(struct Library book){//The same procedure with the above search by title function
        cout<<"\t\t\t-----SEARCHING BOOK BY ID-----"<<endl;
        cout<<"\t\t\tENTER THE BOOK ID: "<<endl;
        cin>>book.id;
        cin.ignore();

        ifstream data ("library_mgt_record.txt");
        ofstream tempo;//temporary file
        tempo.open("temp.dat", ios::app);
        if (!data||!tempo){
            cout<<"\t\t\tError opening file. "<<endl;
            return;
        }
        string strtemp;

        if (getline(data,strtemp)){

            size_t found =strtemp.find(book.id);
            if (found!=string ::npos){
                cout<<"\t\t\tBOOK FOUND: \t"<<strtemp<<endl;

            }
        }
        else
            cout<<"NO BOOK FOUND WITH THE ID: "<<book.id<<endl;
        }

//Fuction definition to explore the details of this program (project)

        void about_this_project(){
        	//print a header to the console
                 cout << "\t\t\t--- DETAILS OF THIS PROJECT ---" << endl;
		//open the file "PROJECT DOCUMENTATION" for reading
            ifstream data("PROJECT DOCUMENTATION.txt");
            string row;//declaring a string variable to hold each line of the file
            while(getline(data, row))//Read each line of the file and print it to the console
            {
                cout << row << endl;
            }

        }
//		*** END OF THE PROGRAM ***


