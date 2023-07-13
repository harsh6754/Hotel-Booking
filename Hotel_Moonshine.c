#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int sct=0,dct=0,vct=0,cct=0,uct=0,ng=0,tt=0;
char r1[10]="single",r2[10]="double",r3[10]="vanity",r4[10]="classic",r5[10]="superior";
struct cust_record
{
    char *name;
    char *address;
    char *phnno;
    char *email_id;
    char *pss_wd;
    int *age;
    float totl;
    int night;
    char *city;
    char *natity;
    char *a_no;
    unsigned int dd,mm,yy;
    char *rm;
};
struct cust_record s[100];
void accept(struct cust_record[],int);
void display(struct cust_record[],int);
int search(struct cust_record[],int,char*);
void records();
void edit();
void feedback();
void star();
void bookings();
int main_menu()
{
        system("CLS");
        int b;
        char c;
        printf("\n   \t\t\t\t\t\t\t\t\t\t   MAIN MENU:\n\n   We, at, Hotel Moon Shine welcome you to the Hotel services. We take pride to provide you with the world class services. We are delighted to have you provided               with the Best services. \n\n   Choose the option for which you are Looking:\n     1)BOOKINGS\n     2)CUSTOMER RECORDS\n     3)ROOM ALLOTED\n     4)EDIT RECORDS\n     5)FEEDBACK FORM\n     6)BACK TO MAIN PAGE\n     7)EXIT\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1: bookings();
                    break;
            case 2: system("CLS");
                    printf("\n   \t\t\t\t\t\t\t\t\t\tCUSTOMER RECORDS:\n");
                    records();
                    break;
            case 3: system("CLS");
                    printf("\n   \t\t\t\t\t\t\t\t\t\tROOM TALLY:\n");
                    rooms();
                    break;
            case 4: system("CLS");
                    printf("\n   \t\t\t\t\t\t\t\t\t\tEDIT RECORDS:\n");
                    edit();
                    break;
            case 5: system("CLS");
                    printf("\n   \t\t\t\t\t\t\t\t\t\tFEED BACK FORM:\n");
                    feedback();
                    break;
            case 6: main();
                    break;
            case 7: allexit();
                    break;
        }
}
int nt;
float total=0.0;
void bookings()
{
    int op,a,p,dis;
    system("CLS");
    printf("\n   \t\t\t\t\t\t\t\t\t\tBOOKING SERVICES:\n");
    printf("\n   Welcome to our BOOKING SERVICES. What are you looking for:\n     1.) Room Bookings\n     2.) Packages\n     3.) Special Offers\n     4.) View Total Amount\n     5.) Back to Main Menu\n");
    scanf("%d",&op);
        switch(op)
        {
            case 1:     system("CLS");
                        printf("\n   \t\t\t\t\t\t\t\t\t\t ROOM BOOKINGS:\n");
                        printf("\n   The rooms of Hotel Moon Shine are extremely comfortable, equipped with warm and precious materials and personalized with authentic antiques expertly chosen one by one      in the many markets of Tuscany.\n   This passion for detail contributes to the intimate, tranquil atmosphere which transforms each room into a pleasant refuge within the bustling city of Florence, in a       place where guests can relax after a day spent touring and admiring the many beautiful artistic and architectural sites in the city which cradled the Renaissance.\n   Each bedroom at Moon Shine Hotel  has  been individually designed in a fresh  concept mixing tradition, precious fabrics, period furnitures, italian vintage design,        original photos, prints and paintings.\n   Rooms  are light and comfortable and well appointed with a writing desk, wireless internet access and flat screen TV's.  Rooms overlooking the front have double            soundproof windows.");
                        printf("\n\n        Types of Rooms:\n\n\n\t\tSingle Room  (1)                    |   \t\tDouble Room Single Use (2)          |\t\t         Vanity (3)                               \n   <<< Rs.2700 per night>>>\t                    |   <<< Rs. 3000 per night >>>\t                    |   <<< Rs. 3500 per night >>> \n   Single Bed, 110/130 cm SLEEPS 1                  |   Individual Design / Sleeps one                      |   Ensuite small but complete bathroom with shower or\n   Individual Design / Cotton sateen sheets         |   Single Bed, queen or European king size,            |   bathtub please request at time of booking\n   Double pillows / Soundproof windows              |   Cotton sateen sheets / Double pillows               |   Individual Design / Cotton sateen sheets\n   Ensuite bathroom with shower or bathtub          |   Soundproof windows / Free WIFI Internet             |   Queen bed or two separate beds, as you like\n   please request at time of booking                |   Ensuite bathroom with shower or bathtub             |   Double pillows / Soundproof windows\n   Air Conditioning / Free WIFI Internet            |   FLAT SCREEN TV / SATELLITE TV                       |   Free WIFI Internet / FLAT SCREEN TV\n   FLAT SCREEN TV / SATELLITE TV                    |   Minibar – Fridge Bar / Bathroom Amenities           |   SATELLITE TV / Minibar – Fridge Bar\n   Bathroom Amenities / Hairdryer                   |   Hairdryer / Air Conditioning / Free Internet Access |   Bathroom Amenities / Hairdryer / Air Conditioning\n   Air Conditioning / Free Internet Access          |                                                       |   Internet Access");
                        printf("\n\n\t\t\t\t\t\t Classic (4)                       |\t                Superior (5)\n\t\t\t\t<<< Rs. 4500 per night >>>\t\t           |   <<< Rs. 5000 per night >>>\n\t\t\t\tIndividual Design / Cotton sateen sheets           |   Individual Design / Cotton sateen sheets\n\t\t\t\tQueen bed or two separate beds, as you like        |   king sizebed or four poster beds or  two separate\n\t\t\t\tDouble pillows / Soundproof windows                |   Cotton sateen sheets / Double pillows\n\t\t\t\tEnsuite bathroom with shower or bathtub            |   Soundproof windows / Air Conditioning\n\t\t\t\tFree WIFI Internet / FLAT SCREEN TV                |   Free WIFI Internet / FLAT SCREEN TV\n\t\t\t\tSATELLITE TV / Minibar – Fridge Bar                |   Breakfast served in the room with no extra charge\n\t\t\t\tBathroom Amenities / Hairdryer                     |   Chianti Wine bottle in the room upon arrival\n\t\t\t\tAir Conditioning / Internet Access                 |   Fresh fruit basket in the room upon arrival");
                        printf("\n\n****************************************************************************************************************************************************************************\n\n");
                        printf("\t\tChoose Room  (1/2/3/4/5) : ");
                        scanf("%d",&a);
                        printf("\n\t\tNumber of nights stayed : ");
                        scanf("%d",&nt);
                        s[ng].night=nt;
                        ng++;
                        switch (a)
                        {
                            case 1:total=total+(2700*nt);
                                    sct++;
                                    break;
                            case 2:total=total+(3000*nt);
                                    dct++;
                                    break;
                            case 3:total=total+(3500*nt);
                                    vct++;
                                    break;
                            case 4:total=total+(4500*nt);
                                    cct++;
                                    break;
                            case 5:total=total+(5000*nt);
                                    uct++;
                                    break;
                        }
                    printf("\n\n\t\t\t\t\tTOTAL = %f",total);
                  
                    printf("\n\n\t\tFor Packages and discounts for Special Offers visit option 2 and 3 in BOOKING SERVICES MENU \n\n");
                    system("PAUSE");
                    break;
            case 2: system("CLS");
                    printf("\n   \t\t\t\t\t\t\t\t\t\t PACKAGES:\n");
                    printf("\n\tThe Hotel Moonshine offers several packages in order to ensure customers' comfortable stay. However, additional price would be charged for the package which is \n\tavailable for the customers' entire period of stay at the hotel");
                    printf("\n\n\t\t\t\tSwimming Pool(1)   : Rs. 1700");
                    printf("\n\t\t\t\tHot Spring Bath(2) : Rs. 1900");
                    printf("\n\t\t\t\tArcade(3)          : Rs. 2100");
                    printf("\n\t\t\t\tSpa (4)            : Rs. 2700");
                    printf("\n\n\t\t Choose Package :");
                    scanf("%d",&p);
                    switch (p)
                    {
                        case 1:total=total+1700;
                            break;
                        case 2:total=total+1900;
                            break;
                        case 3:total=total+2100;
                            break;
                        case 4:total=total+2700;
                            break;
                    }
                    printf("\n\n\t\t Total amount with the package included =%f",total);
                    
                    printf("\n\n\t\t For discounts visit option 3 in BOOKING SERVICES menu.\n");
                    system("PAUSE");
                    break;
            case 3: system("CLS");
                    printf("\n   \t\t\t\t\tSPECIAL OFFERS:\n");
                    printf("\n\t The Hotel Moonshine provides the customers with various offers and thereby, presenting the customer with beneficial discounts on Room Bookings.\n ");
                    printf("\n\t\t Business Meeting Discount(1)  : 10%");
                    printf("\n\t\t Family Discount(2)            : 15%");
                    printf("\n\t\t Special Occasion Discount(3)  : 25%");
                    printf("\n\t\t Friends' Group Discount(4)    : 20%");
                    printf("\n\t\t Honeymoon Discount(5)         : 30%");
                    printf("\n\n\t\t Discount Applicable :");
                    scanf("%d",&dis);
                    switch(dis)
                    {
                        case 1: total=total-(total/10);
                            break;
                        case 2:total=total-((0.15)*total);
                            break;
                        case 3:total=total-(total/4);
                            break;
                        case 4:total=total-(total/5);
                            break;
                        case 5:total=total-((0.3)*total);
                            break;
                    }
                    printf("\n\n\n\tTotal amount after including packages and applying applicable discount =%f\n\n",total);
                    
                    system("PAUSE");
                    break;
            case 4 : printf("\n\n\n\n\t\tTotal Amount till now :%f\n\n",total);
                    
                    system("PAUSE");
                    break;
            case 5 : main_menu();

    }
    s[tt].totl=total;
    tt++;
    bookings();


}
        int i,j,k,l,m;
        int sr[4]={0,0,0,0};
        int dr[4]={0,0,0,0};
        int vr[4]={0,0,0,0};
        int cr[4]={0,0,0,0};
        int ur[4]={0,0,0,0};
int rooms()
{
        printf("\n 0 : Available \t -1: Not Available\n");
        printf("\n\t\t\t Single Room ");
        printf("\n\t\t\t S01 \t | \t S02 \t | \t S03 \t | \t S04 \t");
        for (i=0;i<sct;i++)
            sr[i]=-1;
        printf("\n\t\t\t %d \t | \t %d \t | \t %d \t | \t %d \t",sr[0],sr[1],sr[2],sr[3]);
        printf("\n\t\t\t     \t | \t     \t | \t     \t | \t     \t");
        printf("\n\t=====================================================================================\n");
        printf("\n\t\t\t Double Room ");
        printf("\n\t\t\t D01 \t | \t D02 \t | \t D03 \t | \t D04 \t");
        for (j=0;j<dct;j++)
            dr[j]=-1;
        printf("\n\t\t\t %d \t | \t %d \t | \t %d \t | \t %d \t",dr[0],dr[1],dr[2],dr[3]);
        printf("\n\t\t\t     \t | \t     \t | \t     \t | \t     \t");
        printf("\n\t=======================================================================================\n");
        printf("\n\t\t\t Vanity Room ");
        printf("\n\t\t\t V01 \t | \t V02 \t | \t V03 \t | \t V04 \t");
        for (k=0;k<vct;k++)
            vr[k]=-1;
        printf("\n\t\t\t %d \t | \t %d \t | \t %d \t | \t %d \t",vr[0],vr[1],vr[2],vr[3]);
        printf("\n\t\t\t     \t | \t     \t | \t     \t | \t     \t");
        printf("\n\t========================================================================================\n");
        printf("\n\t\t\t Classic Room ");
        printf("\n\t\t\t C01 \t | \t C02 \t | \t C03 \t | \t C04 \t");
        for (l=0;l<cct;l++)
           cr[l]=-1;
       printf("\n\t\t\t %d \t | \t %d \t | \t %d \t | \t %d \t",cr[0],cr[1],cr[2],cr[3]);
        printf("\n\t\t\t     \t | \t     \t | \t     \t | \t     \t");
        printf("\n\t=========================================================================================\n");
        printf("\n\t\t\t Superior Room ");
        printf("\n\t\t\t U01 \t | \t U02 \t | \t U03 \t | \t U04 \t");
        for (m=0;m<uct;m++)
            ur[m]=-1;
        printf("\n\t\t\t %d \t | \t %d \t | \t %d \t | \t %d \t",ur[0],ur[1],ur[2],ur[3]);
        printf("\n\t\t\t     \t | \t     \t | \t     \t | \t     \t");
        printf("\n\t==========================================================================================\n\n");
        printf("\n\t Returning to the Main Menu \n");
        system("PAUSE");
        main_menu();
        return 0;
}

void accept(struct cust_record s[10],int sno)
{
int i,g;
for(i=0;i<sno;i++)
{   s[i].totl=total;
	printf("\n\t\t\t\t Data record# %d",i+1);
	printf("\n\t\t\t\t Enter the details!");
    printf("\n\n\t Name:");
    s[i].name=(char*)malloc(50*sizeof(char));
    fflush(stdin);
    gets(s[i].name);
    printf("\n\t Email Id:");
    s[i].email_id=(char*)malloc(40*sizeof(char));
    gets(s[i].email_id);
    printf("\n\t Password:");
    s[i].pss_wd=(char*)malloc(30*sizeof(char));
    gets(s[i].pss_wd);
    printf("\n\t Room Type:");
    s[i].rm=(char*)malloc(10*sizeof(char));
    fflush(stdin);
    gets(s[i].rm);
    g=(strcmpi(s[i].rm,r1)!=0)&&(strcmpi(s[i].rm,r2)!=0)&&(strcmpi(s[i].rm,r3)!=0)&&(strcmpi(s[i].rm,r4)!=0)&&(strcmpi(s[i].rm,r5)!=0);
    if(g==1)
    {
   	printf("\n You have entered wrong room type! Try Again..");
   	printf("\n\t Room Type:");
    s[i].rm=(char*)malloc(10*sizeof(char));
    fflush(stdin);
    gets(s[i].rm);
	}
    printf("\n\t Address:");
    s[i].address=(char*)malloc(40*sizeof(char));
    gets(s[i].address);
    printf("\n\t Phone number:");
    s[i].phnno=(char*)calloc(10,sizeof(char));
    scanf("%s",s[i].phnno);
    printf("\n\t Aadhar number:");
    s[i].a_no=(char*)calloc(12,sizeof(char));
    scanf("%s",s[i].a_no);
    printf("\n\t Age:");
    s[i].age=(int*)calloc(3,sizeof(int));
    scanf("%d",&s[i].age);
    printf("\n\t City:");
    s[i].city=(char*)malloc(20*sizeof(char));
    scanf("%s",s[i].city);
    printf("\n\t Nationality:");
    s[i].natity=(char*)malloc(20*sizeof(char));
    scanf("%s",s[i].natity);
    printf("\n\t Date of check in (DD/MM/YYYY): ");
    scanf("%u %u %u",&s[i].dd,&s[i].mm,&s[i].yy);
    if(s[i].yy>=1000&&s[i].yy<=9999)
    {
        if(s[i].mm>=1&&s[i].mm<=12)
        {
            if((s[i].dd>=1&&s[i].dd<=31)&&(s[i].mm==1||s[i].mm==3||s[i].mm==5||s[i].mm==7||s[i].mm==8||s[i].mm==10||s[i].mm==12))
                {
                    printf("\n");
                }
            else if((s[i].dd>=1&&s[i].dd<=30)&&(s[i].mm==4||s[i].mm==6||s[i].mm==9||s[i].mm==11))
                {
                    printf("\n");
                }
            else if((s[i].dd>=1&&s[i].dd<=28)&&(s[i].mm==2))
                {
                    printf("\n");
                }
            else if((s[i].dd>=1&&s[i].dd<=28)&&s[i].mm==2&&(s[i].yy%400==0&&(s[i].yy%4==0||s[i].yy%100!=0)))
                {
                    printf("\n");
                }
            else
                {
                    printf("\n Date is invalid");
                    printf("\n Date of check in (DD/MM/YYYY): ");
       scanf("\n%u %u %u",&s[i].dd,&s[i].mm,&s[i].yy);
     }
    }
    else {
            printf("\n month is invalid");
    printf("\n Date of check in (DD/MM/YYYY): ");
       scanf("\n%u %u %u",&s[i].dd,&s[i].mm,&s[i].yy);
     }
}
else {
        printf("\n year is invalid");
printf("\n Date of check in (DD/MM/YYYY): ");
       scanf("\n%u %u %u",&s[i].dd,&s[i].mm,&s[i].yy);
     }
     system("pause");
     system("cls");
 }
	records();
}


void display(struct cust_record s[10],int sno)
{
	int i;
for(i=0;i<sno;i++)
{
 printf("\n\n\t\t\t\t\t\t\t\t         So Here is your intricacies!");
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Name                      : %s", s[i].name);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Email Id                  : ");
 puts(s[i].email_id);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Address                   : ");
 printf("%s",s[i].address);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Number of nights          : %d",s[i].night);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Aadhar number             : ");
 printf("%s",s[i].a_no);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Age                       : %d",s[i].age);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Phone number              : ");
 puts(s[i].phnno);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t City                      : ");
 puts(s[i].city);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Nationality               : ");
 puts(s[i].natity);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Total amount              : %f",s[i].totl);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Room type                 : %s",s[i].rm);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n\t\t\t\t\t\t\t Date of check in          : %u/%u/%u ",s[i].dd,s[i].mm,s[i].yy);
 printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
 printf("\n");
 system("pause");
 system("cls");
}
records();
}

int search(struct cust_record s[80],int sno, char pswd[30])
{
	int i;
	for(i=0;i<sno;i++)
	{
		if(strcmp(s[i].pss_wd,pswd)==0)
		{
			return i;
		}
	}
	return -1;
}

int n;
void records()
{
	int a,index;
	char pswd[30];
	system("cls");
printf("\n\t Enter any one option as per your choice! :\n\t1.Customer intricacies\n\t2.Display intricacies\n\t3.Search intricacies\n\t4.Main menu :");
scanf("%d",&a);
switch(a)
{
	case 1: printf("\n Enter the number of customer records:");
	        scanf("%d",&n);
	        accept(s,n);
	        break;
    case 2:display(s,n);
            break;
    case 3:printf("\n Enter the password:");
		        scanf("\n%s",pswd);
		        index=search(s,n,pswd);
		        if(index==-1)
		        {
		        	printf("\n Records not found!\n");
		        	system("pause");
                    records();
				}
				else
				{
					 printf("\n\n\t\t\t\t\t\t\t\t         So Here is your intricacies!");
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Name                      : %s", s[index].name);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Email Id                  : ");
            puts(s[index].email_id);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Address                   : ");
            printf("%s",s[index].address);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Number of nights          : %d",s[index].night);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Aadhar number             : ");
            printf("%s",s[index].a_no);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Age                       : %d",s[index].age);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Phone number              : ");
            puts(s[index].phnno);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t City                      : ");
            puts(s[index].city);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Nationality               : ");
            puts(s[index].natity);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Total amount              : %f",s[i].totl);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Room type                 : %s",s[index].rm);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n\t\t\t\t\t\t\t Date of check in          : %u/%u/%u ",s[index].dd,s[index].mm,s[index].yy);
            printf("\n\t\t\t\t\t\t  *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf("\n");
            getch();
            records();
				}
			break;
    case 4: main_menu();
	        break;

}
}

void edit()
{
     int index;
	 char pswd[30];
	 system("cls");
	 printf("\n Enter the password whose record you want to edit! :");
		        scanf("\n%s",pswd);
		        index=search(s,n,pswd);
		        if(index==-1)
		        {
		        	printf("\n Records not found!\n");
		        	system("pause");
                    main_menu();
				}
				else
				{
	                printf("\n\t\t Enter the new details!");
                    printf("\n\n\t Name:");
                    s[index].name=(char*)malloc(50*sizeof(char));
                    fflush(stdin);
                    gets(s[index].name);
                    printf("\n\t Email Id:");
                    s[index].email_id=(char*)malloc(40*sizeof(char));
                    gets(s[index].email_id);
                    printf("\n\t Password:");
                    s[index].pss_wd=(char*)malloc(30*sizeof(char));
                    gets(s[index].pss_wd);
                    printf("\n\t Address:");
                    s[index].address=(char*)malloc(40*sizeof(char));
                    gets(s[index].address);
                    printf("\n\t Phone number:");
                    s[index].phnno=(char*)calloc(10,sizeof(char));
                    scanf("%s",s[index].phnno);
                    printf("\n\t Aadhar number:");
                    s[index].a_no=(char*)calloc(12,sizeof(char));
                    scanf("%s",s[index].a_no);
                    printf("\n\t Age:");
                    s[index].age=(int*)calloc(3,sizeof(int));
                    scanf("%d",&s[index].age);
                    printf("\n\t City:");
                    s[index].city=(char*)malloc(20*sizeof(char));
                    scanf("%s",s[index].city);
                    printf("\n\t Nationality:");
                    s[index].natity=(char*)malloc(20*sizeof(char));
                    scanf("%s",s[index].natity);
                    printf("\n\t Date of check in (DD/MM/YYYY): ");
                    scanf("%u %u %u",&s[index].dd,&s[index].mm,&s[index].yy);
                 if(s[index].yy>=1000&&s[index].yy<=9999)
                 {
                    if(s[index].mm>=1&&s[index].mm<=12)
                    {
                     if((s[index].dd>=1&&s[index].dd<=31)&&(s[index].mm==1||s[index].mm==3||s[index].mm==5||s[index].mm==7||s[index].mm==8||s[index].mm==10||s[index].mm==12))
                     {
                        printf("\n");
                     }
                     else if((s[index].dd>=1&&s[index].dd<=30)&&(s[index].mm==4||s[index].mm==6||s[index].mm==9||s[index].mm==11))
                     {
                     printf("\n");
                     }
                     else if((s[index].dd>=1&&s[index].dd<=28)&&(s[index].mm==2))
                     {
                      printf("\n");
                     }
                     else if((s[index].dd>=1&&s[index].dd<=28)&&s[index].mm==2&&(s[index].yy%400==0&&(s[index].yy%4==0||s[index].yy%100!=0)))
                     {
                      printf("\n");
                     }
                 else
                     {
                     printf("\n Date is invalid");
                     printf("\n Date of check in (DD/MM/YYYY): ");
                     scanf("\n%u %u %u",&s[index].dd,&s[index].mm,&s[index].yy);
                     }
                   }
                     else {
                       printf("\n month is invalid");
                       printf("\n Date of check in (DD/MM/YYYY): ");
                       scanf("\n%u %u %u",&s[index].dd,&s[index].mm,&s[index].yy);
                        }
                  }
                 else {
                  printf("\n year is invalid");
                   printf("\n Date of check in (DD/MM/YYYY): ");
                   scanf("\n%u %u %u",&s[index].dd,&s[index].mm,&s[index].yy);
                   }
                     system("pause");
        }
         main_menu();
}

void feedback()
{
    int a,b,c,e,f,g,h,k,l;
    char d[10],email[100],y[10]="yes",i[200],j[50],m[200],n[10];
    printf("___________________________________________________________________________________________________________________________________________________________________________\n___________________________________________________________________________________________________________________________________________________________________________");
    printf("\n\n\t\t\t\t******  ******  ******  ******   ******  ******  ******  *     *\n\t\t\t\t*\t*\t*\t*     *  *     * *    *  *\t *    * \n\t\t\t\t*****\t*****\t*****\t*     *  ******  ******  *\t *****\n\t\t\t\t*\t*\t*\t*     *  *     * *    *  *\t *    *\n\t\t\t\t*\t******  ******  ******   ******  *    *  ******  *     *      \n\n\n");
    printf("\t\t\t\t\t\t\t\t\t     ******  ******  ******  *     *\n\t\t\t\t\t\t\t\t\t     *       *    *  *   *   **   **\n\t\t\t\t\t\t\t\t\t     *****   *    *  ****    * * * *\n\t\t\t\t\t\t\t\t\t     *       *    *  *   *   *  *  *\n\t\t\t\t\t\t\t\t\t     *       ******  *    *  *     *\n\n");
    printf("___________________________________________________________________________________________________________________________________________________________________________\n___________________________________________________________________________________________________________________________________________________________________________\n\n");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_");
    printf("\n\n\n\t\t\t\t\t\t\t\tThank you for choosing Hotel Moonshine!\n   Hope you had a fantastic and comfortable stay with us! Your opinions matter a lot to us, so if you could spare a moment to share with us your valuable feedback!\n\n   If you would like to give feedback, press Enter.\n");
    system("PAUSE");
    system("CLS");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\t\t\t\t\t\t\t\t\t Hotel Feedback\n\n");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\n\n\t\t1. How did you like your stay?\n\n");
    printf("\t\t1= Poor     2= Okay     3= Good     4= Very Good     5= Excellent\n\n\t\t");
    scanf("%d",&a);
    printf("\n\n\t\t2. How likely are you to recommend Hotel Moonshine to a friend?\n\n");
    printf("\t\t1= Not at All     2= May Be     3= Definitely I'll Recommend\n\n\t\t");
    scanf("%d",&b);
    printf("\n\n\t\t3. How likely are you to come back to Hotel Moonshine for another visit?\n\n");
    printf("\t\t1= Never Again     2= I'll rather look for other Hotel     3= May Be     4= I'll see to it     5= Whenever I visit Florence \n\n\t\t");
    scanf("%d",&c);
    printf("\n\n\t\t4. Would you like to subscribe to our monthly newsletter to never miss out on any deal, Hotel Moonshine related(yes /no )?\n\n\t\t");
    scanf("%s",&d);
    if(strcmp(d,y)==0)
    {
        printf("\n\n\t\tEnter your email address: \n\n\t\t");
        scanf("%s",email);
        printf("\n\n\t\tThank you for subscribing! You'll get a confirmation email soon! Press Enter to continue to Staff Feedback.\n\n");
    }
    else
    {
        printf("\n\n\t\tThank you for your consideration! Press Enter to continue to Staff Feedback.\n\n ");
    }
    system("PAUSE");
    system("CLS");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t Staff Feedback\n\n");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\n\n\t\t1. How friendly was the stuff?\n\n");
    printf("\t\t1= Rude      2= Okay     3= Friendly     4= Good Natured     5= Very Soothing & Friendly\n\n\t\t");
    scanf("%d",&e);
    printf("\n\n\t\t2. How punctual was the staff (rate in stars)?\n\n");
    printf("\t\t1     2     3     4     5\n\n\t\t");
    scanf("%d",&f);
    printf("\n\n\t\t3. How responsive was the staff (rate in stars)?\n\n");
    printf("\t\t1     2     3     4     5\n\n\t\t");
    scanf("%d",&g);
    printf("\n\n\t\t4. How respectful was the staff(rate in stars)?\n\n");
    printf("\t\t1     2     3     4     5\n\n\t\t");
    scanf("%d",&h);
    printf("\n\n\t\t5. Any experiences with the staff you'd like to share?\n\n\t\t");
    scanf("%s",i);
    printf("\n\n\t\tPress Enter to continue to Room Feedback.\n\n\t\t");
    system("PAUSE");
    system("CLS");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t Room Feedback\n\n");
    printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
    printf("\n\n\t\t1. What type of room did you have?\n\n\t\t");
    scanf("%s",j);
    int x=(strcmpi(j,r1)!=0)&&(strcmpi(j,r2)!=0)&&(strcmpi(j,r3)!=0)&&(strcmpi(j,r4)!=0)&&(strcmpi(j,r5)!=0);
    if(x==1)
    {
        printf("\n\n\t\tRoom not valid! Enter valid room type!\n\n");
        printf("\n\n\t\t1. What type of room did you have?\n\n\t\t");
        scanf("%s",j);
    }
    printf("\n\n\t\t2. How comfortable was the room?\n\n");
    printf("\t\t1= Very Discomforting      2= Pricky     3= Comfortable     4= Very Comfortable     5= Extremely Comfortable\n\n\t\t");
    scanf("%d",&k);
    printf("\n\n\t\t3. How clean and hygienic was the room?\n\n\t\t");
    printf("1= Disgusting     2= Needs Cleaning     3= Neat     4= Very Hygienic & Clean     5= Extremely Hygienic & Clean\n\n\t\t");
    scanf("%d",&l);
    printf("\n\n\t\t4. Any feedback regarding the rooms?\n\n\t\t");
    scanf("%s",m);
    printf("\n\nX_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_XEND OF FEEDBACK FORMX_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X\n\n");
    system("PAUSE");
    system("CLS");
    printf("\n\n\t\tYour responses have been recorded!\n\n\t\t\tEnter your name: \t\t  ");
    scanf("%s",n);
    printf("\n");
    system("PAUSE");
    system("CLS");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n\t\t\t\t\t\t\t\t\t\t%s\'s Feedback Form!\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n",n);
    printf("\n\n\t\t1. How did you like your stay?\n\n\t\t  ");
    star(a);
    printf("\n\n\t\t2. How likely are you to recommend Hotel Moonshine to a friend?\n\n\t\t  ");
    star(b);
    printf("\n\n\t\t3. How likely are you to come back to Hotel Moonshine for another visit?\n\n\t\t  ");
    star(c);
    printf("\n");
    system("PAUSE");
    system("cls");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n\t\t\t\t\t\t\t\t\t\tStaff Feedback\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n");
	printf("\n\n\t\t1. How friendly was the staff?\n\n\t\t  ");
    star(e);
    printf("\n\n\t\t2. How punctual was the staff?\n\n\t\t  ");
    star(f);
    printf("\n\n\t\t3. How responsive was the staff?\n\n\t\t  ");
    star(g);
    printf("\n\n\t\t4. How respectful was the staff?\n\n\t\t  ");
    star(h);
    printf("\n");
    system("PAUSE");
    system("cls");
    printf("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n\t\t\t\t\t\t\t\t\t\tRoom Feedback\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n");
    printf("\n\n\t\t1. What type of room did you have?\n\n\t\t  ");
    printf(" %s",j);
    printf("\n\n\t\t2. How comfortable was the room?\n\n\t\t  ");
    star(k);
    printf("\n\n\t\t3. How clean and hygienic was the room?\n\n\t\t  ");
    star(l);
    printf("\n\n   Thank you so much for your valuable feedback! We at Hotel Moonshine care about learning from your opinions and improving every waking moment, to deliver to you the best in hospitality!\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n\t\t\t\t\t\t\t\t\tPress Enter to exit.\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n");
    system("PAUSE");
    allexit();
}
void star(int x)
{
    int i;
    for(i=0;i<x;i++)
    {
        printf(" *");
    }
}

int allexit()
{
   system("CLS");
    printf("\n   \t\t\t\t\t\t\t\t\t\tTHANK YOU!!\n\n   \t\t\t\t\t\tWe are Grateful to you to give us the opportunity to serve you. VISIT US AGAIN.");
    printf("\n\n");
    exit(0);
}

int main()
{
 char a;
 system("COLOR 30");
 printf("\n\t\t\t\t\t\t*************************************************************************************");
 printf("\n\t\t\t\t\t\t\t    THE ");
 printf("\n\t\t\t\t\t\t\t\tM     M  MMMM  MMMM  M   M    MMMM  M  M  MMM  M   M  MMMM\n\t\t\t\t\t\t\t\tMM   MM  M  M  M  M  MM  M    M     M  M   M   MM  M  M\n\t\t\t\t\t\t\t\tM M M M  M  M  M  M  M M M    MMMM  MMMM   M   M M M  MMM\n\t\t\t\t\t\t\t\tM  M  M  M  M  M  M  M  MM       M  M  M   M   M  MM  M\n\t\t\t\t\t\t\t\tM     M  MMMM  MMMM  M   M    MMMM  M  M  MMM  M   M  MMMM");
    printf("\n\t\t\t\t\t\t*************************************************************************************");
    printf("\n\n\n\n\n   Hotel Moon Shine is located in the heart of the historic center of Florence in an extremely characteristic, quite and lively area within short walk distance\n   to all sites and is surrounded by the extraordinary beauty of churches, buildings, shops and monuments etc. Moon Shine Hotel is part of a lovingly restored 18th            century's Royal Palace.\n\n   On entering this charming hotel in Florence, you will immediately sense its special intimate atmosphere that makes you feel like being in your own florentine home.  \n   Each detail has been passionately chosen and each room deserves a visit. Hotel Moon Shine style mixes valuable antiques and original artworks with an unexpected            eclectic contemporary twist. The entire House recalls the ancient \'Palazzi\'  of times past where young European aristocrats lived while discovering the beauty              and the artistic mysteries of Italy.\n\n   The special charm and the cozy mood of Moon Shine will make you feel as a true fiorentine in Florence.\n\n   The Moon Shine Hotel is a modern, elegant 4-star hotel overlooking the beuaty of the city, perfect for a romantic, charming vacation, in the enchanting setting of          Florence.The rooms at the Hotel are specially designed, well-lit and inviting. Our reception staff will be happy to help you during your stay in our city, suggesting       itineraries, guided visits and some good restaurants in the historic centre.");
    printf("\n\n\n\n   Enter any key for Main Menu:\n");
    getch();
	scanf("%c",&a);
    if((a>=0&&a<=128))
        main_menu();
return 0;
}