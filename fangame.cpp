/*WELCOME TO THE GAME,IN THIS GAME YOU ARE SHOOTER
& YOU HAVE 9 TARGETS FOR EVERY SINGLE GAME FROM A-I ALL OF THEM CARRY POINTS=5, YOU HAVE ONLY 3 GAMES TO MAKE YOUR TOTAL SCORE OUT OF 60
TYPE a TO MOVE DOWNWARDS AND d TO SHOOT AND THEN ENTER


REQUIRE LUCK AS WELL AS SHARP EYES

YOU HAVE TOTAL 18 SHOTS IN the game ,REMEMBER-AS YOU COMPLETE YOUR 18 SHOTS THE GAME WILL AUTOMATICALLY OVER


ARE YOU READY TO PLAY THIS FANTASTIC GAME TYPE y
DEVELOPED BY RISHABH FOR COMPUTER PROJECT 2015-2016
*/
#include<iostream.h>
#include<conio.h>

char c=16;
char z=-79;

void shoot(int );
void arrow(int ,int );
void game(int , int , int );

void main()
{
 clrscr();char q,j;int f=0,i,t=1;
  cout<<"\n\n\n WELCOME TO THE GAME,IN THIS GAME YOU ARE SHOOTER\n & YOU HAVE 9 TARGETS FOR EVERY SINGLE GAME FROM A-I ALL OF THEM CARRY POINTS=5, YOU HAVE ONLY 3 GAMES TO MAKE YOUR TOTAL SCORE OUT OF 60\nTYPE a TO MOVE DOWNWARDS AND d TO SHOOT AND THEN ENTER\n\n\nREQUIRE LUCK AS WELL AS SHARP EYES";
  cout<<"\n\n YOU HAVE TOTAL 18 SHOTS IN the game ,REMEMBER-AS YOU COMPLETE YOUR 18 SHOTS THE GAME WILL AUTOMATICALLY OVER";
  cout<<"\n\n\n ARE YOU READY TO PLAY THIS FANTASTIC GAME TYPE y"<<endl<<"DEVELOPED BY RISHABH FOR COMPUTER PROJECT 2015-2016";
  q=getch();
  if(q=='y')
  { cout<<"GAME 1"<<endl<<endl;shoot(0);
    for(i=1;i<55;i++)
    {
     j=getch();
     if (j=='a')
     shoot(i);
     if (j=='d')
    {i--;t++;
     if(i==9||i==15||i==33||i==51)
     f+=5;
     arrow(i,f);}}clrscr();
    cout<<"GAME 2"<<endl<<endl;shoot(0);
     for(i=0;i<55;i++)
    {j=getch();
     if (j=='a')
     shoot(i);
     if (j=='d')
    {i--;t++;
     if(i==3||i==21||i==33||i==45)
     f+=5;
     arrow(i,f);}}game(3,f,t);
  }
   else
   cout<<"sorry";
   getch();
}

void shoot(int g)
{ clrscr();
  char d='A';int r;
   for(int i=0;i<55;i++)
 {  if(i<=g)
    {  cout<<c<<c;
     for(int j=0;j<51;j++)
     cout<<" ";
     if(i%6==0)
     for( r=0;r<9;r++)
     cout<<z;
     else if((i-3)%6==0)


     for(r=0;r<9;r++)
      {

        if(r==4)
       {cout<<d;d++;}
        else
        cout<<" ";
      }

     else
     for(r=0;r<9;r++)
      {
      if(r==0||r==8)
      cout<<z;
      else
      cout<<" ";
      }
    }
     else
     {  for(int j=0;j<53;j++)
     cout<<" ";
     if(i%6==0)
     for(int r=0;r<9;r++)
     cout<<z;
     else if((i-3)%6==0)

     for(r=0;r<9;r++)
      {

         if(r==4)
       {cout<<d;d++;}
        else
        cout<<" ";
      }

     else
     for(r=0;r<9;r++)
      {
      if(r==0||r==8)
      cout<<z;
      else
      cout<<" ";
      }}
   cout<<endl;
  }
}






void arrow(int g,int h)
{

   clrscr();

   char d='A';int r;
  for(int i=0;i<55;i++)
  {
    if(i<g)
    {cout<<c<<c;
     for(int j=0;j<51;j++)
     cout<<" ";
     if(i%6==0)
     for( r=0;r<9;r++)
     cout<<z;
     else  if((i-3)%6==0)


     for(r=0;r<9;r++)
      {

        if(r==4)
        d++;
        else
        cout<<" ";
      }
     else
     for(r=0;r<9;r++)
     {
      if(r==0||r==8)
      cout<<z;
      else
      cout<<" ";
     }
    }
    else if(i==g)
    {
       cout<<c<<c;
       if((i-3)%6==0)
       { for(r=0;r<59;r++)
         cout<<c;cout<<h;}
       else
      {cout<<"MISS HIT";
       for(r=0;r<43;r++)
       cout<<" ";

     for(r=0;r<9;r++)
      {
      if(r==0||r==8)
      cout<<z;
      else
      cout<<" ";
      }
     }
    }
        else
     { for(int j=0;j<53;j++)
     cout<<" ";
     if(i%6==0)
     for(int r=0;r<9;r++)
     cout<<z;
     else if((i-3)%6==0)

     for(r=0;r<9;r++)
     {

         if(r==4)
       {cout<<d;d++;}
        else
        cout<<" ";
      }

     else
     for(r=0;r<9;r++)
      {
      if(r==0||r==8)
      cout<<z;
      else
      cout<<" ";
      }
     }

      cout<<endl;

 }
}

void game(int g, int f,int t)
{ char n;int i;char j;
  clrscr();
  cout<<"GAME"<<g<<endl<<endl;shoot(0);
    for(i=1;i<55 && t<18;i++)
    {
     j=getch();
     if (j=='a')
     shoot(i);
     if (j=='d')
    {i--;t++;
     if(i==3||i==27||i==33||i==45)
     f+=5;
     arrow(i,f);}}

  cout<<"OH, FABULOUS YOUR SCORE IS "<<f<<" POINTS OUT OF 60"<<endl<<endl;
  cout<<"PRESS e to exit";
  cin>>n;
  if (n=='e')
  cout<<"DEVELOPED BY RISHABH FOR COMPUTER PROJECT 2015-2016";
}




