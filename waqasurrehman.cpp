#include<iostream>
#include<string>
using namespace std;
struct book {
	string name;
	string author;
	string isbn;
	long int date;
	int quantity;
}l[500];
struct student {
	string name;
	string regno;
	string isbn;
	long int date;
}a[500];
string getDepartment(string& regno)
{
	if (regno.length() == 9 || regno.length() == 10)
	{
		string deptCode = regno.substr(0, 3);
		if (deptCode == "BCY" || deptCode == "bcy")
			return "Bachelor in Cyber Security";
		if (deptCode == "BAI" || deptCode == "bai")
			return "Bachelor in Artificial Intelligence";
		if (deptCode == "BRIS" || deptCode == "bris")
			return "Bachelor in Robotics And Intelligence system";
		if (deptCode == "BCS" || deptCode == "bcs")
			return "Bachelor in Computer Science";
	}
	if (regno.length() == 9 || regno.length() == 10)
	{
		string deptCode = regno.substr(0, 4);
		if (deptCode == "BCY" || deptCode == "bcy")
			return "Bachelor in Cyber Security";
		if (deptCode == "BAI" || deptCode == "bai")
			return "Bachelor in Artificial Intelligence";
		if (deptCode == "BRIS" || deptCode == "bris")
			return "Bachelor in Robotics And Intelligence system";
		if (deptCode == "BCS" || deptCode == "bcs")
			return "Bachelor in Computer Science";
	}
	return "Invalid";
}
long int date(long int& r)
{
	bool t = true;
	while (t)
	{
		long int z, y, x;
		cout << "enter today date :";
		cin >> x;
		cout << "enter now Month :";
		cin >> y;
		cout << "enter now year :";
		cin >> z;
		z = z - 1;
		z = z * 365;
		switch (y)
		{
		 case 1:
			if (x > 31 || x < 0)
			{
				cout << "you enter wrong day " << endl;
				break;
			}
			r = z + x;

			t = false;
			break;
		 case 2:
			if (x > 28 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 31 + x;

			t = false;
			break;
		 case 3:
			if (x > 31 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 59 + x;

			t = false;
			break;
		 case 4:
			if (x > 30 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 90 + x;
			t = false;
			break;
		 case 5:
			if (x > 31 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 120 + x;
			t = false;
			break;
		 case 6:
			if (x > 30 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 151 + x;
			t = false;
			break;
		 case 7:
			if (x > 31 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 181 + x;
			t = false;
			break;
		 case 8:
			if (x > 31 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 212 + x;
			t = false;
			break;
		 case 9:
			if (x > 30 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 243 + x;
			t = false;
			break;
		 case 10:
			if (x > 31 || x < 0)

			{
				cout << "you enter wrong day " << endl;
				break;

			}
			r = z + 273 + x;
			t = false;
			break;
		 case 11:
			if (x > 30 || x < 0)
			{
				cout << "you enter wrong day " << endl;
				break;
			}
			r = z + 304 + x;
			t = false;
			break;
		 case 12:
			if (x > 31 || x < 0)
			{
				cout << "you enter wrong day " << endl;
				break;
			}
			r = z + 334 + x;
			t = false;
			break;
		 default:
			cout << "invalid input";
			break;
        }
    }
 return r;
}
void addBook(int& count)
{
	long int r;
	int b;
	cout << "enter the number of books do you want to add :";
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cout << "Enter the name of book :";
		cin >> l[count].name;
		cout << "Enter the book Author Name :";
		cin >> l[count].author;
		cout << "Enter the ISBN of the book :";
		cin >> l[count].isbn;
		cout << "Enter the quantity of this book :";
		cin >> l[count].quantity;
		date(r);
		l[count].date = r;
		cout << "book added successfullly!" << endl;
		count++;
	}
}
void searchbyauthor(int& count, int& cont)
{
	long int r,s;
	int d = cont;
	int t;
	string name, choice;
	cout << "enter the author name :";
	cin >> name;
	for (int i = 0; i <= count; i++)
	{
		if (name == l[i].author)
		{
			cout << "book name is :" << l[i].name << endl;
			cout << "book author is :" << l[i].author << endl;
			cout << "book isbn is :" << l[i].isbn << endl;
			cout << "book quantity is :" << l[i].quantity << endl;
			t = l[i].quantity;
			cout << "Do you want to issue it (yes/no) :";
			cin >> choice;
			if (t > 0)
			{
				do
				{
					r = date(r);
					s = r - l[i].date;
					if (s < 0)
					{
						cout << "entered wrong date according to availability of book " << endl;
					}
				} while (s < 0);

				if (choice == "yes" || choice == "YES")
				{
					cout << "Enter name of student :";
					cin >> a[d].name;
					cout << "Enter registration number of student :";
					cin >> a[d].regno;
					string department = getDepartment(a[d].regno);
					if (department == "Invalid")
					{
						cout << "Invalid registration number.\n";
						return;
					}
					cout << "Department: " << department << endl;
					if (department != "Invalid")
					{
						cout << "Student name is :" << a[d].name << endl;
						cout << "student reg no is :" << a[d].regno << endl;
						cout << "Department is : " << department << endl;
						cout << "book NAME is :" << l[i].name << endl;
						cout << "book AUTHOR is :" << l[i].author << endl;
						cout << "book ISBN is :" << l[i].isbn << endl;
						cout << "return this book in 15 day if you late you will pay 50 rupees as per day " << endl;
						cout << "book issued to this regitration number successfully" << endl;;
							
						a[d].date = r;
						a[d].isbn = l[i].isbn;
						int a = l[i].quantity;
						a--;
						l[i].quantity = a;
						d++;
						cont = d;
						return;
					}
				}
				return;
				
			}
			else
				cout << "this book is not available now because it has been issued " << endl;
			return;
			
		}
	
			
	}
	cout << "the book is not available in library by this author";
}
void searchbytitle(int& count, int& cont)
{
	long int r,s;
	int b = cont;
	int t;
	string name, choice;
	cout << "enter the title of book :";
	cin >> name;
	for (int i = 0; i <= count; i++)
	{
		if (name == l[i].name)
		{
			cout << "book name is :" << l[i].name << endl;
			cout << "book author is :" << l[i].author << endl;
			cout << "book isbn is :" << l[i].isbn << endl;
			cout << "book quantity is :" << l[i].quantity << endl;
			t = l[i].quantity;
			cout << "Do you want to issue it (yes/no) :";
			cin >> choice;

			if (t > 0)
			{
				do
				{
					r = date(r);
					s = r - l[i].date;
					if (s < 0)
					{
						cout << "entered wrong date according to availability of book " << endl;
					}
				} while (s < 0);

				if (choice == "yes" || choice == "YES")
				{
					cout << "Enter name of student :";
					cin >> a[b].name;
					cout << "Enter registration number of student :";
					cin >> a[b].regno;
					string department = getDepartment(a[cont].regno);
					if (department == "Invalid")
					{
						cout << "Invalid registration number.\n";
						return;
					}
					cout << "Department: " << department << endl;
					if (department != "Invalid")
					{
						cout << "student name is :" << a[b].name << endl;
						cout << "student reg no is :" << a[b].regno << endl;
						cout << "Department is : " << department << endl;
						cout << "book name is :" << l[i].name << endl;
						cout << "book author is :" << l[i].author << endl;
						cout << "book isbn is :" << l[i].isbn << endl;
						cout << "return this book in 15 day if you late you will pay 50 rupees as per day " << endl;
							

							
						a[b].date = r;
						a[b].isbn = l[i].isbn;
						int c = l[i].quantity;
						c--;
						l[i].quantity = c;
						b++;
						cont = b;
						return;
					}
				}
				return;
			}
			else
				cout << "this book is not available now because it has been issued " << endl;
			return;
		}
		
			
	}
	cout << "the book is not available in library by this title";
	return;
}
void returnbook(int& cont, int& count)
{
	long int r,s;
	string regNo;
	cout << "Enter your registration number : ";
	cin >> regNo;
	
	for (int i = 0; i <= cont; i++)
	{
		if (regNo == a[i].regno)
		{
			string isbn = a[i].isbn;
			for (int j = 0; j <= count; j++)
			{
				if (l[j].isbn == isbn)
				{
					string ch;
					cout << " this book is issue on this registration number ";
					cout << "book name is :" << l[j].name << endl;
					cout << "book author is :" << l[j].author << endl;
					cout << "book isbn is :" << l[j].isbn << endl;
					do
					{
						r = date(r);
						s = r;
						if (r<0)
						{
							cout << "you enter wrong day please try again" << endl;
						}
					} while (r < a[j].date);
					cout << "do you want to return book (yes/no) :";
					cin >> ch;

					if (ch == "yes" || ch == "YES")
					{
						a[i].name = '\0';
						a[i].regno = '\0';
						a[i].isbn = '\0';
						
						
						
						r = r - a[i].date;
						if (r > 15)
						{
							r = r - 15;
							int fine;
							fine = r * 50;
							cout << "Your late return fine is " << fine << " rupees";
							int z = l[j].quantity;
							l[j].date = s;
							z++;
							l[j].quantity = z;
							cout << "book return successfull ";
							return;
						}
						else
						{
							int z = l[j].quantity;
							l[j].date = s;
							z++;
							l[j].quantity = z;
							cout << "book return successfull ";
							return;
						}
					}
				}
			}
		}
	}
	cout << "no book issue at this registraation number ";
	return;
}
void TOTALBOOKS(int& count)
{
	int q = 1, t = 0;
	for (int i = 0; i < count; i++)
	{
		cout << "detaill of book number " << q << " is" << endl;
		cout << "book name is :" << l[i].name << endl;
		cout << "book author is :" << l[i].author << endl;
		cout << "book isbn is :" << l[i].isbn << endl;
		cout << "book quantity is :" << l[i].quantity << endl;
		t += l[i].quantity;
		q++;
	}
	q--;
	cout << "total number of titles are " << q << " in library stock." << endl;
	cout << "total number of books are " << t << " in library stock." << endl;
}
void studentdata(int& cont, int& count)
{
	string reg, isbn;
	cout << "Enter your registration number : ";
	cin >> reg;
	for (int i = 0; i < cont; i++)
	{
		if (reg == a[i].regno)
		{
			isbn = a[i].isbn;
			for (int j = 0; j < count; j++)
			{
				if (l[j].isbn == isbn)
				{
					string ch;
					cout << " this book is issue on this registration number " << endl;
					cout << "book name is :" << l[j].name << endl;
					cout << "book author is :" << l[j].author << endl;
					cout << "book isbn is :" << l[j].isbn << endl;
				}
			}
		}
	}
}
void bookreturningdays(int st, int books)
{
	string name, isbn, author;
	cout << "Enter name of book : ";
	cin >> name;
	cout << "Enter author name of book : ";
	cin >> author;
	long int c = 0, h, k, o;
	c = date(c);
	for (int i = 0; i < books; i++)
	{
		if (name == l[i].name && author == l[i].author)
		{
			isbn = l[i].isbn;
			for (int j = 0; j < st; j++)
			{
				if (a[j].isbn == isbn)
				{
					string ch;
					cout << " the book is issue on this registration number " << endl;
					cout << "the name is student :" << a[j].name << endl;
					cout << "the reg no of student is :" << a[j].regno << endl;
					cout << " the book detail is : " << endl;
					cout << "book name is :" << l[j].name << endl;
					cout << "book author is :" << l[j].author << endl;
					cout << "book isbn is :" << a[j].isbn << endl;
					h = a[j].date + 15;
					o = h - c;
					if (o >= 0 && o <= 15)
					{
						cout << "this book will available after " << o << " days." << endl;
					}
					else
					{
						k = c - h;
						cout << "this book has not been return even " << k << " days have passed since the return date:" << endl;
							
					}

				}
			}
		}
	}
}
int main()
{
	int count = 0;
	int cont = 0;
	int choice;
	do
	{
		cout << "\n..............................Library Database Management....................................\n";
			
			cout << "1. Add new books\n";
		cout << "2. Search book by author name\n";
		cout << "3. Search book by title \n";
		cout << "4. Return book \n";
		cout << "5. TOTAL BOOKS \n";
		cout << "6. Search deatil of student( how many books he had issued) \n";
		cout << "7. check how many days left for returning book\n";
		cout << "8. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "......................Addition of new books......................\n";
			addBook(count);
			break;
		case 2:
			cout << "......................search books by author name......................\n";
			searchbyauthor(count, cont);
			break;
		case 3:
			cout << "......................search books by title name......................\n";
			searchbytitle(count, cont);
			break;
		case 4:
			cout << "......................Return books......................\n";
			returnbook(cont, count);
			break;
		case 5:
			cout << "......................total books......................\n";
			TOTALBOOKS(count);
			break;
		case 6:
			cout << "......................check student issued books......................\n";
			studentdata(cont, count);
			break;
		case 7:
			cout << "......................check days left for return this book book ......................\n";
				
				bookreturningdays(cont, count);
			break;
		case 8:
			cout << "Exiting program. Goodbye!\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 8);
	return 0;
}
