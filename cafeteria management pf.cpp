#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

struct items{
	int purchased;
	int quantity;
	int total;
	int sold;
	int cost;
	int costprice;
	int sellprice;
	double profit;
};

struct billdetail{
	char name[50];
	double amount;
	char date[50]; 
	char day[50];
};


float no,price[50],total[50],qty[50],tt;
char itm[50];
char onward;

items i1,i2,i3,i4,i5;
billdetail b1;
int choice;


void burgers(items i1);
void icecream(items i2);
void pizza(items i3);
void colddrink(items i4);
void sandwich(items i5);
void billing(float no,float price[50],float total[50],float qty[50],float tt,
char itm[30]);
void wfile();
void rfile();
void customerdetail();



int main()
{
    jump :
    jump1:
	jump2:
	jump3:
	jump4:	
	jump5:
	jump6:	
	jump7:
	jump8:
    	
    	
    system("cls");
   	cout<<"\t\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n";
	cout<<"\t\t\t\t*||_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-||*\n";
	cout<<"\t\t\t\t*||:========================================:||*\n";
	cout<<"\t\t\t\t*||:== CAFETERIA   MANAGEMENT    PROGRAM  ==:||*\n";
	cout<<"\t\t\t\t*||:========================================:||*\n";
	cout<<"\t\t\t\t*||-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_||*\n";
	cout<<"\t\t\t\t_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n";
	cout<<"\n\n\n\n\t\t\t\t\t\tMANAGING PANEL";
	cout<<"\n\n\t\t\t\t\t 1. Burgers detail";
	cout<<"\n\t\t\t\t\t 2. Icecream detail";
	cout<<"\n\t\t\t\t\t 3. Pizza detail";
	cout<<"\n\t\t\t\t\t 4. Cold drinks detail";
	cout<<"\n\t\t\t\t\t 5. Sandwich detail";
	cout<<"\n\t\t\t\t\t 6. Billing Software";
    cout<<"\n\t\t\t\t\t 7. Enter customer's bill record";
	cout<<"\n\t\t\t\t\t 8. Customer's Bill Details";	
	cout<<"\n\n\n\n\t\t\t\t\t* Enter your choice (in numbers): ";
	cin>>choice;
	system("cls");

		switch(choice)
	{
		case 1 :
			{
			system("cls");	
			burgers ( i1 );	
			if(getch())
			{
				system ("cls");
			goto jump;
	      	}
	}
		break;
        case 2 :
	    	{system("cls");
              icecream ( i2 ); 	    		
            if(getch()){
            	system ("cls");
            	goto jump1;
			}
			}
		break;
		
		case 3:
		{
			system ("cls");
          pizza ( i3 );
          if(getch()){
          	system("cls");
          	goto jump2;
		  }
		}
		break;


	    case 4:
		{
		  system("cls");
          colddrink( i4 );
		}
		if(getch())
		{
			system ("cls");
			goto jump3;
			
		}
		break;
		case 5:
		{ 
		system("cls");
		 sandwich ( i5 );		
					
         	}
         if(getch()){
         	system ("cls");
         	goto jump4;
		 }	
			
		break;
		case 6:
			{ system("cls");
				billing (no,price,total,qty,tt,itm);
				
			}
			if(getch()){
				system("cls");
				goto jump5;
			}
			break;
		case 7:
		{
		
		system ("cls");
					
	    while(onward !='n')
		{
			
		cout<<"Enter Customer name (without space): ";
		cin>>b1.name;
	
		cout<<"Enter Bill: ";
		cin>>b1.amount;
	
		cout<<"Enter Day: ";
		cin>>b1.day;
	
      	cout<<"Enter Date: ";
      	cin>>b1.date;
		  
		wfile();
		
	  	cout<<"Enter y to Add more Records or n to go back (y/n) : ";
		cin>>onward;
	   }
		system("cls");
		goto jump6;
		break;
    }
		case 8:
			{ system("cls");
				customerdetail ();
				rfile();
			}
            if(getch()){
				system("cls");
				goto jump7;
			}
			break;			
		default :
			{
			
				cout<<"please enter valid value ";
		        goto jump8;
		
		}
		break;
		}
	
}
void burgers(items i1)
{
	     cout<<"\n\n\t\t\t\t\t *************";
         cout<<"\n\n\t\t\t\t\t || BURGERS ||";
         cout<<"\n\n\t\t\t\t\t *************";
	    cout<<"\n\n\t\t\t * please enter the no of purchased burgers: ";
	            cin>>i1.purchased;
	    cout<<"\n\n\t\t\t * enter your cost per burger (in Rs): ";
		        cin>>i1.costprice;
		      		        
		cout<<"\n\n\t\t\t * enter the no of sold burgers: ";
				cin>>i1.sold;
		cout<<"\n\n\t\t\t * enter your selling price per burger (in Rs): ";
		        cin>>i1.sellprice;

				
				if(i1.purchased - i1.quantity >= i1.sold)
				{
					i1.quantity += i1.sold;
					i1.cost = i1.sold*i1.costprice;
					i1.total= i1.sold*i1.sellprice;
					i1.profit=i1.total - i1.cost;
					cout<<"\n\n\t\t\t"<<" * Your total cost: "<<i1.cost;
					cout<<"\n\n\t\t\t"<<" * Total selling Price : "<<i1.total;
					cout<<"\n\n\t\t\t* ("<<i1.sold<<" burgers sold  and you earned "<<i1.profit<<" Rs Profit )\n\t\t\t\t\t 'THANKYOU'";
				}
				else 
				cout<<"\n\n\t\t\t We have limited quantity";
			
}

void icecream(items i2){
		     cout<<"\n\n\t\t\t\t\t ****************";
             cout<<"\n\n\t\t\t\t\t || ICE CREAMS ||";
             cout<<"\n\n\t\t\t\t\t ****************";
	    cout<<"\n\n\t\t\t * please enter the no of purchased ice creams: ";
	            cin>>i2.purchased;
	    cout<<"\n\n\t\t\t * enter your cost per ice creams (in Rs): ";
		        cin>>i2.costprice;
		      		        
		cout<<"\n\n\t\t\t * enter the no of sold ice creams: ";
				cin>>i2.sold;
		cout<<"\n\n\t\t\t * enter your selling price per ice cream (in Rs): ";
		        cin>>i2.sellprice;

				
				if(i2.purchased - i2.quantity >= i2.sold)
				{
					i2.quantity += i2.sold;
					i2.cost = i2.sold*i2.costprice;
					i2.total= i2.sold*i2.sellprice;
					i2.profit=i2.total - i2.cost;
					cout<<"\n\n\t\t\t"<<" * Your total cost: "<<i2.cost;
					cout<<"\n\n\t\t\t"<<" * Total selling Price : "<<i2.total;
					cout<<"\n\n\t\t\t* ("<<i2.sold<<" ice creams sold  and you earned "<<i2.profit<<" Rs Profit )\n\t\t\t\t\t 'THANKYOU'";
				}
				else 
				cout<<"\n\n\t\t\t we have limited quantity";
}
void pizza(items i3)
{
	     cout<<"\n\n\t\t\t\t\t ***********";
         cout<<"\n\n\t\t\t\t\t || PIZZA ||";
         cout<<"\n\n\t\t\t\t\t ***********";
	    cout<<"\n\n\t\t\t * please enter the no of purchased pizza: ";
	            cin>>i3.purchased;
	    cout<<"\n\n\t\t\t * enter your cost per pizza (in Rs): ";
		        cin>>i3.costprice;
		      		        
		cout<<"\n\n\t\t\t * enter the no of sold pizza: ";
				cin>>i3.sold;
		cout<<"\n\n\t\t\t * enter your selling price per pizza (in Rs): ";
		        cin>>i3.sellprice;

				
				if(i3.purchased - i3.quantity >= i3.sold)
				{
					i3.quantity += i3.sold;
					i3.cost = i3.sold*i3.costprice;
					i3.total= i3.sold*i3.sellprice;
					i3.profit=i3.total - i3.cost;
					cout<<"\n\n\t\t\t"<<" * Your total cost: "<<i3.cost;
					cout<<"\n\n\t\t\t"<<" * Total selling Price : "<<i3.total;
					cout<<"\n\n\t\t\t* ("<<i3.sold<<" burgers sold  and you earned "<<i3.profit<<" Rs Profit )\n\t\t\t\t\t 'THANKYOU'";
				}
				else 
				cout<<"\n\n\t\t\t we have limited quantity";
			
}
void colddrink( items i4 )
{
	     cout<<"\n\n\t\t\t\t\t *****************";
         cout<<"\n\n\t\t\t\t\t || COLD DRINKS ||";
         cout<<"\n\n\t\t\t\t\t *****************";
	     cout<<"\n\n\t\t\t * please enter the no of purchased cold drinks: ";
	            cin>>i4.purchased;
	    cout<<"\n\n\t\t\t * enter your cost per cold drink (in Rs): ";
		        cin>>i4.costprice;
		      		        
		cout<<"\n\n\t\t\t * enter the no of sold cold drinks: ";
				cin>>i4.sold;
		cout<<"\n\n\t\t\t * enter your selling price per cold drinks (in Rs): ";
		        cin>>i4.sellprice;

				
				if(i4.purchased - i4.quantity >= i4.sold)
				{
					i4.quantity += i4.sold;
					i4.cost = i4.sold*i4.costprice;
					i4.total= i4.sold*i4.sellprice;
					i4.profit=i4.total - i4.cost;
					cout<<"\n\n\t\t\t"<<" * Your total cost: "<<i4.cost;
					cout<<"\n\n\t\t\t"<<" * Total selling Price : "<<i4.total;
					cout<<"\n\n\t\t\t* ("<<i4.sold<<" cold drinks sold  and you earned "<<i4.profit<<" Rs Profit )\n\t\t\t\t\t 'THANKYOU'";
				}
				else 
				cout<<"\n\n\t\t\t we have limited quantity";
			
}
void sandwich ( items i5 )
{
	    cout<<"\n\n\t\t\t\t\t **************";
        cout<<"\n\n\t\t\t\t\t || SANDWICH ||";
        cout<<"\n\n\t\t\t\t\t **************";
	    cout<<"\n\n\t\t\t * please enter the no of purchased sandwiches: ";
	            cin>>i5.purchased;
	    cout<<"\n\n\t\t\t * enter your cost per sandwich (in Rs): ";
		        cin>>i5.costprice;
		      		        
		cout<<"\n\n\t\t\t * enter the no of sold sandwich: ";
				cin>>i5.sold;
		cout<<"\n\n\t\t\t * enter your selling price per sandwich (in Rs): ";
		        cin>>i5.sellprice;

				
				if(i5.purchased - i5.quantity >= i5.sold)
				{
					i5.quantity += i5.sold;
					i5.cost = i5.sold*i5.costprice;
					i5.total= i5.sold*i5.sellprice;
					i5.profit=i5.total - i5.cost;
					cout<<"\n\n\t\t\t"<<" * Your total cost: "<<i5.cost;
					cout<<"\n\n\t\t\t"<<" * Total selling Price : "<<i5.total;
					cout<<"\n\n\t\t\t* ("<<i5.sold<<" sandwiches sold  and you earned "<<i5.profit<<" Rs Profit )\n\t\t\t\t\t 'THANKYOU'";
				}
				else 
				cout<<"\n\n\t\t\t we have limited quantity";
			
}
void billing(float no,float price[50],float total[50],float qty[50],float tt,
char itm[50]){

int i,j;
cout<<"\n\n\t\t\tBilling Software\n\n";
cout<<"\nEnter The Number of Products Customer'v Purchased:";
cin>>no;
cout<<"\n\nSL No\tITEM NAME\tQUANTITY\tPRICE/ITEM\n\n";
for( i=1 ;i <= no; i++)
{
cout << i <<"       ";
cin>>itm;
cout<<"\t";
cin>>qty[i];
cout<<"\t";
cin>>price[i];
cout<<"\t";
total[i] = price[i] * qty[i];
cout<<endl;
tt =tt+total[i];
}

cout<<"\n\n\t\t\tTOTAL:"<<tt<<" Rupees";
cout<<"\n\n\t\t\tTHANK YOU VISIT AGAIN.....";
}
  void wfile(){
	ofstream Make("Cafeteria-Management.txt",ios::app|ios::in|ios::out|ios::binary);
	Make<<b1.name<<"\t"<<b1.amount<<"\t"<<b1.day<<"\t"<<b1.date<<endl;
	Make.close();	
	
}
void rfile(){
	ifstream Read("Cafeteria-Management.txt");
	const int max = 1000;
    char a[max];
    cout<<"\n\n\t\tName"<<"\tBill"<<"\tDay"<<"\tDate";
    while(!Read.eof())
    {
    Read.getline(a,max);
		
    cout<<"\n\n\t\t"<<a<<endl;	
	}
    Read.close();
}	
void customerdetail(){
	cout<<"\n\n\t\t\t\t\t **************************";
    cout<<"\n\n\t\t\t\t\t || CUSTOMER BILL RECORD ||";
    cout<<"\n\n\t\t\t\t\t **************************";
}

