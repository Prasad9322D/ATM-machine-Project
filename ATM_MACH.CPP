	  #include<iostream.h>
	  #include<conio.h>
	       void main()
	       {
		clrscr();
		long bal=5000;
		long ch,am,dep,p,pin;
		cout<<"Enter a pin ";
		cin>>pin;
		  if(pin==9322)
		  {
		    clrscr();
		    goto label;
		  }
		  else
		  {
		   cout<<"You Enter wrong pin ";
		   goto exit;
		  }
		     label:
		cout<<"ATM Machine Options\n ";
		cout<<"Press 1 for Account balance check\n ";
		cout<<"Press 2 for Money deposite in account\n ";
		cout<<"Press 3 for Withdrawal money in account\n ";
		cout<<"Press 4 for your account information\n ";
		cout<<"Press 5 for clear screen \n";
		cout<<"Press 6 for Exit \n";
		cout<<"********************************************************************************"<<endl;
		cin>>ch;
		   switch(ch)
		      {
			 case 1:
			  if(bal>0)
			  {
			   cout<<"Your account balance is = "<<bal<<endl;
			  }
			  else
			  {
			   cout<<"Your account balance is 0 (please deposite the amount) "<<endl;
			  }
			  cout<<"********************************************************************************"<<endl;
			  goto label;
			   break;
			 case 2:
			   cout<<"Enter a deposite amount of your account ";
			   cin>>dep;
			   bal=dep+bal;
			   cout<<"After the depositing amount in your account is = "<<bal<<endl;
			   cout<<"********************************************************************************" <<endl;
			   goto label;
			   break;
			 case 3 :
			   cout<<"Enter a amount to withdrawal your account ";
			   cin>>am;
			   if(am<=bal)
			   {
			   bal=bal-am;
			   cout<<"After withdrawal your account balance is = "<<bal<<endl;
			   }
			   else
			   {
			   cout<<"your account balance is less the entered amount "<<endl;
			   }
			   cout<<"*******************************************************************************" <<endl;
			   goto label;
			   break;
			 case 4:
			   cout<<"Name:-Mr.prasad avinash deshmukh\n ";
			   cout<<"A/C no:- 919322209799 \n";
			   cout<<"IFSC no:- PAYTM0123456 \n ";
			   cout<<"a/c Type:- Saving account \n";
			   cout<<"Branch:- paytm payment bank \n";
			   cout<<"Mobile no:- 9322209799 \n ";
			   cout<<"Address:- At post mandva ta washi di dharashiv 413507 \n ";
			   cout<<"Account balance is :- "<<bal<<endl;
			   cout<<"****************************************************************************" <<endl;
			   goto label;
			   break;
			 case 5:
			   clrscr();
			   goto label;
			   break;
			 case 6:
			   goto exit;
			 case 7:

			 default :
			 cout<<"You press wrong no "<<endl;
			 cout<<"*************************************************************************" <<endl;
			 goto label;
			 break;
		      }
		   exit:
		  getch();
		}