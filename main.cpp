#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<direct.h>
int count=0,temp=0,temp2=0,score=0,chance=5,radius=15;
int count1=0,count2=0,count3=0,count4=0,count5=0;
int count6=0,count7=0,count8=0,count9=0,count10=0;
int leftLine1=350,leftLine2=350,leftLine3=350,leftLine4=350;
int rightLine1=350,rightLine2=350,rightLine3=350,rightLine4=350;
int redLine1=350,redLine2=350,moveBall1=190,moveBall2=330;
char str[10];
int MoveBall()
{
    char check;
    if(kbhit())
    {
        check=getch();
        if(check==27)//27=esc
        {
            cleardevice();//clrscr=clears the screen and moves the cursor to the upper-left-hand corner of the screen
            setcolor(15);//15=white
            settextstyle(1,0,3);//settextstyle(front,direction,front_size);
            outtextxy(250,200,"YOUR SCORE");
            sprintf(str,"%d",score);
            outtextxy(295,253,str);
            return 1;
        }
        else if(check==75)
        {
            if(moveBall1>=110 && moveBall1<=490)
            {
                moveBall1-=5;
            }
        }
        else if(check==77)
        {
            if(moveBall1>=110&&moveBall1<=490)
            {
            	moveBall1+=5;
            }
        }
        else if(check==72)
        {
            if(moveBall2>=110&&moveBall2<=490)
            {
            	moveBall2-=5;
            }
        }
        else if(check==80)
        {
            if(moveBall2>=110&&moveBall2<=490)
            {
            	moveBall2+=5;
            }
        }
    }
  return 2;
}
void moveLine()
{
  setcolor(2);
  setlinestyle(0,0,3);
  /*for move left side line*/
  if(leftLine1>=60)
  {
    if(temp==0)
    {
      line(160,leftLine1,210,leftLine1);
      leftLine1--;
    }else
    {
      if(count1==50)
      {
	line(160,leftLine1,210,leftLine1);
	leftLine1--;
      }
    }
    if(leftLine1==300)
    {
      count2=100;
    }
    if(leftLine1==60)
    {
      leftLine1=350;
      score=score+5;
    }
  }
  if(leftLine2>=60)
  {
    if(count2==100)
    {
      line(130,leftLine2,180,leftLine2);
      leftLine2--;
    }
    if(leftLine2==300)
    {
      count3=150;
    }
    if(leftLine2==60)
    {
      leftLine2=350;
      score=score+5;
    }
  }
  if(leftLine3>=60)
  {
     if(count3==150)
     {
       line(210,leftLine3,260,leftLine3);
       leftLine3--;
     }
     if(leftLine3==300)
     {
       count4=200;
     }
     if(leftLine3==60)
     {
       leftLine3=350;
       score=score+5;
     }
  }
  if(leftLine4>=60)
  {
    if(count4==200)
    {
      line(180,leftLine4,230,leftLine4);
      leftLine4--;
    }
    if(leftLine4==300)
    {
      count1=50;
      temp=5;
    }else if(leftLine4==280)
    {
      count=5;
    }else if(leftLine4==290)
    {
      count9=50;
    }
    if(leftLine4==60)
    {
      leftLine4=350;
      score=score+5;
    }
  }
  /*for move right side line*/
  if(rightLine1>=60 && count==5)
  {
    if(temp2==0)
    {
      line(370,rightLine1,420,rightLine1);
      rightLine1--;
    }else
    {
       if(count5==50)
       {
	 line(370,rightLine1,420,rightLine1);
	 rightLine1--;
       }
    }
    if(rightLine1==300)
    {
      count6=100;
    }
    if(rightLine1==60)
    {
      rightLine1=350;
      score=score+5;
    }
  }
  if(rightLine2>=60)
  {
    if(count6==100)
    {
      line(320,rightLine2,370,rightLine2);
      rightLine2--;
    }
    if(rightLine2==300)
    {
      count7=150;
    }
    if(rightLine2==60)
    {
      rightLine2=350;
      score=score+5;
    }
  }
  if(rightLine3>=60)
  {
    if(count7==150)
    {
      line(420,rightLine3,470,rightLine3);
      rightLine3--;
    }
    if(rightLine3==300)
    {
      count8=200;
    }
    if(rightLine3==60)
    {
      rightLine3=350;
      score=score+5;
    }
  }
  if(rightLine4>=60)
  {
    if(count8==200)
    {
      line(390,rightLine4,440,rightLine4);
      rightLine4--;
    }
    if(rightLine4==300)
    {
      temp2=5;
      count5=50;
    }else if(rightLine4==290)
    {
      count10=100;
    }
    if(rightLine4==60)
    {
      rightLine4=350;
      score=score+5;
    }
  }
  /*for move red line*/
  if(redLine1>=60)
  {
    if(count9==50)
    {
      setcolor(4);
      line(200,redLine1,250,redLine1);
      redLine1--;
    }
    if(redLine1==60)
    {
      redLine1=350;
      score=score+10;
    }
  }
  if(redLine2>=60)
  {
    if(count10==100)
    {
      setcolor(4);
      line(400,redLine2,450,redLine2);
      redLine2--;
    }
    if(redLine2==60)
    {
      redLine2=350;
      score=score+10;
    }
  }
  //for ball movemenet
  if((moveBall1>=150 && moveBall1<=220)&&(leftLine1>=moveBall2&&leftLine1-20<=moveBall2))
  {
    moveBall2--;
  }
  else if((moveBall1>=130&&moveBall1<=190)&&(leftLine2>=moveBall2&&leftLine2-20<=moveBall2))
  {
    moveBall2--;
  }else if((moveBall1>=200&&moveBall1<=270) && (leftLine3>moveBall2 && leftLine3-20<=moveBall2))
  {
   moveBall2--;
  }else if((moveBall1>=170&&moveBall1<=240)&&(leftLine4>=moveBall2 && leftLine4-20<=moveBall2))
  {
    moveBall2--;
  }else if((moveBall1>=360&&moveBall1<=430) && (rightLine1>=moveBall2&&rightLine1-20<=moveBall2))
  {
    moveBall2--;
  }else if((moveBall1>=310&&moveBall1<=380)&&(rightLine2>=moveBall2&&rightLine2-20<=moveBall2))
  {
    moveBall2--;
  }else if((moveBall1>=410&&moveBall1<=480)&&(rightLine3>=moveBall2&&rightLine3-20<=moveBall2))
  {
   moveBall2--;
  }else if((moveBall1>=380&&moveBall1<=450)&&(rightLine4>=moveBall2&&rightLine4-20<=moveBall2))
  {
    moveBall2--;
  }else if((moveBall1>=190&&moveBall1<=260)&&(redLine1>=moveBall2&&redLine1-20<=moveBall2))
  {
    radius=-1;
    moveBall1=-1;
    moveBall2=-1;
    chance=chance-1;
  }else if((moveBall1 >= 390&&moveBall1 <= 460)&&(redLine2 >= moveBall2&&redLine2-20 <= moveBall2))
  {
    radius=-1;
    moveBall1=-1;
    moveBall2=-1;
    chance=chance-1;
  }
  else if(moveBall2 >= 70)
  {
   moveBall2++;
  }
  if((radius==-1&&moveBall1==-1&&moveBall2==-1)&&(leftLine1 <= 330&&leftLine1 >= 150))
  {
    radius=15;
    moveBall1=180;
    moveBall2=leftLine1-20;
  }else if((radius==-1&&moveBall1==-1&&moveBall2==-1)&&(leftLine2 <= 330&&leftLine2 >= 150))
  {
    radius=15;
    moveBall1=150;
    moveBall2=leftLine2-20;
  }else if((radius==-1&&moveBall1==-1&&moveBall2==-1)&&(leftLine3 <= 330&&leftLine3 >= 150))
  {
    radius=15;
    moveBall1=230;
    moveBall2=leftLine3-20;
  }else if((radius==-1&&moveBall1==-1&&moveBall2==-1)&&(leftLine4 <= 330&&leftLine4 >= 150))
  {
    radius=15;
    moveBall1=200;
    moveBall2=leftLine4-20;
  }
  if(moveBall2==70)
  {
    radius=-1;
    moveBall1=-1;
    moveBall2=-1;
    chance=chance-1;
  }else if(moveBall2==340)
  {
    radius=-1;
    moveBall1=-1;
    moveBall2=-1;
    chance=chance-1;
  }
}
void drawBody()
{
  cleardevice();
  setcolor(1);
  rectangle(100,50,500,360);
  //line(int x1, int y1, int x2, int y2);
  line(500,50,640,50);//upper right corner
  line(500,200,640,200);//right middle
  line(500,360,640,360);//lower right corner
  line(1,50,100,50);//upper left corner
  line(1,360,100,360);//lower left corner
  outtextxy(5,170,"Press Esc");
  outtextxy(10,200,"To Exit");
  outtextxy(540,100,"SCORE");
  outtextxy(530,230,"CHANCE");
  setcolor(4);
  sprintf(str,"%d",score);
  outtextxy(560,150,str);
  sprintf(str,"%d",chance);
  outtextxy(560,280,str);
  setcolor(5);
  circle(moveBall1,moveBall2,radius);
}
int main()
{
    int gd=DETECT,gm;
    char check;
    int End=0,frequency=0;
    cleardevice();
    initgraph(&gd,&gm," ");
    setcolor(3);//CYAN
    settextstyle(1,0,3);
    outtextxy(130,210,"WELCOME TO RAPID ROLL GAME");
    settextstyle(1,0,2);
    outtextxy(150,240,"Press enter key to start game");
    again:
    if(!kbhit())
    {
        check=getch();
        if(check==13)//13=reset device's position
        {
            while(End!=1)
            {
                drawBody();
                moveLine();
                End=MoveBall();

                delay(50);
            }
        }
    }
  //nosound();
  _getch();
  closegraph();

}
