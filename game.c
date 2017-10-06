/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/

# include "iGraphics.h"
#include<math.h>


/*
	function iDraw() is called again and again by the system.
*/

///beginning play variables
int m=0;
int p1=400;
int p2=400;
int play=0;
///
////-----------------------------------------------my variables-------------------------------------------------------------
int mode;
int xCord;
int yCord;
int colorArray[3];
///isettimer  function variables
int p,q,dp,dq;
int c1,c2,c3,c4;
int s1,s2,s3,s4;
int r1,r2,r3,r4;
int t1,t2,t3,t4;
int e1,e2,e3,e4;
int f1,f2,f3,f4;
int g1,g2,g3,g4;
int left=400,right=5;
///score variables
int score=0;
char buffer[3];
int dog;
//life set variables
int life_loss=0,l_x1=920,l_y1=600;
int l_x2=l_x1-20,l_y2=l_y1;
int l_x3=l_x2-20,l_y3=l_y2;
///game end variables
int game_end=0;
int game_x=-800,game_y=-800;
int node=0;
///pause variables
   int pause_x=100,pause_y=600-5; int pause=0;
//resume variables
   int resume_x=170,resume_y=600-5; int resume=1;
//second
   int second=60;
   int n_d=56;
   char buffer1[3];
   //slicer image display variable
   int slice=0;
   int slice_x=0,slice_y=0;


//-----------------------------------------------------My_functions----------------------------------------------------------
void change23(){
	 p=p+dp;
	 q=q+dq;

	 if(p>900) dp=-dp;
	 if(q>500) dq=-dq;
	 if(p<0) dp=-dp;
	 if(q<0) dq=-dq;

}
void change(){
	  c1=c1+c3;
	  c2=c2+c4;

	 if(c1>900) c3=-c3;
	 if(c2>500) c4=-c4;
	 if(c1<0) c3=-c3;
	 if(c2<0) c4=-c4;

}

void change1(){
	  s1=s1+s3;
	  s2=s2+s4;

	 if(s1>900) s3=-s3;
	 if(s2>500) s4=-s4;
	 if(s1<0) s3=-s3;
	 if(s2<0) s4=-s4;

}

void change2(){
	  r1=r1+r3;
	  r2=r2+r4;

	 if(r1>900) r3=-r3;
	 if(r2>500) r4=-r4;
	 if(r1<0) r3=-r3;
	 if(r2<0) r4=-r4;

}
void change3(){
	  t1=t1+t3;
	  t2=t2+t4;

	 if(t1>900) t3=-t3;
	 if(t2>500) t4=-t4;
	 if(t1<0) t3=-t3;
	 if(t2<0) t4=-t4;

}

void change4(){
	  e1=e1+e3;
	  e2=e2+e4;

	 if(e1>900) e3=-e3;
	 if(e2>500) e4=-e4;
	 if(e1<0) e3=-e3;
	 if(e2<0) e4=-e4;

}

void change5(){
	  f1=f1+f3;
	  f2=f2+f4;

	 if(f1>900) f3=-f3;
	 if(f2>500) f4=-f4;
	 if(f1<0) f3=-f3;
	 if(f2<0) f4=-f4;

}

void change6(){
	  g1=g1+g3;
	  g2=g2+g4;

	 if(g1>900) g3=-g3;
	 if(g2>500) g4=-g4;
	 if(g1<0) g3=-g3;
	 if(g2<0) g4=-g4;

}
//Minute
void second1(){
	if(m==1){
	second=second-1;
	if(second==0){
     n_d=0;
	 pause=1;
	}
	}
}
///For Slice
void SliceChange(){
  slice_x=-100;
  slice_y=-100;

}


//-----------------------End Of My Functions------------------------------------------------------------------------------------


//------------------------------------Starting_Of_Idraw--------------------------------------------------------------------
void iDraw()
{
//play drawing
	iSetColor(20,81,238);
	iFilledRectangle(p1,p2,60,30);
	iSetColor(255,255,255);
	iText(p1+10,p2+10,"PLAY");

	iSetColor(20,81,238);
	iFilledRectangle(p1,p2-40,110,30);
	iSetColor(255,255,255);
	iText(p1+10,p2-30,"INSTRUCTION");
	iSetColor(20,81,238);
	iFilledRectangle(p1,p2-80,110,30);
	iSetColor(255,255,255);
	iText(p1+10,p2-70,"ABOUT");
	iSetColor(255,255,255);


	if(m==1){

	//place your drawing codes here
	iClear();
//background_image
	//iSetColor(100,255,100);
	//iFilledRectangle(0,0,600,400);


//showing bmp rats-------------------------------------
	iSetColor(0,0,255);
	//iLine(300,300,300+rx,300+ry);
	iShowBMP(p,q,"r3.bmp");
	iShowBMP(s1,s2,"r2.bmp");
	iShowBMP(r1,r2,"r4.bmp");
	iShowBMP(e1,e2,"r5.bmp");
	iShowBMP(g1,g2,"life_2.bmp");
	iShowBMP(t1,t2,"bull_dog.bmp");
	iShowBMP(f1,f2,"bull_dog1.bmp");



	iSetColor(0,0,255);
	//iCircle(xCord,yCord,10);
	iShowBMP(c1,c2,"r1.bmp");
	//iCircle(c1,c2,10);
	///showing Score----------------------------------
	iSetColor(0,0,255);
    iText(930,595,"SCORE:");
	itoa(score,buffer,10);
	iText(980,595,buffer);

	///Second
	iSetColor(0,0,255);
	//iText(470,595,"TIME LEFT:");
	itoa(second,buffer1,10);
	iText(530,590,buffer1,GLUT_BITMAP_TIMES_ROMAN_24);

////set life images---------------------------
//	iCircle(l1,l2,10);
	iSetColor(0,255,12);
    iFilledCircle(l_x3,l_y3,8);
	iFilledCircle(l_x2,l_y2,8);
	iFilledCircle(l_x1,l_y1,8);


	///tom cat mouse move-----------------------------
	iShowBMP(xCord,yCord,"cat.bmp");

///Slicer image show
	if(slice==1){
     iText(slice_x-15,slice_y-15,"SliceD....");
     iShowBMP(slice_x,slice_y,"sliced.bmp");
	}

	///showing rat_3---------------------------------------
//	if(node==1){
   // iShowBMP(300,300,"r3.bmp");
//	}
	//------------------For Pause-------------------------
	iSetColor(100,255,100);
	iFilledRectangle(pause_x,pause_y,60,15);
    iSetColor(0,0,0);
	iText(pause_x+10,pause_y+3,"PAUSE");



	//-----------------For Resume-------------------
	iSetColor(100,255,100);
    iFilledRectangle(resume_x,resume_y,60,15);
	iSetColor(0,0,0);
	iText(resume_x+5,resume_y+3,"RESUME");



	   ///lGame end images--------------------------------

	if(game_end==3){
	iSetColor(0,0,0);
	iFilledRectangle(game_x,game_y,1024,612);
    iSetColor(255,255,255);
	iText(440,250,"YOUR TOTAL SCORE IS:");
	itoa(score,buffer,10);
	iText(600,250,buffer);
	iShowBMP(400,300,"game_over1.bmp");


	}

/////second turs to 0
	if(n_d==0){
	iSetColor(0,0,0);

	iFilledRectangle(0,0,1024,612);
    iSetColor(255,255,255);
	iText(440,250,"YOUR TOTAL SCORE IS:");
	itoa(score,buffer,10);
	iText(600,250,buffer);
	iShowBMP(400,300,"game_over1.bmp");

	}
	}
}

///------------------------My I Draw End-----------------------------------------------------------------------------

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
//------------------------------------------------------My_iMouseMove_Fuction-----------------------------------------------
void iMouseMove(int mx, int my)
{
	//place your codes here
	if(pause!=1){
			xCord=mx;
     yCord=my;
	if(mx>=p && mx<=p+64 && my>=q && my<=q+64){
	p=rand()%900;
	q=rand()%500;
	score++;
	node=1;
	slice=1;
	slice_x=p;
	slice_y=q;
	}

	if(mx>=c1 && mx<=c1+64 && my>=c2 && my<=c2+64){
		c1=rand()%900;
		c2=rand()%500;
		score++;
		slice=1;
		slice_x=c1;
		slice_y=c2;

	}
		if(mx>=s1 && mx<=s1+64 && my>=s2 && my<=s2+64){
		s1=rand()%900;
		s2=rand()%500;
		score++;
		slice=1;
		slice_x=s1;
		slice_y=s2;

	}

	 if(mx>=r1 && mx<=r1+64 && my>=r2 && my<=r2+64){
		r1=rand()%900;
		r2=rand()%500;
		score++;
		slice=1;
		slice_x=r1;
		slice_y=r2;

	}

	 if(mx>=e1 && mx<=e1+64 && my>=e2 && my<=e2+64){
		e1=rand()%900;
		e2=rand()%500;
		score++;
		slice=1;
		slice_x=e1;
		slice_y=e2;

	}
	 if(mx>=f1 && mx<=f1+40 && my>=f2 && my<=f2+40){
		f1=rand()%900;
		f2=rand()%500;
		score=score-10;
		slice=1;
		slice_x=f1;
		slice_y=f2;

	}
	 	 if(mx>=g1 && mx<=g1+40 && my>=g2 && my<=g2+40){
		g1=rand()%900;
		g2=rand()%500;
		score=score+3;
		slice=1;
		slice_x=g1;
		slice_y=g2;

	}
         if(mx>=t1 && mx<=t1+64 && my>=t2 && my<=t2+64){
		t1=rand()%900;
		t2=rand()%500;
		score=score-5;
		dog=1;
		life_loss++;
		slice=1;
		slice_x=t1;
		slice_y=t2;

	}
		 if(life_loss==1){
         l_x3=-98;
		 l_y3=-65;
		 game_end=1;
		 }
		  if(life_loss==2){
         l_x2=-98;
		 l_y2=-695;
		 game_end=2;
		 }
		   if(life_loss==3){
         l_x1=-908;
		 l_y1=-65;
		 game_end=3;
		 }
		   if(game_end==3){
              game_x=0;
              game_y=0;
			  pause=1;
		   }

	if(mx==10 && my==10){
		printf("hi..\n\a");	}
	}
}
//--------------------------------------------------End Of My ImouseMove-----------------------------------------------









//----------------------------------Codes of PAUSE && RESUME-----------------------------------------------------
void iMouse(int button, int state, int mx, int my)
{
	if(mx>=p1 && mx <=p1+60 && my>=p2 && my<=p2+30){

   printf("Play is selected.....\n");
   m=1;


	}

else	if(mx>=410 && mx <=p1+110 && my>=360 && my<=p2+30){

   printf("Instruction is given below<You have to Drag mouse to slice>:.....\n");
   printf("1.you will get 1 point for every perfect rat slice\n2.if you slice love than you will get 3 points\n");
   printf("3.by slicing bull dog big you will lose 5 points and a life\n4.By slicing small bull dog your score will be decremented by 10\n\n");


	}

	else if(mx>=415 && mx <=p1+110 && my>=320 && my<=p2+30){

   printf("This game was developed by the students of CSE 32 batch of aust:\n");
   printf("Mashruf Mustavi Arpan:13.02.04.014\nMd Golam Muktadir:13.02.04.019\nMd Ibrahim Khan:13.02.04.024\n\n");


	}

    if(mx>=pause_x && mx<=pause_x+60 && my>=pause_y && my<=pause_y+15){

      //pause=1;
	 // printf("he...");
	  //	if(pause==1){

		 //if(resume==1){
         iPauseTimer(0);
		 iPauseTimer(1);
		 iPauseTimer(2);
		 iPauseTimer(3);
		 iPauseTimer(4);
		 iPauseTimer(5);
		 iPauseTimer(6);
		 iPauseTimer(7);
		 iPauseTimer(8);
		 iPauseTimer(9);
		 //resume=0;
		 pause=1;


	//	}

//	}

	}

   if(mx>=resume_x && mx<=resume_x+60 && my>=resume_y && my<=resume_y+15){
       //resume=0;
	  // printf("pee");

	   //	if(resume==0){
	//	if(pause==1){
        iResumeTimer(0);
		iResumeTimer(1);
		iResumeTimer(2);
		iResumeTimer(3);
		iResumeTimer(4);
		iResumeTimer(5);
        iResumeTimer(6);
		iResumeTimer(7);
		iResumeTimer(8);
		iResumeTimer(9);
		pause=0;
	//	resume=1;


	//	}


	//}

	}

	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

		//place your codes here
	}
}


//---------------------------------End of iMouse-----------------------------------------------------------------------

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{


//	if(key=='r')
	//{
	//	xCord=100;
//	yCord=100;
//	}

	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

   /*	if(key == GLUT_KEY_RIGHT)

		if(left<800){
		left=left+200;
		right=5;

	}
	if(key == GLUT_KEY_LEFT)
		if(left>200){
		left=left-200;
		right=5;


	}*/

	//place your codes for other keys here
}


int main()
{
	//place your own initialization codes here.
	mode=0;
	//smurf_1
	iSetTimer(50,change23);
    p=100;
	q=100;
	dp=5;
	dq=7;


    iSetTimer(50,change);
	c1=300;
	c2=400;
	c3=-7;
	c4=3;
	//
	iSetTimer(50,change1);
	s1=400;
	s2=500;
	s3=5;
	s4=-5;
/////
	iSetTimer(50,change2);
	r1=400;
	r2=0;
	r3=5;
	r4=-5;
////bull_dog
    iSetTimer(5,change3);
	t1=0;
	t2=400;
	t3=5;
	t4=-5;

///e1 iset timer
    iSetTimer(50,change4);
	e1=50;
	e2=250;
	e3=9;
	e4=-3;
	///f1 isettimer
    iSetTimer(10,change5);
	f1=250;
	f2=50;
	f3=6;
	f4=-5;
////g1 function
    iSetTimer(40,change6);
	g1=400;
	g2=300;
	g3=5;
	g4=-4;

////  code

//isettimer to set Time
	iSetTimer(1000,second1);

	///isettIMER for slicer
    iSetTimer(1000,SliceChange);


	iInitialize(1024, 612, "Rat Slicer ");

	return 0;
}
