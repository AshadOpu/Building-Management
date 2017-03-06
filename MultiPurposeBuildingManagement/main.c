/**This Program Is For Helping The Customers to Find Out And Buy Their
   Desired Item From A Shopping Mall.*/
/**You Have To Give A Passward While You Want To Enter Administration Mode.
   The Passward is 1234.*/
/**If You Change The Passward, The Passward Will Be Changed For That
   Particular Running Period. If You Close The Output Window And Run The
   Program again, The Passward will be Changed To 1234.*/

#include<stdio.h>
int pass=1234,AdPass,Choice,currpass,newpass,newpass2,Fare;
float ParkHour,PayForParking;
void Administration()
{
    printf("\n\tEnter Administration Passward: ");
    scanf("%d",&AdPass);
    if(AdPass==pass)
    {
        system("CLS");
        AdministrationDuty();
    }
    else
    {
        system("CLS");
        printf("\n\tInvalid Passward!\n");
        printf("\tBe An Administrator or\n");
        printf("\tEnter Your Passward Correctly!!!\n\n\t");
        system("pause");
        system("CLS");
        main();
    }

}
AdministrationDuty()
{
    printf("*******Welcome To Administration Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Change Passward\n");
    printf("\t2.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        PassChange();
        break;
    case 2:
        main();


    }
}
PassChange()
{
    printf("\n\tEnter Your Current Passward: ");
    scanf("%d",&currpass);
    if(currpass==pass)
    {
        printf("\tEnter Your New Passward: ");
        scanf("%d",&newpass);
        printf("\tConfirm Your New Passward: ");
        scanf("%d",&newpass2);
        if(newpass==newpass2)
        {
            pass=newpass;
            system("CLS");
            printf("\n\tPassward Change Complete.\n");
            printf("\tYour New Passward: %d\n\n\t",pass);
        }
        else
            printf("\tPassward Does not match.\n");
    }
    else
    {
        system("CLS");
        printf("\tInvalid Passward!\n\n\t");


    }

    system("pause");
    system("CLS");
    AdministrationDuty();

}
void RentFlat()
{
    printf("********Welcome To Rent Flat Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Rent A Flat\n");
    printf("\t2.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:
        system("CLS");
        FlatRent();
        break;
    case 2:
        system("CLS");
        main();


    }
}
FlatRent()
{
    printf("********Welcome To Rent Flat Menu*******\n\n");
    printf("\tChoice Your Flat:\n");
    printf("\t1.3 Bedrooms\n\t  4 Baths\n\t  5 Rooms(total)  \n\t  2050 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t2.3 Bedrooms\n\t  3 Baths\n\t  2600 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t3.3 Bedrooms\n\t  3 Baths\n\t  6 Rooms(total)  \n\t  2600 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t4.4 Bedrooms\n\t  4 Baths\n\t  7 Rooms(total)  \n\t  3000 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t5.3 Bedrooms\n\t  1 Baths\n\t  6 Rooms(total)  \n\t  1500 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t6.3 Bedrooms\n\t  5 Baths\n\t  2700 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t7.4 Bedrooms\n\t  3 Baths\n\t  6 Rooms(total)  \n\t  2250 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t8.3 Bedrooms\n\t  1 Baths\n\t  5 Rooms(total)  \n\t  1800 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t9.3 Bedrooms\n\t  2 Baths\n\t  6 Rooms(total)  \n\t  2000 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t10.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.70,000/mth\n\n       ");
        RentingFlat();
        break;
    case 2:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.40,000/mth\n\n       ");
        RentingFlat();
        break;
    case 3:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.110,000/mth\n\n       ");
        RentingFlat();
        break;
    case 4:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.130,000/mth\n\n       ");
        RentingFlat();
        break;
    case 5:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.48,000/mth\n\n       ");
        RentingFlat();
        break;
    case 6:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.35,000/mth\n\n       ");
        RentingFlat();
        break;
    case 7:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.45,000/mth\n\n       ");
        RentingFlat();
        break;
    case 8:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.55,000/mth\n\n       ");
        RentingFlat();
        break;
    case 9:
        printf("*******Welcome To Rent Flat Menu*******\n\n");
        printf("\n       The Rent is Tk.63,000/mth\n\n       ");
        RentingFlat();
        break;
    case 10:
        RentFlat();
    }
}
RentingFlat()
{
    system("pause");
    system("CLS");
    printf("********Welcome To Rent Flat Menu*******\n\n");
    printf("\n\tWhat do you want to do now???\n");
    printf("\t1.Rent This Flat\n");
    printf("\t2.Call The Agent\n");
    printf("\t3.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:
        system("CLS");
        printf("**************Welcome To Rent Flat Menu**********\n\n");
        printf("\n\tYou Have Rented This Flat Successfully!\n\n\t");
        system("pause");
        system("CLS");
        RentFlat();
        break;
    case 2:
        system("CLS");
        printf("**********Welcome To Rent Flat Menu**********\n\n");
        printf("\tPhone Number is: 01919 024 422\n\n\t");
        RentingFlat();
        break;
    case 3:
        system("CLS");
        FlatRent();
    }
}
void BuyFlat()
{
    printf("********Welcome To Buy Flat Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Buy A Flat\n");
    printf("\t2.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        FlatBuy();
        break;
    case 2:
        main();


    }
}
FlatBuy()
{
    printf("********Welcome To Buy Flat Menu*******\n\n");
    printf("\tChoice Your Flat:\n\n");
    printf("\t1.2050 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t2.2600 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t3.2600 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t4.3000 Total Area(sq.ft)\n\t  4th Floor\n\n");
    printf("\t5.1500 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t6.2700 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t7.2250 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t8.1800 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t9.2000 Total Area(sq.ft)\n\t  5th Floor\n\n");
    printf("\t10.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.3,970,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 2:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.8,540,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 3:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.8,110,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 4:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.19,930,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 5:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.4,480,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 6:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.7,530,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 7:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.5,950,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 8:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.4,950,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 9:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tThe Fare is Tk.6,550,000\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 10:
        BuyFlat();
    }
}
BuyingFlat()
{
    system("CLS");
    printf("********Welcome To Buy Flat Menu*******\n\n");
    printf("\tWhat do you want to do now???\n");
    printf("\t1.Buy This Flat\n");
    printf("\t2.Call The Agent\n");
    printf("\t3.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("********Welcome To Buy Flat Menu*******\n\n");
        printf("\tYou Have Bought This Flat Successfully!\n\n\t");
        system("pause");
        system("CLS");
        BuyFlat();
        break;
    case 2:
        printf("**********Welcome To Buy Flat Menu**********\n\n");
        printf("\tPhone Number is: 01919 024 422\n\n\t");
        system("pause");
        BuyingFlat();
        break;
    case 3:
        FlatBuy();
    }
}
void RentStall()
{
    printf("********Welcome To Rent Stall Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Rent A Stall\n");
    printf("\t2.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        StallRent();
        break;
    case 2:
        main();


    }
}
StallRent()
{
    printf("********Welcome To Rent Stall Menu*******\n\n");
    printf("\tChoice Your Stall:\n\n");
    printf("\t1.290 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t2.330 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t3.120 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t4.164 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t5.189 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t6.1680 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t7.790 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t8.2080 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t9.102 sq.ft\n\t  3rd Floor\n\n");
    printf("\t10.1020 sq.ft\n\t  3rd Floor\n\n");
    printf("\t11.2235 sq.ft\n\t  3rd Floor\n\n");
    printf("\t12.2600 sq.ft\n\t  2nd Floor\n\n");
    printf("\t13.262 sq.ft\n\t  2nd Floor\n\n");
    printf("\t14.495 sq.ft\n\t  2nd Floor\n\n");
    printf("\t15.84 sq.ft\n\t  1st Floor\n\n");
    printf("\t16.2000 sq.ft\n\t  1st Floor\n\n");
    printf("\t17.750 sq.ft\n\t  1st Floor\n\n");
    printf("\t18.523 sq.ft\n\t  1st Floor\n\n");
    printf("\t19.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.39,700/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 2:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.45,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 3:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.16,500/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 4:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.22,500/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 5:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.25,800/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 6:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.230,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 7:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.108,200/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 8:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.284,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 9:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.14,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 10:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.139,700/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 11:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.300,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 12:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.356,200/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 13:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.35,800/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 14:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.67,800/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 15:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.11,500/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 16:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.274,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 17:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.102,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 18:
        printf("********Welcome To Rent Stall Menu*******\n\n");
        printf("\tThe Rent is Tk.71,000/mth\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 19:
        system("CLS");
        RentStall();
    }
}
RentingStall()
{
    system("CLS");
    printf("********Welcome To Rent Stall Menu*******\n\n");
    printf("\tWhat do you want to do now???\n");
    printf("\t1.Rent This Stall\n");
    printf("\t2.Call The Agent\n");
    printf("\t3.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("***************Welcome To Rent Stall Menu*************\n\n");
        printf("\tYou Have Rented This Stall Successfully!\n\n\t");
        system("pause");
        system("CLS");
        RentStall();
        break;
	case 2:
        printf("**********Welcome To Buy Flat Menu**********\n\n");
        printf("\tPhone Number is: 01919 024 422\n\n\t");
        system("pause");
        RentingStall();
        break;
    case 3:
        StallRent();
    }
}

void BuyStall()
{
    printf("********Welcome To Buy Stall Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Buy A Stall\n");
    printf("\t2.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        StallBuy();
        break;
    case 2:
        main();


    }
}
StallBuy()
{
    printf("********Welcome To Buy Stall Menu*******\n\n");
    printf("\tChoice Your Stall:\n\n");
    printf("\t1.290 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t2.330 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t3.120 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t4.164 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t5.189 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t6.1680 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t7.790 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t8.2080 sq.ft\n\t  1st,2nd or 3rd Floor\n\n");
    printf("\t9.102 sq.ft\n\t  3rd Floor\n\n");
    printf("\t10.1020 sq.ft\n\t  3rd Floor\n\n");
    printf("\t11.2235 sq.ft\n\t  3rd Floor\n\n");
    printf("\t12.2600 sq.ft\n\t  2nd Floor\n\n");
    printf("\t13.262 sq.ft\n\t  2nd Floor\n\n");
    printf("\t14.495 sq.ft\n\t  2nd Floor\n\n");
    printf("\t15.84 sq.ft\n\t  1st Floor\n\n");
    printf("\t16.2000 sq.ft\n\t  1st Floor\n\n");
    printf("\t17.750 sq.ft\n\t  1st Floor\n\n");
    printf("\t18.523 sq.ft\n\t  1st Floor\n\n");
    printf("\t19.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.114,000\n\n\t");
        BuyingStall();
        break;
    case 2:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.239,700\n\n\t");
        BuyingStall();
        break;
    case 3:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.245,000\n\n\t");
        BuyingStall();
        break;
    case 4:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.316,500\n\n\t");
        BuyingStall();
        break;
    case 5:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.322,500\n\n\t");
        BuyingStall();
        break;
    case 6:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.325,800\n\n\t");
        BuyingStall();
        break;

    case 7:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.2,230,000\n\n\t");
        BuyingStall();
        break;
    case 8:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.2,508,200\n\n\t");
        BuyingStall();
        break;
    case 9:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.4,284,000\n\n\t");
        BuyingStall();
        break;
    case 10:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.4,139,700\n\n\t");
        BuyingStall();
        break;
    case 11:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.5,300,000\n\n\t");
        BuyingStall();
        break;
    case 12:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.7,356,200\n\n\t");
        BuyingStall();
        break;
    case 13:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.835,800\n\n\t");
        BuyingStall();
        break;
    case 14:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.667,800\n\n\t");
        BuyingStall();
        break;
    case 15:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.911,500\n\n\t");
        BuyingStall();
        break;
    case 16:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.1,274,000\n\n\t");
        BuyingStall();
        break;
    case 17:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.3,102,000\n\n\t");
        BuyingStall();
        break;
    case 18:
        printf("********Welcome To Buy Stall Menu*******\n\n");
        printf("\tThe Price is Tk.1,071,000\n\n\t");
        BuyingStall();
        break;
    case 19:
        BuyStall();
    }
}
BuyingStall()
{
    system("pause");
    system("CLS");
    printf("********Welcome To Buy Stall Menu*******\n\n");
    printf("\tWhat do you want to do now???\n");
    printf("\t1.Buy This Stall\n");
    printf("\t2.Call The Agent\n");
    printf("\t3.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        printf("***************Welcome To Buy Stall Menu*************\n\n");
        printf("\tYou Have Bought This Stall Successfully!\n\n\t");
        system("pause");
        system("CLS");
        BuyStall();
        break;
	case 2:
        printf("**********Welcome To Buy Flat Menu**********\n\n");
        printf("\tPhone Number is: 01919 024 422\n\n\t");
        BuyingStall();
        break;
    case 3:
        StallBuy();
    }
}
void VehicleParking()
{
    printf("*******Welcome To Vehicle Parking Menu*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Park A Vehicle\n");
    printf("\t2.Pay For A Vehicle\n");
    printf("\t3.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");
    switch(Choice)
    {
    case 1:
        VehicleType();
        break;
    case 2:
        ParkBill1();
        break;
    case 3:
        main();
    }
}
VehicleType()
{
    printf("*******Welcome To Vehicle Parking Menu*******\n\n");
    printf("\tMention Your Vehicle Type: \n");
    printf("\t1.Car\n");
    printf("\t2.Motorcycle\n");
    printf("\t3.Bicycle\n");
    printf("\t4.Pickup Van\n");
    printf("\t5.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.140/hr\n\n\t");
        ParkVehicle(1);
        break;
    case 2:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.50/hr\n\n\t");
        ParkVehicle(2);
        break;
    case 3:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.20/hr\n\n\t");
        ParkVehicle(3);
        break;
    case 4:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.160/hr\n\n\t");
        ParkVehicle(4);
        break;
    case 5:
        VehicleParking();
    }
}
int Plot;
ParkVehicle(Plot)
{

    switch(Plot)
    {
    case 1:
        printf("Go To Ground Floor Parking Plot 1\n\n\t");
        system("pause");
        system("CLS");
        VehicleParking();
        break;
    case 2:
        printf("Go To Ground Floor Parking Plot 2\n\n\t");
        system("pause");
        system("CLS");
        VehicleParking();
        break;
    case 3:
        printf("Go To Ground Floor Parking Plot 3\n\n\t");
        system("pause");
        system("CLS");
        VehicleParking();
        break;
    case 4:
        printf("\tGo To Ground Floor Parking Plot 4\n\n\t");
        system("pause");
        system("CLS");
        VehicleParking();
        break;
    }
}
ParkBill1()
{
    printf("*******Welcome To Vehicle Parking Menu*******\n\n");
    printf("\tMention Your Vehicle Type: \n");
    printf("\t1.Car\n");
    printf("\t2.Motorcycle\n");
    printf("\t3.Bicycle\n");
    printf("\t4.Pickup Van\n");
    printf("\t5.Back To Previous Menu\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.140/hr\n\n\t");
        system("pause");
        ParkBill2(140);
        break;
    case 2:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.50/hr\n\n\t");
        system("pause");
        ParkBill2(50);
        break;
    case 3:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.20/hr\n\n\t");
        system("pause");
        ParkBill2(20);
        break;
    case 4:
        printf("*******Welcome To Vehicle Parking Menu*******\n\n");
        printf("\tYou Have To Pay Tk.160/hr\n\n\t");
        system("pause");
        ParkBill2(160);
        break;
    case 5:
        VehicleParking();
    }
}
ParkBill2(Fare)
{
    system("CLS");
    printf("*******Welcome To Vehicle Parking Menu*******\n\n");
    printf("\tEnter Your Total Park Hour: ");
    scanf("%f",&ParkHour);
    system("CLS");
    PayForParking=ParkHour*Fare;
    printf("*******Welcome To Vehicle Parking Menu*******\n\n");
    printf("\tYou Have To Pay: Tk.%.2f\n\n\t",PayForParking);
    system("pause");
    system("CLS");
    VehicleParking();
}
void Shopping()
{
    printf("********Welcome To Shopping Menu*******\n\n");
    printf("\tChoose Your Catagory: \n");
    printf("\t1.Clothing\n");
    printf("\t2.Footwear\n");
    printf("\t3.Jewelry\n");
    printf("\t4.Watches\n");
    printf("\t5.Mobiles & Accessories\n");
    printf("\t6.Toys,Kids & Babies\n");
    printf("\t7.Books & Media\n");
    printf("\t8.Sports & Outdoors\n");
    printf("\t9.Other Categories\n");
    printf("\t10.Back To Previous Menu\n\n");

    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        Clothing();
        break;
    case 2:
        Footwear();
        break;
    case 3:
        Jewelry();
        break;
    case 4:
        Watches();
        break;
    case 5:
        Mobiles();
        break;
    case 6:
        Toys();
        break;
    case 7:
        Books();
        break;
    case 8:
        Sports();
        break;
    case 9:
        Others();
        break;
    case 10:
        main();
    }
}
Clothing()
{
    printf("********Welcome To Clothing Menu*******\n\n");
    printf("\tChoose Your Catagory: \n");
    printf("\t1.Mens' Clothing\n");
    printf("\t2.Womens' Clothing\n");
    printf("\t3.Kids' & Babies' Clothing\n");
    printf("\t4.Back To Previous Menu\n\n");

    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        printf("********Welcome To Clothing Menu*******\n\n");
        printf("\tGo to Stall No. 105\n\n\t");
        system("pause");
        system("CLS");
        Shopping();
        break;
    case 2:
        printf("********Welcome To Clothing Menu*******\n\n");
        printf("\tGo to Stall No. 102\n\n\t");
        system("pause");
        system("CLS");
        Shopping();
        break;
    case 3:
        printf("********Welcome To Clothing Menu*******\n\n");
        printf("\tGo to Stall No. 103\n\n\t");
        system("pause");
        system("CLS");
        Shopping();
        break;
    case 4:
        Shopping();

    }
}
Footwear()
{
    printf("********Welcome To Footwear Menu*******\n\n");
    printf("\tChoose Your Catagory: \n");
    printf("\t1.Men's Shoes\n");
    printf("\t2.Womens Shoes\n");
    printf("\t3.Back To Previous Menu\n\n");

    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        printf("********Welcome To Footwear Menu*******\n\n");
        printf("\tGo to Stall No. 104\n\n\t");
        system("pause");
        system("CLS");
        Shopping();
        break;
    case 2:
        printf("********Welcome To Footwear Menu*******\n\n");
        printf("\tGo to Stall No. 101\n\n\t");
        system("pause");
        system("CLS");
        Shopping();
        break;
    case 3:
        Shopping();

    }
}
Jewelry()
{
    printf("********Welcome To Jewelry Menu*******\n\n");
    printf("\tGo to Stall No. 106\n\n\t");
    system("pause");
    system("CLS");
    Shopping();

}
Watches()
{
    printf("********Welcome To Watches Menu*******\n\n");
    printf("\tGo to Stall No. 205\n\n\t");
    system("pause");
    system("CLS");
    Shopping();
}
Mobiles()
{
    printf("********Welcome To Mobiles Menu*******\n\n");
    printf("\tGo to Stall No. 302\n\n\t");
    system("pause");
    system("CLS");
    Shopping();
}
Toys()
{
    printf("********Welcome To Toys Menu*******\n\n");
    printf("\tGo to Stall No. 203\n\n\t");
    system("pause");
    system("CLS");
    Shopping();
}
Books()
{
    printf("********Welcome To Books Menu*******\n\n");
    printf("\tGo to Stall No. 201, 202 & 204\n\n\t");
    system("pause");
    system("CLS");
    Shopping();
}
Sports()
{
    printf("********Welcome To Sports Menu*******\n\n");
    printf("\tGo to Stall No. 303 & 206\n\n\t");
    system("pause");
    system("CLS");
    Shopping();
}
Others()
{
    printf("********Welcome To Shopping Menu*******\n\n");
    printf("\tChoose Your Catagory: \n");
    printf("\t1.Food & Beverages\n");
    printf("\t2.Musical Instruments\n");
    printf("\t3.Back To Previous Menu\n\n");

    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    system("CLS");

    switch(Choice)
    {
    case 1:
        printf("********Welcome To Food & Beverages Menu*******\n\n");
        printf("\tGo to Stall No. 304 & 306\n\n\t");
        system("pause");
        system("CLS");
        Others();
        break;
    case 2:
        printf("********Welcome To Musical Instrument Menu*******\n\n");
        printf("\tGo to Stall No. 301 & 305\n\n\t");
        system("pause");
        system("CLS");
        Others();
        break;
    case 3:
        Shopping();

    }
}

int main()
{
    int a;
    printf("*******Welcome To NEW Shopping Mall*******\n\n");
    printf("\tWhat do you want to do???\n");
    printf("\t1.Administration\n");
    printf("\t2.RentFlat\n");
    printf("\t3.BuyFlat\n");
    printf("\t4.RentStall\n");
    printf("\t5.BuyStall\n");
    printf("\t6.CarParking\n");
    printf("\t7.Shopping\n");
    printf("\t8.Exit\n\n");
    printf("\tEnter Your Choice: ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:
        system("CLS");
        Administration();
        break;
    case 2:
        system("CLS");
        RentFlat();
        break;
    case 3:
        system("CLS");
        BuyFlat();
        break;
    case 4:
        system("CLS");
        RentStall();
        break;
    case 5:
        system("CLS");
        BuyStall();
        break;
    case 6:
        system("CLS");
        VehicleParking();
        break;
    case 7:
        system("CLS");
        Shopping();
        break;
    default:
        system("CLS");
        printf("\n\t...........................\n");
        printf("\t........Know Thyself.......\n");
        printf("\t......Have A Nice Day!!!...\n");
        printf("\t...........................\n\n");
        break;
    }
    return 0;
}
