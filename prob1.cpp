#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	char ticket_choice;
	int hm_tickets = 0;
	double amount;
	
	cout << "===========================" << endl;
	cout << "  Football Stadium Ticket!" << endl;
	cout << "===========================" << endl;
	cout << "  Ticket                Prices" << endl;
	cout << "[1]Box 			- ?250 " << endl;
	cout << "[2]Sideline 		- ?100 " << endl;
	cout << "[3]Premium 		- ?50 " << endl;
	cout << "[4]General Admission    - ?25 " << endl;
	cout << "Choice: ";
	cin >> ticket_choice;
	
		while(ticket_choice != '1' && ticket_choice != '2' && ticket_choice != '3' && ticket_choice != '4')
		{
			cout << "Invalid Input, Please enter a number only 1-4" << endl;
			cout << "Choice: ";
			cin >> ticket_choice;
		}	
		
	cout << "How many tickets: ";
	cin >> hm_tickets;
	
		if(ticket_choice == '1')
		{
			int t_box, hm_box;
			
			cout << hm_tickets << " Box Tickets" << endl;
			cout << fixed << showpoint << setprecision(2);
			amount = hm_tickets * 250;
			cout << "Cost: " << amount << endl;
			ifstream check_box("tickets.txt");
				while(check_box >> t_box >> hm_box)
				{
					if(t_box == 250)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << 250 << " " << hm_box + hm_tickets << endl;
						update_box.close();
					}
					if(t_box != 250)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << t_box << " " << hm_box << endl;
						update_box.close();
					}
				}
			check_box.close();
		}
		if(ticket_choice == '2')
		{
			int t_box, hm_box;
			
			cout << hm_tickets << " Sideline Tickets" << endl;
			cout << fixed << showpoint << setprecision(2);
			amount = hm_tickets * 100;
			cout << "Cost: " << amount << endl;
			ifstream check_box("tickets.txt");
				while(check_box >> t_box >> hm_box)
				{
					if(t_box == 100)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << 100 << " " << hm_box + hm_tickets << endl;
						update_box.close();
					}
					if(t_box != 100)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << t_box << " " << hm_box << endl;
						update_box.close();
					}
				}
			check_box.close();
		}
		if(ticket_choice == '3')
		{
			int t_box, hm_box;
			
			cout << hm_tickets << " Premium Tickets" << endl;
			cout << fixed << showpoint << setprecision(2);
			amount = hm_tickets * 50;
			cout << "Cost: " << amount << endl;
			ifstream check_box("tickets.txt");
				while(check_box >> t_box >> hm_box)
				{
					if(t_box == 50)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << 50 << " " << hm_box + hm_tickets << endl;
						update_box.close();
					}
					if(t_box != 50)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << t_box << " " << hm_box << endl;
						update_box.close();
					}
				}
			check_box.close();
		}
		if(ticket_choice == '4')
		{
			int t_box, hm_box;
			
			cout << hm_tickets << " General Admission Tickets" << endl;
			cout << fixed << showpoint << setprecision(2);
			amount = hm_tickets * 25;
			cout << "Cost: " << amount << endl;
			ifstream check_box("tickets.txt");
				while(check_box >> t_box >> hm_box)
				{
					if(t_box == 25)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << 25 << " " << hm_box + hm_tickets << endl;
						update_box.close();
					}
					if(t_box != 25)
					{
						ofstream update_box("temp.txt", ios::out | ios::app);
							update_box << t_box << " " << hm_box << endl;
						update_box.close();
					}
				}
			check_box.close();
		}
		remove("tickets.txt");
		rename("temp.txt", "tickets.txt");
	system("pause");
	return 0;
}
