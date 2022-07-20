#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <unistd.h>




/////////////////  MINI COMEDK GK QUIZ CODE////////////////////////////////////




void quiz()
{
    int s,c,i,t,d,x,r,b,qzres,y,k,e;
    time_t start,end;
    i=0;x=0;
    printf("                                          *********************************************\n\n");
    printf("                                             Welcome to our very own mini COMEDK Quiz!!\n\n");
    printf("                                          *********************************************\n\n");
    printf("\n\n\n!!!!  Tired of all those same old boring PCM questions??  !!!!\n!!!!   Test your General Knowledge skills and you stand a chance to win a scholarship to one of the top clleges in Bangalore  !!!!\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n1.This quiz consists of 15 questions\n2.25 seconds will be given to answer the first 5 questions\n3.30 seconds for the nxt five and 20 seconds each will be given for the last five\n4.The longer you take the less questions you will be able to answer\nFor the last 5 questions, the questions exceeding the time limit will be counted as incorrect\n6.Each correct answer gives you +4 marks while each wrong answer gives -1 marks\n");
    printf("\n\nPRESS 1 TO CONTINUE\n");
    printf("\nTO EXIT THE GAME PRESS 0\n");
    scanf("%d",&s);
    if(s==1)
    {
		printf ("\nQ1) International Literacy Day is observed on ?");
        printf ("\n[1] SEP 8 \n[2] NOV 28 \n[3] MAY 2 \n[4] SEP 22\n");
		start=time(NULL);
		scanf("%d",&c);
		if(c==1)
		i++;
		printf("\nQ2) The language of Lakshadweep, a Union Territory of India is ?");
        printf ("\n[1] TAMIL \n[2] HINDI \n[3] MALYALAM \n[4] TELUGU\n");
        scanf("%d",&c);
        if(c==3)
        i++;
		printf("\nQ3) In which group of places Kumbha Mela is held every twelve years ?");
        printf("\n[1] UJJAIN,PURI,PRAYAG,HARIDWAR \n[2] PRAYAG,HARIDWAR,UJJAIN,NASIK \n[3] RAMESHWARAM,PURI,BADRINATH,DWARIKA \n[4] CHITTRAKOOT,UJJAIN,BADRINATH,DWARIKA\n");
        scanf("%d",&c);
        if(c==2)
        i++;
        printf ("\nQ4) Bahubali festival is related to ?");
        printf ("\n[1] ISLAM \n[2] HINDUISM \n[3] BUDDHISM \n[4] JAINISM\n");
        scanf("%d",&c);
        if (c==4)
        i++;
        printf ("\nQ5) Which day is observed as the World's Standard Day ?");
        printf ("\n[1] JUNE 26 \n[2] OCT 14 \n[3] NOV 15 \n[4] DEC 2\n");
        scanf("%d",&c);
        end=time(NULL);
        if(c==2)
        i++;
        d=difftime(end,start);
        if(d>20)
        {
            printf("Too slow dude that's it\nYou can't answer more questions!!\n");
            t=(i*4)+((5-i)*-1);
            printf ("\nThankyou for taking the quiz\nYour total score is %d out of 40",t);
        }
        else
        {
            printf ("\nQ6) Who was the first Indian Scientist to win a Noble Prize ?");
            printf ("\n[1] CV RAMAN \n[2] AMARTYA SEN \n[3] HARGOBIND KHORANA \n[4] SUBRAMANIAN CHANDRASHEKHAR\n");
            start=time(NULL);
            scanf("%d",&c);
            if(c==1)
            i++;
            printf ("\nQ7) Which player has scored the most ducks in international cricket ?");
            printf ("\n[1] MUTTIAH MURALITHARAN \n[2] JAMES ANDERSON \n[3] COURTNEY WALSH \n[4] BRETT LEE\n");
            scanf("%d",&c);
            if(c==1)
            i++;
            printf ("\nQ8) Which of the following is/are the symptoms of Black Fungus ?\n1. Facial Swelling\n2. Nasal Congestion\n3. Headache");
            printf ("\n[1] Only 1 \n[2] Only 2\n[3] Both 2 and 3\n[4] 1,2 and 3\n");
            scanf("%d",&c);
            if(c==4)
            i++;
            printf ("\nQ9) Author of Around the World in Eighty Days");
            printf ("\n[1] WILLIAM SHAKESPEARE \n[2] B. RICHARD \n[3] V. S. NAIPAUL\n[4] D. JULES VERNE\n");
            scanf("%d",&c);
            if(c==4)
            i++;
            printf ("\nQ10) Who wrote the Book Gandhi and Stalin");
            printf ("\n[1] RAJ NARAYAN \n[2] LOUIS FISHER \n[3] V. S. NAIPAUL\n[4] C. ANITA DESAI\n");
            scanf("%d",&c);
            end=time(NULL);
            if(c==2)
            i++;
            d=difftime(end,start);
            if(d>30)
            {
                printf("Well played but a little slow\nYou can't progress to next round\n");
                t=(i*4)+((5-i)*-1);
                printf ("\nThankyou for taking the quiz\nYour total score is %d out of 60",t);
            }
            else
            {
               printf ("\nQ11) The Concept of written constitution, first born was in ?");
               printf ("\n[1] UK \n[2] USA \n[3] FRANCE\n[4] ITALY\n");
               start=time(NULL);
               scanf("%d",&c);
               end=time(NULL);
               d=difftime(end,start);
               if(d>20)
               x++;
               else if(c==2)
               i++;
               printf ("\nQ12) Abdul Kalam Azad became the ____ President of India. ?");
               printf ("\n[1] 9th \n[2] 10th \n[3] 11th \n[4] 12th \n");
               start=time(NULL);
               scanf("%d",&c);
               end=time(NULL);
               d=difftime(end,start);
               if(d>20)
               x++;
               else if(c==3)
               i++;
               printf ("\nQ13) The jurisdiction covering the Andaman and Nicobar islands falls under the supervision of __: ?");
               printf ("\n[1]  A circuit bench of the Bombay High Court at Port Blair \n[2]  A circuit bench of the Madras High Court at Port Blair \n[3]  A circuit bench of the Calcutta High Court at Port Blair \n[4]  A circuit bench of the Supreme Court of India at Port Blair \n");
               start=time(NULL);
               scanf("%d",&c);
               end=time(NULL);
               d=difftime(end,start);
               if(d>20)
               x++;
               else if(c==3)
               i++;
               printf ("\nQ14) Where did British first open their factories in Eastern part of India ?");
               printf ("\n[1] Assam \n[2] Orissa \n[3] Bihar \n[4] Sikkim \n");
               start=time(NULL);
               scanf("%d",&c);
               end=time(NULL);
               d=difftime(end,start);
               if(d>20)
               x++;
               else if(c==2)
               i++;
               printf ("\nQ15) During the colonial rule in India, the Permanent Settlement was introduced by ?");
               printf ("\n[1]  Lord Bentick \n[2]  Lord Cornwallis \n[3]  Lord Curzon \n[4]  Lord Wellesely \n");
               start=time(NULL);
               scanf("%d",&c);
               end=time(NULL);
               d=difftime(end,start);
               if(d>20)
               x++;
               else if(c==2)
               i++;
               t=(i*4)+((5-i)*-1)+(x*-1);
               printf ("\nThankyou for taking the quiz\nYour total score is %d out of 60\n",t);
            }
        }
        k=60;
        r=0;
        while(k!=t)
        {
            r+=167;
            k--;
        }
        if(t==60)
        printf("Based on your marks you have secured 1 rank\n");
        if(t==0)
        printf("Based on your marks you haven't secured any rank\n");
        else
        printf("Based on your marks you have secured %d rank\n",r);
        while(1)
        {
        printf("Here are the list of colleges from which you can choose\n");
        printf("1. R.V. College of Engineering\n2. B.M.S. College of Engineering\n3. M.S. Ramaiah Institute of Technology\n4. Bangalore Institute of Technology\n");
        scanf("%d",&c);
        printf("Choose Branch\n1. Computer Science Engineering\n2. Information Science Engineering\n3. Electronics and Communication Engineering\n4. Mechanical Engineering\n5. Civil Engineering");
        scanf("%d",&b);
        if(c==1)
        {
            switch(b)
            {
            case 1: if(r<=500)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 2: if(r<=700)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 3:if(r<=1000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 4:if(r<=2500)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 5:if(r<=5000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            }
        }
        else if(c==2)
        {
            switch(b)
            {
            case 1: if(r<=600)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 2: if(r<=900)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 3: if(r<=1500)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 4:if(r<=3000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 5:if(r<=6000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            }
        }
        else if(c==3)
        {
            switch(b)
            {
                case 1: if(r<=1200)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 2: if(r<=1500)
             {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 3: if(r<=2000)
             {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 4:if(r<=5000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 5:if(r<=7000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            }
        }
        else if(c==4)
        {
            switch(b)
            {
                case 1: if(r<=2500)
                 {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 2:
            if(r<=3000)
             {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 3: if(r<=5000)
             {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 4:if(r<=8000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            case 5:if(r<=10000)
            {
            y=1;
            break;
            }
            else
            {
            y=0;
            break;
            }
            }
        }
        if(y==1)
        {
            printf("Congratulations you have been alloted this college and this branch\n");
            printf("\nTO EXIT THE GAME PRESS 0\n");
            scanf("%d",&qzres);
            if(qzres==0)
            break;
        }
        else if(y==0)
        printf("Sorry based on your rank we can't allot this branch\nTry a different college or branch\n");
        }
        printf("TO EXIT THE GAME PRESS 0\n");
        scanf("%d",&e);
        exit;
    }
    else if(s==0)
    exit;
}








///////////////////CASINO CODE//////////////////////////







int rnd (int *);

void casino ();

void start_timer ();
void NumbersCr(int);
 
int

rnd (int *bal) 
{
  
int guess, CASHOUT,rnv;
  
for (int r = 0; r < 6; r++)
    
    {
      
printf ("\nENTER THE NUMBER FOR BET BETWEEN 1-6 \n");
      
scanf ("%d", &guess);
  rnv=(rand () % 6)+1;
  printf("\n");
   NumbersCr(rnv);
if (guess == rnv)
	
	{
	  *bal = *bal + (*bal * 0.1);
	  printf("\n!!!!!!!!!!!!!     CORRECT GUESS     !!!!!!!!!!!!!\n");
	}
      
      else
	
	{
	  *bal = *bal - 10;
	   printf("\n!!!!!!!!!!!!!     WRONG GUESS     !!!!!!!!!!!!!\n");
	}
    
}
  
printf ("\nTHIS ROUND ENDS\n\n");
  
printf ("\nBALANCE AMOUNT IN WALLET = %d\n", *bal);
  
printf
    ("\nIF YOU WANT TO CASHOUT PRESS 0\nTO ENTER IN NEXT ROUND PRESS 1\n");
  
scanf ("%d", &CASHOUT);
  
if (*bal > 0 && CASHOUT == 1)
    {
      return 1;
    }
  
  else
    {
      return 0;
    }

}


 
 
void
start_timer () 
{
  
int icounter = 4;
  
while (icounter != 0)
    
    {
      
printf ("%d\n", icounter);
      
icounter--;
      
sleep (1);
      
system ("clear");
    
}
  
printf ("\nGAME BEGINS !!!!!!!!!!! ");

}





void                                                     // CALL THIS FUNCTION FROM MAINS TO RUN THIS GAME
casino ()                                                //YOU ONLY HAVE TO CALL THIS FUNCTION ONLY
{
  
int se, wal, gb, flag = 0, nr = 1, res, temp;
  
printf ("\n                                                         WELCOME TO CASINO       \n");
  
 
printf ("\n\n\n                                                         RULES FOR THE GAME\n\n\n");
  
printf ("1.YOU ENTER THE AMOUNT IN YOUR WALLET --- MAX LIMIT 500\n");
  
printf ("2.YOU WILL BE ASKED TO SELECT A NUMBER BETWEEN 0-6\n");
  
printf
    ("3.IF THE NUMBER ADDED BY YOU MATCHES WITH NUMBER ON DICE YOU WILL GET 10 PERCENT INCREMENT ON YOUR CURRENT WALLET AMOUNT\n");
  
printf ("4.IF IT DOESNT MATCH YOU LOOSE 10 CREDITS\n");
  
printf ("5.GAME CONSISTS OF ROUNDS --- EACH ROUND HAS 6 TRIALS\n");
  
printf
    ("6.YOU CAN EXIT FROM THE GAME ANY TIME BY PRESSING  '0'  AT END OF ANY ROUND\n");
  
 
printf
    ("\n\n\n       IF YOU ARE READY TO BEGIN PRESS 1\n       PRESS 2 TO END THE GAME\n");
  
scanf ("%d", &se);
  
if (se == 1)
    
    {
      
printf ("\n");
      
start_timer ();
      
printf ("\nENTER THE AMOUNT IN YOUR WALLET\n");
      
scanf ("%d", &wal);
      
printf ("\nYOUR WALLET BALANCE =   %d\n", wal);
      
temp = wal;
      
 
while (nr != 0)
	
	{
	  
printf ("\nROUND BEGINS \n");
	  
nr = rnd (&wal);
	
 
}
      
if (wal <= 0)
	
	{
	  
printf ("\n\n*************************** ):  YOU WENT BANKRUPT :(   ********************************\n");
	  
printf ("\nTO RESTART THE GAME PRESS 1 \nPRESS 0 TO EXIT\n");
	  
scanf ("%d", &res);
	
}
      
      else
	
	{
	  
if (wal > temp)
	    {
	      
printf ("\n\nYOU EARNED A PROFT OF   =  %d", (wal - temp));
	    
}
	  
	  else
	    {
	      printf ("\n\nYOU LOST   =  %d", (temp - wal));
	    }
	  
printf ("\n\n                                                         THANKS FOR PLAYING          \n\n\n\n\n");
	  
printf ("\nTO RESTART THE GAME PRESS 1 \nPRESS 0 TO EXIT\n");
	  
scanf ("%d", &res);
	
}
      
if (res == 1)
	
	{
	  casino ();
	}
      
      else
	{
	  exit;
	}
    
}
  
 
  else
    
    {
      
printf ("\n                                                         WISE DESCISION \n\n\n\n\n\n");
     
exit;
    
}

 
}



void NumbersCr(int Type){
if(Type == 1){
printf("\n");
printf("   _ \n");
printf(" /' \\\n");
printf("/\\_, \\\n");
printf("\\/_/\\ \\\n");
printf("   \\ \\ \\\n");
printf("    \\ \\_\\\n");
printf("     \\/_/\n");
}else if(Type ==2){
printf("\n");
printf("   ___\n");
printf(" /'___`\\\n");
printf("/\\_\\ /\\ \\\n");
printf("\\/_/// /__\n");
printf("   // /_\\ \\\n");
printf("  /\\______/\n");
printf("  \\/_____/\n");

}else if(Type == 3){
printf("\n");
printf("   __ \n");
printf(" /'__`\\\n");
printf("/\\_\\L\\ \\\n");
printf("\\/_/_\\_<_\n");
printf("  /\\ \\L\\ \\\n");
printf("  \\ \\____/\n");
printf("   \\/___/ \n");

}else if(Type == 4){
printf("\n");
printf(" __ __  \n");
printf("/\\ \\\\ \\ \n");
printf("\\ \\ \\\\ \\   \n");
printf(" \\ \\ \\\\ \\_  \n");
printf("   \\/_/\\_\\_/\n");
printf("      \\/_/  \n");
}else if(Type == 5){
printf("\n");
printf(" ______  \n");
printf("/\\  ___\\  \n");
printf("\\ \\ \\__/   \n");
printf(" \\ \\___``\\ \n");
printf("  \\/\\ \\_\\ \\\n");
printf("   \\ \\____/\n");
printf("    \\/___/ \n");
}else if(Type == 6){
 printf("\n");
printf("  ____    \n");
printf(" /'___\\   \n");
printf("/\\ \\__/   \n");
printf("\\ \\  _``\\ \n");
printf(" \\ \\ \\_\\ \\\n");
printf("  \\ \\____/\n");
printf("   \\/___/ \n");

}
}




////////////////////////          MATHS TIMER QUIZ                        //////////////////////////////////





void countdown_qz(int start)

    
{
   
   //printf("enter the value of start\n");
  // scanf("%d",&start);
   while(start!=0)
   {
       printf("\n\t0:0:%d",start);
       start--;
       sleep(1);
       system("clear");

   } 
   printf("\nTIME ****** UP");


   }

void timer_maths_quiz()
{
int ans,marks=0;
printf("*************************************************************************************************************************************\n");
printf("\n                                                         WELCOME TO MENTAL MATHS\n\n\n");
printf("INSTRUCTIONS:\n\n");
printf("1.This is a memory game\n2.You are given 3 mental maths questions\n3.Question would be on your screen for 3 seconds\n4.Look at the question carefully and answer it after solving in your notebook\n  You would be given 5 seconds for same\n\n");
printf("*************************************************************************************************************************************\n\n");
sleep(10);
printf(" Q1.solve   (2*3)+8/2 \n ");
sleep(5);

//printf("");


 countdown_qz(5);
 printf("\nAns.");
 scanf("%d",&ans);
 if(ans==10)
 {
     printf("\n\n********  CORRECT ANSWER   ********\n");
     marks=marks+3;
     }
     else {
         printf("\n\n!!!!!!!!!  WRONG ANSWER  !!!!!!!!!\n");
         marks=marks-1;
     }
sleep(2);
system("clear");    
printf(" Q2.solve   (6*3)+8/8 \n ");
sleep(5);

//printf("");


 countdown_qz(5);
 printf("\nAns.");
 scanf("%d",&ans);
 if(ans==19)
 {
     printf("\n\n********  CORRECT ANSWER   ********\n");
     marks=marks+3;
     }
     else {
         printf("\n\n!!!!!!!!!  WRONG ANSWER  !!!!!!!!!\n");
         marks=marks-1;
     }
sleep(2);     
system("clear");    
printf(" Q3.solve   (45/9)*8/2 \n ");
sleep(5);

//printf("");


 countdown_qz(5);
 printf("\nAns.");
 scanf("%d",&ans);
 if(ans==20)
 {
     printf("\n\n********  CORRECT ANSWER   ********\n");
     marks=marks+3;
     }
     else {
         printf("\n\n!!!!!!!!!  WRONG ANSWER  !!!!!!!!!\n");
         marks=marks-1;
     }
     
    printf("\n\nYOUR MARKS ARE  =   %d",marks);
    int qr;
    printf("\n\nIF YOU WANT TO RESTART THE GAME PRESS 1\n");
    printf("\nTO EXIT THE GAME PRESS 0\n ");
    scanf("%d",&qr);
    if (qr == 1)
	
	{
	   system("clear");  
	   timer_maths_quiz();
	}
      
      else
	{
	  exit;
	}

}





/////////////////////////          SUDOKU 6X6                            ///////////////////////////////////




void sudoku66 ()
{
    
	char a[20][20]={{5,4,0,3,1,2},{3,2,1,5,0,4},{1,0,2,4,5,6},{4,6,5,0,2,3},{0,5,4,6,3,1},{6,1,3,2,4,0}};
    char f[20][20]={{5,4,6,3,1,2},{3,2,1,5,6,4},{1,3,2,4,5,6},{4,6,5,1,2,3},{2,5,4,6,3,1},{6,1,3,2,4,5}};
    printf("****************************************************************************************************************************************\n");
    printf("\n                                                  WELCOME TO   6 X 6    SUDOKU\n\n\n");
    printf("INSTRUCTIONS : \n\n");
    printf("1. You are given only 6 chances to solve\n");
    printf("2. Each row and column should have distinct elements\n");
    printf("3. You have to enter the number which  __  position should occupy\n");
    printf("4. Column and Row start from 1 to 6\n");
    printf("****************************************************************************************************************************************\n");
	printf("\n\nYour given sudoku problem is here :\n\n\n");

	for(int k=0;k<6;k++)
	{
	    printf("                                        ");
	for(int l=0;l<6;l++)
	{
	 if(a[k][l]==0)
	     {
	       	printf("  __");
		    printf("   |");
	     }
	     else
	     {
		printf("   %d",a[k][l]);
		printf("   |");
	     }
	}	printf("\n\n\n");
		
	
	}
	int num1,num2,number;
	for (int q=1;q<=6;q++)
	{	
	printf("\n\nEnter the Row and then Column you would like to fill ");
	printf("\n");
	scanf("%d%d",&num1,&num2);
	int s=0;
	int p=0;
	s=num1-1;
	p=num2-1;
	printf("The number YOU would  like to fill :\n");
	scanf("%d",&number);
	a[s][p]=f[s][p];
	if (f[s][p]==number)
	{
		for(int k=0;k<6;k++)
	{
	    printf("                                        ");
	for(int l=0;l<6;l++)
	{
	 if(a[k][l]==0)
	     {
	       	printf("  __");
		    printf("   |");
	     }
	     else
	     {
		printf("   %d",a[k][l]);
		printf("   |");
	     }
	}	printf("\n\n\n");
		
	
	}
}

	else 
	{ 
	printf("You got this one wrong\n");
	printf("Your answer: %d \n",number);
	printf("Correct answer:%d\n",f[s][p]);
	printf("\n");
		for(int k=0;k<6;k++)
	{
	    printf("                                        ");
	for(int l=0;l<6;l++)
	{
	 if(a[k][l]==0)
	     {
	       	printf("  __");
		    printf("   |");
	     }
	     else
	     {
		printf("   %d",a[k][l]);
		printf("   |");
	     }
	}	printf("\n\n\n");
		
	
	}
	
	}
}
int flag=1;
for(int g=0;g<6;g++)
{
	for(int k=0;k<6;k++)
	{
		if (a[g][k]==f[g][k])
		{
		
		flag=flag*1;
	}
		else
		{
		flag=flag*0;
	}
	}
	}
	if (flag==1)
{
printf("                       !!!!!!!!!!         Congrats you got all the right answers BOOYAH      !!!!!!\n\n");
printf("\n\n");
}
else
{
printf("                                    !!!!!!Sorry to say that you solved the SUDOKU wrong!!!!!!\n\n ");
printf("\n\n");
}
printf("THE ANSWER OF THIS SUDOKU WAS :\n\n");
	for(int y=0;y<6;y++)
	{
	    printf("                                        ");
	for(int z=0;z<6;z++)
	{
		printf("   %d",f[y][z]);
		printf("   |");
	}printf("\n\n\n");
    }

printf("\n\nTO RESTART THE GAME PRESS 1");
printf("\nTO EXIT THE GAME PRESS 0\n");
int re66;
scanf("%d",&re66);
      
if (re66 == 1)
	
	{
	  sudoku66 ();
	}
      
    else if(re66 == 0)
	{
	  exit;
	}
}



////////////////////////          SUDOKU 3X3                             ///////////////////////////////




void three(){
    int  a[20][20]={{4,0,2},{3,5,0},{0,1,0}};
    int b[20][20]={{4,9,2},{3,5,7},{8,1,6}};
    int i,j,c,d,h,n,flag=0;
    printf("                                     *****************************************************\n");
    printf("                                     *****************************************************\n");
    printf("                                          ****   *   *   ****    ****   *   *   *   *          \n");
    printf("                                          *      *   *   *   *   *  *   *  *    *   *      \n");
    printf("                                          ****   *   *   *   *   *  *   * *     *   *    \n");
    printf("                                             *   *   *   *   *   *  *   *  *    *   *              \n");
    printf("                                          ****   *****   ****    ****   *   *   *****                             \n");
    printf("                                     *****************************************************\n");
    printf("                                     *****************************************************\n\n\n");
    sleep(1);
    printf("                                     *****************************************************\n"); 
    printf("\t                             Fill the  matrix shown below with appropriate numbers\n");
    printf("                                     *****************************************************\n");
    sleep(1);
    printf("\n\n\n1.Here wherever 0 is shown you have to fill it with the most appropriate number\n\n");
    sleep(1);
    printf("2.YOU WILL BE GIVEN ONLY 4 TRIALS \n\n\n");
    sleep(1);
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf("%d  |",a[i][j]);
         }
         printf("\n");
     }
 while(h<4)
 {
     printf("\nEnter row(0-2) and coloumn(0-2) no.\n");
    scanf("%d%d",&c,&d);
    printf("\nEnter your response\n");
    scanf("%d",&n);
    if(n==b[c][d]){
    	printf("\n\n#### Correct Response ####\n\n");
    	sleep(1);
        a[c][d]=n;
        
    }
    else{sleep(1);
	printf("\n\t!!!! Wrong input the correct response is =  %d !!!!\n\n",b[c][d]);
	sleep(1);
     flag=flag+1;
      printf("*************\n");
      printf("strike %d\n\n",flag);
      printf("*************\n");
      sleep(1);
            a[c][d]=b[c][d];
        
        goto l1;
    }
    l1:
         for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            
             printf("%d  |",a[i][j]);
             sleep(1);
         }
         printf("\n");
     } 
  h++;      
 }
 sleep(1);
 printf("******************************\n");
 printf("\nYour %d responses were wrong\n\n",flag);
 printf("******************************\n");
 sleep(1);
 printf("\nThe correct matrix is: \n\n");
 for(i=0;i<3;i++){
     for(j=0;j<3;j++){
         printf("%d |",b[i][j]);
         sleep(1);
     } 
     printf("\n");
 }
 
 if(flag==0)
 {
 	printf("*********\n");
    printf(" You win\n");
    printf("*********\n");
 }
         

printf("\n\nTO RESTART THE GAME PRESS 1");
printf("\nTO EXIT THE GAME PRESS 0\n");
int s33res;
scanf("%d",&s33res);
   if (s33res == 1)
	
	{
	   system("clear");  
	   three();
	}
      
      else
	{
	  exit;
	}    
     
}  
  


/////////////////////////          MINESWEEPER                          /////////////////////////////////




void minesweeper()

{ 
 char a[20][20]={{'0','0','1','1','1','0'},{'1','2','3','*','1','0'},{'1','*','*','2','1','0'},{'1','2','2','1','1','1'},{'0','0','0','0','1','*'},{'0','0','0','0','1','1'}};
    char c[20][20]={{'$','$','$','$','$','$'},{'$','$','$','$','$','$'},{'$','$','$','$','$','$'},{'$','$','$','$','$','$'},{'$','$','$','$','$','$'},{'$','$','$','$','$','$'}};
   int i,j,b,d,h,score=0,d2,d3,d4;
   char y1,y2,y3;
   char t[20][20]={{'*','0'},{'1','2'}};
  char t1[20][20]={{'*','*'},{'2','2'}};
  printf("          ------------------------------------------------------------------------------------------------------------------\n");
  printf("          ------------------------------------------------------------------------------------------------------------------\n");
    printf("                ||     ||   \\\\\\\\\\  ||    ||  ******  ******  ||    /\\    ||  ****** ******  ||****|  ******  ||****|     \n");
    printf("                ||*   *||     \\    ||*   ||  **      **      ||   /  \\   ||  **     **      ||    |  **      ||    |          \n");
    printf("                || * * ||     \\    || *  ||  ****    ******  ||  /    \\  ||  ****   ****    ||____|  ****    ||____|      \n");
    printf("                ||  *  ||     \\    ||  * ||  **          **  || /      \\ ||  **     **      ||       **      ||\\           \n");
    printf("                ||     ||   \\\\\\\\\\  ||   *||  ******  ******  ||/        \\||  ****** ******  ||       ******  || \\__        \n");
  printf("          ------------------------------------------------------------------------------------------------------------------\n");
  printf("          ------------------------------------------------------------------------------------------------------------------\n");
  printf("Press   Y   to continue\n");
  scanf("%c",&y1);
  printf("\n");
  sleep(1);
  printf(" ---------------------------------------------------------------------------------------------------\n");
   printf("|  BEHIND $ THERE ARE 4 BOMBS LETS SEE HOW LONG CAN YOU GO WITHOUT STEPPING ON THEM                |\n");
   printf("|  THERE ARE ALSO NUMBERS BEHIND THEM WHICH INDICATE THE No. OF MINES AROUND THAT PARTICULAR BOX  |\n");
   printf("----------------------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Press 1 to continue to see an example\n");
    scanf("%d",&d2);
    printf("\n");
   printf("Example :\n");
   for(i=0;i<2;i++)
   {
       
       for(j=0;j<2;j++)
       {
           printf("%c |",t[i][j]);
       }
       printf("\n");
   }
   printf("\n\n");
   printf("****************************************************\n");
   sleep(1);
    for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           printf("%c |",t1[i][j]);
       }
       printf("\n");
   }
   printf("Press any no. to continue\n");
   scanf("%d",&d4);
   system("clear");
   sleep(2);
   printf("\n\n\n");
   printf("\t\t                                             -------GOOD LUCK-------\n");
   printf("\t\t                                 ****************************************************\n");
   printf("\t\t                                 ****************************************************\n\n");
     printf("\t\t                                               Press 9 to play\n");
     sleep(1);
    
  scanf("%d",&d3);
   system("clear");
   printf("\n\n");
for(i=0;i<6;i++)
{
     printf("                                        ");
    for(j=0;j<6;j++)
    {
        printf("   %c",c[i][j]);
        	printf("   |");
    }
    printf("\n\n\n");
}


even:printf("\n");
printf("Enter row no.(0-5) ,and coloumn no (0-5).\n");
scanf("%d%d",&b,&d);
score=score+100;
printf("\n");
printf("                                                         ***************\n");
printf("                                                           *score :%d*\n",score);
printf("                                                         ***************\n");
printf("\n");
printf("\n");

if(a[b][d]=='0'||a[b][d]=='1'||a[b][d]=='2'||a[b][d]=='3')
{
    c[b][d]=a[b][d];
    
    for(i=1;i<3;i++)
    {
        if(a[b+i][d]!='*')
        {
             c[b+i][d]=a[b+i][d];
        }
        if(a[b][d+i]!='*')
        {
             c[b][d+i]=a[b][d+i];
        } 
    }
    
    
    for(i=0;i<6;i++)
    {
         printf("                                        ");
    for(j=0;j<6;j++)
     {
        printf("   %c",c[i][j]); 
      	printf("    ");
     }
    printf("\n\n\n");
    }

goto even;
}

if(a[b][d]=='*')
{
    
    for(i=0;i<6;i++)
    {
         printf("                                        ");
        for(j=0;j<6;j++)
        {
            if(a[i][j]=='*')
            {
                c[i][j]=a[i][j];
            }
            
            
           printf("   %c",c[i][j]);
           printf("    ");	
        }
        printf("\n\n\n");
    }
    printf("                                          *********************************************\n");
    printf("                                            *YOU LOST THE GAME AND YOUR SCORE IS: %d *\n",score);
    printf("                                            *THE LOCATION OF BOMBS '*' ARE SHOWN ABOVE *\n");
    printf("                                          *********************************************\n");
}

printf("\n\nTO RESTART THE GAME PRESS 1");
printf("\nTO EXIT THE GAME PRESS 0\n");
int msres;
scanf("%d",&msres);
   if (msres == 1)
	
	{
	   system("clear");  
	   minesweeper();
	}
      
      else
	{
	  exit;
	}
}





////////////////////////           MENU FUNCTION                         /////////////////////////////////





void
menu ()
{
    int gc;
printf("                                          *********************************************\n\n");
printf("                                                      WELCOME TO MELA STORE  \n\n");
printf("                                          *********************************************\n\n\n\n\n");
printf("\n                                            1.TO PLAY CASINO PRESS 1\n");
printf("\n                                            2.TO PLAY MINI COMEDK GK QUIZ PRESS 2\n");
printf("\n                                            3.TO PLAY MATHS MENTAL QUIZ PRESS 3\n");
printf("\n                                            4.TO PLAY SUDOKU PRESS 4\n");
printf("\n                                            5.TO PLAY MINESWEEPER PRESS 5\n");





printf("\n\n0.TO EXIT THE GAME PRESS 0\n");
scanf("%d",&gc);
if(gc==1)
{
  system ("clear");  
  casino ();
  system ("clear");
  system ("clear");
  menu ();
}
else if(gc==2)
{
    system ("clear");
    quiz();
    system ("clear");
    menu ();
}
else if(gc==3)
{
    system ("clear");
    timer_maths_quiz();
    system ("clear");
    menu ();
}
else if(gc==4)
{
    system ("clear"); 
    printf("WHICH SUDOKU WOULD YOU LIKE TO PLAY \n");
    printf("TO PLAY 6 X 6   PRESS 1\n");
    printf("TO PLAY 3 X 3   PRESS 0\n");
    int si;
    scanf("%d",&si);
    if(si==1)
    {
        system ("clear");
        sudoku66 ();
        system ("clear");
        menu ();
    }
    else if(si==0)
    {
        system ("clear");
        three();
        system ("clear");
        menu ();
    }
}
else if(gc==5)
{
    system ("clear");
    minesweeper();
    system ("clear");
    menu ();
}
else
{
    printf("\n\n                                                         THANKS FOR PLAYING \n\n");

  

}



///////////////////////              MAINS             /////////////////////////////////



int main()
{
    menu ();
    return 0;
}






