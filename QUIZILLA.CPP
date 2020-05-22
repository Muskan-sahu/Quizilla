 #include<stdio.h>
 #include<iostream.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 #include<stdlib.h>
 #include<string.h>


 //Global variable declaration  and assigning the values to them
 int counter=4,j;
 char*text, a,b,c,d;
 char*quest[50]={"who is thought to be the first man of the world?","Where is Bermuda triangle situated?","How many players do need in a cricket match?","Which blood group is universal recipient?","What is the unit of measurement of distance of two mass in the space?","According to Mahabharata,who was the father of chitrasena and vrishasena?","Who was the inventor of T.V?","Who was the inventor of Pen?","Who was the inventor of type writer","Which programming language was developed first time for computer?","Ozone plate is destroying regularly because of ....","who is the father of computer?","what is the capital of japan","According to hindu Mythology who is the Godness of wealth","who won the Euro cup 2008","which of the following is a network protocol?","The first large-scale computer ever developed is","LSI stands for","Microsecond is","What percentage of haemoglobin in RBC is found","The 16th SAARC summit was held at" };
 char*opta[50]={"Jesus","Near America","11","A","Columb","Arjuna","Marconi","Secail","Scail","Basic","LPG","Charlas Babbage","New Dheli","Mata Laxmi","England","TCP/IP","IBM701","Light Sensitive Instrument","Thousanth of a second","1.60%","colombo"};
 char*optb[50]={"Adam","Near w.indies","9","AB","Light year","Karna","J.L Bayard","Waterman","Waterman","FORTRON","Methain","Donald Chamberlain","Dhaka","Mata Saraswati","France","SPX/IPX","EDIVAC","Large-Scale Integration","Billionth of second","2.34%","kathmandu"};
 char*optc[50] ={"Rakshara","Near Africa","13","B","Nautical","Dhritarastra","Orvil","Pascal","Pascal","C","Nitrogen","C.J.Date","Colombo","Mata Parvati","Spain","NetBios","MarkII","Logical Sample Integration","Millionth of second","3.20%","Thimpu"};
 char*optd[50]={ " Socret"," Australia","22","O","Kilometer","Yudhishtira"," Addision","Farraday","Farraday","Cobol","CFC", " E.F.Codd","Tokyo","Mata Gaytri","Greece","All of them","ENIAC","None of Above","None of Above","4.42%","New Delhi"};
 char ans[50]={'b','b','a','d','b','b','b','b','a','d','d','a','d','a','c','d','d','b','c','b','c'};
 //Function declaration

void loginpage();
 void life(int );
 void instruction();
void wrong();
 void menu();
 void frontpage();
 void credit();
 void exit();
 void screen(void);
void total();
 void ques(void);
void congrats();
 void wel(void);
 void move(int,int);
 //starting of the main function
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph( &gd, &gm,"C:\\TC\\BGI");
setcolor(6);
settextstyle(4,0,7);
outtextxy(100,50,"Q");
delay(500);
outtextxy(140,90,"U");
delay(500);
outtextxy(180,130,"I");
delay(500);
outtextxy(220,170,"Z");
delay(500);
outtextxy(260,210,"I");
delay(500);
outtextxy(300,250,"L");
delay(500);
outtextxy(340,290,"L");
delay(500);
outtextxy(380,330,"A");
delay(500);
setcolor(2);
 outtextxy(100,50,"Q");
delay(500);
outtextxy(140,90,"U");
delay(500);
outtextxy(180,130,"I");
delay(500);
outtextxy(220,170,"Z");
delay(500);
outtextxy(260,210,"I");
delay(500);
outtextxy(300,250,"L");
delay(500);
outtextxy(340,290,"L");
delay(500);
outtextxy(380,330,"A");
delay(500);
setcolor(5);
settextstyle(2,0,7);
outtextxy(360,430,"Press Enter to continue");
getch();   loginpage();

closegraph();
}
   void loginpage()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
char *username,*password;



settextstyle(4,0,4);
setcolor(5);
outtextxy(135,30,"Quiz Management System");
setcolor(3);
settextstyle(3,0,4);
outtextxy(225,100,"Login Page");
settextstyle(3,0,1);
rectangle(270,170,420,195);
outtextxy(150,170,"USERNAME");
settextstyle(3,0,1);
rectangle(270,220,420,245);
outtextxy(150,220,"PASSWORD");
setcolor(7);
settextstyle(3,0,3);
rectangle(220,295,396,335);
gotoxy(35,12);
gets(username);
int i;
for(i=0;i<8;i++)
{
gotoxy(35+i,15);
password[i]=getch();
cout<<"*";
}
password[i]='\0';
if((strcmpi(username,"quizilla")==0)&&(strcmpi(password,"quizilla")==0))
{
while(!kbhit())
{
setcolor(2);
outtextxy(250,300,"continue");
delay(80);
setcolor(2);
outtextxy(250,300,"continue");
delay(200);
menu(); closegraph();
getch();}}
else
{
while(!kbhit())
{
setcolor(BLUE);
outtextxy(250,300,"incorrect");
delay(80);
setcolor(CYAN);
outtextxy(250,300,"incorrect");
delay(200);
exit();
closegraph();
}
}
closegraph();}
	//	starting of menu
	void menu()
	{
		int gd=DETECT,gm,a;
		initgraph(&gd,&gm,"C:\\TC\\BGI ");
		setbkcolor(9);


	      line(40,60,600,60);
	      line(40,110,600,110);

	      setfillstyle(SOLID_FILL,5);
	     settextstyle(1,0,4);
		floodfill(282,202,getmaxcolor());

		outtextxy(250,70,"MENU");
		setfillstyle(	SOLID_FILL,2);
		ellipse(280,200,0,360,100,20);
		floodfill(282,202,getmaxcolor());
		settextstyle(2,0,5);
			outtextxy(220,190,"START GAME");
		setfillstyle(	SOLID_FILL,4);
		ellipse(280,250,0,360,100,20);
		floodfill(282,252,getmaxcolor());
		settextstyle(2,0,5);
		outtextxy(220,240,"INSTRUCTION");
		setfillstyle(	SOLID_FILL,6);
		ellipse(280,300,0,360,100,20);
		floodfill(282,302,getmaxcolor());
		settextstyle(2,0,5);
		outtextxy(220,290,"CREDIT");
		setfillstyle(SOLID_FILL,8);
		ellipse(280,350,0,360,100,20);
		floodfill(282,352,getmaxcolor());
		settextstyle(2,0,5);
		outtextxy(220,340,"EXIT GAME");
		outtextxy(200,390,"PRESS ENTER TO START THE GAME");
		outtextxy(200,410,"PRESS SPACE TO VIEW THE INSTRUCTION");
		outtextxy(200,430,"PRESS TAB TO VIEW CREDIT");
		outtextxy(200,450,"PRESS ESC TO EXIT THE GAME");
		a=getch();
		cleardevice();
	  if(a==13)
	  {
			wel();
		}
	  else if(a==32)
	  {
			instruction();
		}
	  else if(a==9)
	  {
			credit();
		}
	  else if(a==27)
	  {
			 exit();
			 }  }
  //end of menu
 //start of the frontpage

	 void frontpage()
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI ");
		rectangle(10,20,100,60);
		rectangle(15,25,95,55);
		line(55,25,55,55);
	 }
	//END OF FRONTPAGE
  //start of the instruction
	 void instruction()
	 {
			int gd=DETECT,gm;
			initgraph(&gd,&gm,"c:\\tc\\bgi");

			line(15,10,622,10);
line(15,10,15,466);
line(15,466,622,466);
line(622,466,622,10);
line(25,20,611,20);
line(25,20,25,455);
line(25,455,611,455);
line(611,455,611,20);
while(!kbhit()){




	settextstyle(3,0,7);
	setcolor(15);
		setbkcolor(BLUE);
  rectangle(220,90,370,50);

	      setfillstyle(SOLID_FILL,13);
	     settextstyle(2,0,8);
		floodfill(282,202,getmaxcolor());

outtextxy(250,70,"INSTRUCTIONS");



setcolor(15);
settextstyle(3,0,8);
outtextxy(150,150,"1.Four options are given for each questions");
outtextxy(150,170,"2.Players have to select one option among 4 options");
outtextxy(150,190,"3.Players have to select the answer by" );
outtextxy(150,210,"pressing a,b,c and d");
outtextxy(150,230,"4.There will be no negative marking");
outtextxy(150,250,"5.If question is right, counter will");
outtextxy(150,270,"increase by 4");
int a;
a=getch();
if(a==13)
{menu();
getch();} }
closegraph();
getch();}

		 void credit()
		 {
			int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI "); setbkcolor(11);
while(!kbhit()){
setcolor(12);
settextstyle(1,0,7);
outtextxy(200,50,"CREDIT");
setcolor(1);
settextstyle(2,0,6);
outtextxy(150,140,"SHRI VAISHNAV VDHYAPEETH VISHWVIDHALAYA");
settextstyle(2,0,5);
setcolor(1);

outtextxy(150,170,"The Project name is QUIZILLA (Quiz contest)");
outtextxy(150,190,"and the members for this project are:");
outtextxy(150,210,"1.Anmol Gupta");
outtextxy(150,230,"2.Mansi Maloo");
outtextxy(150,250,"3.Kalash Jain");
outtextxy(150,270,"4.Kushangi Nagar");
outtextxy(150,290,"5.Muskan Rathode");
outtextxy(150,310,"6.Prajjval Pathak");
outtextxy(150,330,"7.Muskan Sahu");
int a;
a=getch();
if(a==13)
{menu();
getch();
}}closegraph();
getch();
}

		// start of exit
	 void exit()
		 {
			int gd=DETECT,gm;
			initgraph(&gd,&gm,"C:\\TC\\BGI ");
		setcolor(5);
settextstyle(4,0,7);
outtextxy(100,50,"T");
delay(500);
outtextxy(140,90,"H");
delay(500);
outtextxy(180,130,"A");
delay(500);
outtextxy(220,170,"N");
delay(500);
outtextxy(260,210,"K");
delay(500);
outtextxy(300,260,"Y");
delay(500);
outtextxy(340,300,"O");
delay(500);
outtextxy(380,340,"U");
delay(500);
setcolor(13);
 outtextxy(100,50,"T");
delay(500);
outtextxy(140,90,"H");
delay(500);
outtextxy(180,130,"A");
delay(500);
outtextxy(220,170,"N");
delay(500);
outtextxy(260,210,"K");
delay(500);
outtextxy(300,260,"Y");
delay(500);
outtextxy(340,300,"O");
delay(500);
outtextxy(380,340,"U");
delay(500);
			 }

		 //end of the exit
		  void wel(void)
		  {
		setbkcolor(9);
	  settextstyle(0,0,3);
      for(int i=4;i<=7;i++)
      {setcolor(i);

      outtextxy(100,150,"WELCOME TO THE QUIZ" );
     delay(1000);}
   settextstyle(3,0,1);
    outtextxy(300,450,"Press Enter To continue");
     int a;
     a=getch();
     if(a==13) { screen();}  }

		void screen(void)
		{      label:
		     int gd=DETECT,gm;
		    initgraph(&gd,&gm,"C:\\TC\\BGI ");
			 int a;
		       setbkcolor(0);

			delay(500);
			setcolor(1);
		int arr[]={290,80,370,200,220,300,290,80};

			delay(500);

		fillpoly(4,arr);  	setcolor(3);
			settextstyle(0,0,3);
		for(int i=4;i<=6;i++) {setcolor(i);
			outtextxy(210,170,"Quizilla");
				delay(1000);
				}


					rectangle(20,320,615,470);
				//Questions



		setcolor(5);
				rectangle(25,325,610,375);
	setcolor(1);
	settextstyle(0,0,1);
	outtextxy(200,350,"");
	outtextxy(50,405,"A.");
	outtextxy(350,405,"B.");
	outtextxy(50,445,"C.");
	outtextxy(350,445,"D.");


	setcolor(11);

			//A. Answer
			line(50,400,40,410);
			line(50,420,40,410);

			line(50,400,270,400);
			line(50,420,270,420);

			line(270,400,280,410);
			line(270,420,280,410);

			//B. Answer
			line(350,400,340,410);
			line(350,420,340,410);

			line(350,400,570,400);
			line(350,420,570,420);

			line(570,400,580,410);
			line(570,420,580,410);

			//C. Answer
			line(50,440,40,450);
			line(50,460,40,450);

			line(50,440,270,440);
			line(50,460,270,460);

			line(270,440,280,450);
			line(270,460,280,450);

			//D. Anwer
			line(350,440,340,450);
			line(350,460,340,450);

			line(350,440,570,440);
			line(350,460,570,460);


			line(570,440,580,450);
			line(570,460,580,450);
			delay(1000);

			//defination of ques function with questions collection




				char opt,c;   int num;
				int x=275,y=293;  int temp[22];
				randomize();
				for(  i=0;i<12;i++)
				{

						for(;;)
						{

							num=rand()%22;
							temp[i]=num;
							for(int k=0;k<i;k++)
							{
								if(temp[k]==num) {
								break;
							}   }
						if(k==i)
						break;
						}


					 setcolor(9);
					 settextstyle(2,0,4);

				outtextxy(65,350,quest[num]);
					 delay(1000);
					 outtextxy(70,405,opta[num]);
					 delay(1000);
					 outtextxy(370,405,optb[num]);
					 delay(1000);
					 outtextxy(70,445,optc[num]);
					 delay(1000);
					 outtextxy(370,445,optd[num]);
					 delay(1000);


					 c=getch();
					 if(c=='l')
					 {
					 life(num);
					 }
					 else
					 {
					 opt=c;
					 goto bottom;
					 }

					opt=getch();
					bottom:







					setcolor(0);

					 if(ans[num]==opt)
					 {

							x=x-23;
							y=y-23;
								while(!kbhit())
								{
									if(opt=='a')
									{
										setfillstyle(SOLID_FILL,2);
										floodfill(60,410,11);
										delay(100);
										setfillstyle(SOLID_FILL,14);
										floodfill(60,410,11);
										delay(100); congrats();
									  }  //end of 'a'
							else if(opt=='b')
							{
								setfillstyle(SOLID_FILL,2);
								floodfill(360,410,11);
								delay(100);
								setfillstyle(SOLID_FILL, 14);
								floodfill(360,410,11);
								delay(100);  congrats();

								}//end of 'b'
						else if(opt=='c')
						{
							setfillstyle(SOLID_FILL,2);
							floodfill(60,450,11);
							delay(100);
							setfillstyle(SOLID_FILL, 14);
							floodfill(60,450,11);
							delay(100);congrats();

									}     //end of 'c'
							else if(opt=='d')
							{

								setfillstyle(SOLID_FILL,2);
								floodfill(360,450,11);
								delay(100);
								setfillstyle(SOLID_FILL, 14);
								floodfill(360,450,11);
								delay(100);
							congrats();
									  }total();
									  //end of 'd'
					   } //end of while
							setfillstyle(SOLID_FILL,0);
							floodfill(60,410,11);
							delay(1000);
							setfillstyle(SOLID_FILL,0);
							floodfill(60,450,11);
							setfillstyle(SOLID_FILL,0);
							floodfill(360,410,11);
							delay(1000);
							setfillstyle(SOLID_FILL,0);
							floodfill(360,450,11);
							delay(1000);
							 }   //end of if
				else
				{
				setcolor(13);
					if(opt=='a')
					{
						setfillstyle(SOLID_FILL,4);
						floodfill(60,410,11);
						delay(2000);
						settextstyle(0,0,3);
						outtextxy(270,250,text);
						delay(2000);
						goto label;
						}

					else if(opt=='b')
					{
						setfillstyle(SOLID_FILL,4);
						floodfill(360,410,11);
						delay(2000);
						settextstyle(0,0,3);
						outtextxy(270,250,text);
						delay(2000);
						goto label;
					  }
					else if(opt=='c')
					{
						setfillstyle(SOLID_FILL,4);
						floodfill(60,450,11);
						delay(2000);
						settextstyle(0,0,3);
						outtextxy(270,250,text);
						delay(2000);
						goto label;


							}
					else if(opt=='d')
					{
							setfillstyle(SOLID_FILL,4);
							floodfill(360,450,11);
							delay(2000);
							settextstyle(0,0,3);
							outtextxy(270,250,text);
							delay(2000);
							goto label;
							}      total();
					}
				 setcolor(0);
				 outtextxy(65,350,quest[num]);
				 outtextxy(70,405,opta[num]);
				 outtextxy(370,405,optb[num]);
				 outtextxy(70,445,optc[num]);
				 outtextxy(370,445,optd[num]);
			getch();
			 }
						}
						void total()
						{int gd=DETECT,gm;
						initgraph(&gd,&gm," ");
						gotoxy(5,20);
						cout<<"Total Score:\t"<<j;
						getch();
						closegraph();
						}
				void move(int a,int b)
				{
					setcolor(15);
					rectangle(530,a,606,b);
				}

void congrats()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI ");
counter=0;
j=counter+4;
gotoxy(10,25);
cout<<"Score: "<<j;

getch();  screen();
    closegraph();
}
void wrong()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

gotoxy(36,25);
cout<<"your Score:"<<counter;
cout<<"Thank You For Visiting";
getch();
closegraph();
}
void life(int num)
{
while(!kbhit())
{
if(ans[num]=='a')
{
	setfillstyle(SOLID_FILL,2);
										floodfill(60,410,11);
}
else if(ans[num]=='b')
{
	setfillstyle(SOLID_FILL,2);
								floodfill(360,410,11);
}
else if(ans[num]=='c')
{
	setfillstyle(SOLID_FILL,2);
							floodfill(60,450,11);
}
else if(ans[num]=='d')
{
	setfillstyle(SOLID_FILL,2);
								floodfill(360,450,11);
}
}
}