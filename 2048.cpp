#include <bits/stdc++.h>
#include <conio.h>
#include "graphics.h"
using namespace std;

int listatop[10];
int m[4][4]={0},linie[4],score; char * v= new char [5];
int cercx,cercy,raza,intrec,oriz,vert;
void afisarecerc(int x, int y,int r,int directie, int culoare)
{
    if(culoare==0)
    {
        setcolor(RGB(227,217,166));
        setfillstyle(SOLID_FILL, RGB(227,217,166));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(227,217,166));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(227,217,166));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(227,217,166));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(227,217,166));
    }
    if(culoare==1)
    {
        setcolor(RGB(255,215,21));
        setfillstyle(SOLID_FILL, RGB(255,215,21));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(255,215,21));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(255,215,21));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(255,215,21));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(255,215,21));
    }
    if(culoare==2)
    {
        setcolor(RGB(255,168,21));
        setfillstyle(SOLID_FILL, RGB(255,168,21));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(255,168,21));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(255,168,21));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(255,168,21));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(255,168,21));
    }
    if(culoare==3)
    {
        setcolor(RGB(254,121,22));
        setfillstyle(SOLID_FILL, RGB(254,121,22));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(254,121,22));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(254,121,22));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(254,121,22));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(254,121,22));
    }
    if(culoare==4)
    {
        setcolor(RGB(255,89,0));
        setfillstyle(SOLID_FILL, RGB(255,89,0));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(255,89,0));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(255,89,0));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(255,89,0));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(255,89,0));
    }
    if(culoare==5)
    {
        setcolor(RGB(254,58,1));
        setfillstyle(SOLID_FILL, RGB(254,58,1));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(254,58,1));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(254,58,1));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(254,58,1));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(254,58,1));
    }
    if(culoare==6)
    {
        setcolor(RGB(237,28,36));
        setfillstyle(SOLID_FILL, RGB(237,28,36));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(237,28,36));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(237,28,36));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(237,28,36));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(237,28,36));
    }
    if(culoare==7)
    {
        setcolor(RGB(255,242,0));
        setfillstyle(SOLID_FILL, RGB(255,242,0));
        circle(x,y,r);
    if(directie==4)
     floodfill(x+raza-2,y,RGB(255,242,0));
    if(directie==6)
     floodfill(x-raza+2,y,RGB(255,242,0));
    if(directie==2)
     floodfill(x,y+raza-2,RGB(255,242,0));
    if(directie==8)
     floodfill(x,y-raza+2,RGB(255,242,0));
    }


setcolor(RGB(248,242,220));

}

int tasta;
int readkey()
{
    int tasta=getch();
    if(tasta==0)
        tasta=getch();
    return tasta;
}

void setfundal(int cul)
{
     if(cul==0)
        setbkcolor(RGB(227,217,166));

    if(cul==1)
        setbkcolor(RGB(255,215,21));

    if(cul==2)
        setbkcolor(RGB(255,168,21));

    if(cul==3)
        setbkcolor(RGB(254,121,22));

    if(cul==4)
        setbkcolor(RGB(255,89,0));

    if(cul==5)
        setbkcolor(RGB(254,58,1));

    if(cul==6)
        setbkcolor(RGB(237,28,36));

    if(cul==7)
        setbkcolor(RGB(255,242,0));
}

void scor()
{
    ifstream in("top_scor.txt"); ofstream out("top_scor1.txt");
    char* scr=new char[10], *c;

    for(int i=0;i<=9;i++)
        in>>listatop[i];
    in.close();
    sort(listatop,listatop+10,greater<int>());
    for(int i=0;i<=9;i++)
        out<<listatop[i]<<" ";
    out.close();
    setcolor(BLACK);
    rectangle(2*getmaxx()/3,getmaxy()*7/100,getmaxx()-3,getmaxy()-3);
    rectangle(2*getmaxx()/3-1,getmaxy()*7/100-1,getmaxx()-4,getmaxy()-4);
    rectangle(2*getmaxx()/3-2,getmaxy()*7/100-2,getmaxx()-5,getmaxy()-5);
    line(2*getmaxx()/3-2,getmaxy()*7/100+getmaxy()/9,getmaxx()-3,getmaxy()*7/100+getmaxy()/9);
    line(2*getmaxx()/3-2,getmaxy()*7/100+getmaxy()/9+1,getmaxx()-3,getmaxy()*7/100+getmaxy()/9+1);
    line(2*getmaxx()/3-2,getmaxy()*7/100+getmaxy()/9+2,getmaxx()-3,getmaxy()*7/100+getmaxy()/9+2);
    itoa(score,scr,10);
    setbkcolor(RGB(248,242,220));
    outtextxy(2*getmaxx()/3+getmaxx()/10,getmaxy()*7/100+getmaxy()/18,"Scor:");
    outtextxy(2*getmaxx()/3+getmaxx()/5,getmaxy()*7/100+getmaxy()/18,scr);

    for(int i=0;i<=9;i++)
    {
        c=new char[10];
        itoa(listatop[i],c,10);
        outtextxy(2*getmaxx()/3+getmaxx()/10,getmaxy()*7/100+getmaxy()/6+50*i,c);
    }

    setbkcolor(RGB(245,124,95));
}

void actualizarescor()
{
    ifstream in("top_scor1.txt"); ofstream out("top_scor.txt");
    int v[10];

    for(int i=0;i<=9;i++)
        in>>v[i];
    in.close();
    if(score>v[0]&&score>listatop[0])
    {
        for(int i=8;i>=0;i--)
            listatop[i+1]=listatop[i];
        listatop[0]= score;
    }
    for(int i=0;i<=9;i++)
        out<<listatop[i]<<" ";
    out.close();


}

void meniu()
{
    int midx, midy;
    midx=getmaxx()/2-getmaxx()/15;
    midy=getmaxy()/2;
    setcolor(RGB(248,242,220));
    setfillstyle(SOLID_FILL, RGB(248,242,220));
    floodfill(2,2,RGB(248,242,220));//fundal

    setcolor(RGB(254,58,1));
    setbkcolor(RGB(248,242,220));
    settextjustify(1,1);
    settextstyle(BOLD_FONT, HORIZ_DIR,5);
    outtextxy(midx+60,midy-150,"2048 PUZZLE");
    outtextxy(midx+70, midy, "Apasa orice tasta pentru a incepe.");
    outtextxy(midx+70, midy+100, "Foloseste tastele sageti pentru a juca.");
    getch();
}

void victorie()
{
    int midx, midy;
    midx=getmaxx()/2-getmaxx()/15;
    midy=getmaxy()/2;
    setcolor(RGB(248,242,220));
    setfillstyle(SOLID_FILL, RGB(248,242,220));
    floodfill(2,2,RGB(248,242,220));//fundal

    setcolor(RGB(254,58,1));
    setbkcolor(RGB(248,242,220));
    settextjustify(1,1);
    settextstyle(BOLD_FONT, HORIZ_DIR,5);
    outtextxy(midx+60,midy-150,"Felicitari! Ai castigat.");
    outtextxy(midx+70, midy, "Apasa orice tasta pentru a termina.");
    getch();
}


int rand03()
{
    int i[100]={0,1,2,3};
    int random=rand()%4;
    return(random);
    //return(i[random]);
}

int rand24()
{
    int i[100]={0,2,4};
    int random=rand()%2 + 1;
    return(i[random]);
}

int vmatrice()
{
    for(int i=0;i<=3;i++)
        for(int j=0;j<=3;j++)
            if(m[i][j]==0)
                return 1;
    return 0;
}


void liniea()
{
    for(int i=0;i<=3;i++)
        linie[i]=m[i][0];
}

void liniew()
{
    for(int i=0;i<=3;i++)
        linie[i]=m[0][i];
}

void linied()
{
    for(int i=0;i<=3;i++)
        linie[i]=m[i][3];
}

void linies()
{
    for(int i=0;i<=3;i++)
        linie[i]=m[3][i];
}

int culori(int i, int j)
{
    if(m[i][j]==0) return 0;
    if(m[i][j]==2) return 1;
    if(m[i][j]==4) return 2;
    if(m[i][j]==8) return 3;
    if(m[i][j]==16) return 4;
    if(m[i][j]==32) return 5;
    if(m[i][j]==64) return 6;
    if(m[i][j]>=128) return 7;
}

void miscarecercuri(int directie)
{

    int i,j;
    char * dc= new char [5];


    for(int a=0;a<=2*raza+intrec;a+=2)
    {
        cleardevice();

        setcolor(RGB(248,242,220));
    setfillstyle(SOLID_FILL, RGB(248,242,220));
    floodfill(2,2,RGB(248,242,220));//fundal

        if(directie==4)
            {

                for(int q=0;q<=3;q++)
                {
                    itoa(linie[q], dc, 10);
                    afisarecerc(oriz,cercy,raza,4,0);
                    setfundal(0);
                    setcolor(RGB(190,190,190));
                    if(linie[q]!=0)
                    outtextxy(oriz,cercy,dc);
                    setcolor(RGB(248,242,220));
                    cercy+=2*raza+intrec;
                }
                cercy=vert;

        for(i=0;i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                itoa(m[i][j], v, 10);
                afisarecerc(cercx+2*raza+intrec,cercy,raza,4,culori(i,j));
                setfundal(culori(i,j));
                if(m[i][j]!=0)
                outtextxy(cercx+2*raza+intrec,cercy,v);
                cercx+=2*raza+intrec;
            }
            cercy+=2*raza+intrec; cercx=oriz-a;
        }
        cercy=vert;
        scor();
        swapbuffers();
        }

        if(directie==6)
        {
            for(int q=0;q<=3;q++)
            {
                itoa(linie[q], dc, 10);
                afisarecerc(oriz+3*(2*raza+intrec),cercy,raza,6,0);
                 setcolor(RGB(190,190,190));
                 setfundal(0);
                 if(linie[q]!=0)
                outtextxy(oriz+3*(2*raza+intrec),cercy,dc);
                setcolor(RGB(248,242,220));
                cercy+=2*raza+intrec;
            }
            cercy=vert;

        for(i=0;i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                itoa(m[i][j], v, 10);
                afisarecerc(cercx-2*raza-intrec,cercy,raza,6,culori(i,j));
                setfundal(culori(i,j));
                if(m[i][j]!=0)
                outtextxy(cercx-2*raza-intrec,cercy,v);
                cercx+=2*raza+intrec;
            }
            cercy+=2*raza+intrec; cercx=oriz+a;
        }
        cercy=vert;
        scor();
        swapbuffers();
        }
         if(directie==8)
        {
            for(int q=0;q<=3;q++)
            {
                itoa(linie[q], dc, 10);
                afisarecerc(cercx,vert,raza,2,0);
                 setcolor(RGB(190,190,190));
                 setfundal(0);
                 if(linie[q]!=0)
                outtextxy(cercx,vert,dc);
                setcolor(RGB(248,242,220));
                cercx+=2*raza+intrec;
            }
            cercx=oriz;

        for(i=0;i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                itoa(m[i][j], v, 10);
                afisarecerc(cercx,cercy+2*raza+intrec,raza,2,culori(i,j));
                setfundal(culori(i,j));
                if(m[i][j]!=0)
                outtextxy(cercx,cercy+2*raza+intrec,v);
                cercx+=2*raza+intrec;
            }
            cercy+=2*raza+intrec; cercx=oriz;
        }
        cercy=vert-a;
        scor();
        swapbuffers();
        }

         if(directie==2)
        {
            for(int q=0;q<=3;q++)
            {
                itoa(linie[q], dc, 10);
                afisarecerc(cercx,vert+3*(2*raza+intrec),raza,2,0);
                setfundal(0);
                 setcolor(RGB(190,190,190));
                 if(linie[q]!=0)
                outtextxy(cercx,vert+3*(2*raza+intrec),dc);
                setcolor(RGB(248,242,220));
                cercx+=2*raza+intrec;
            }
            cercx=oriz;

        for(i=0;i<=3;i++)
        {
            for(j=0;j<=3;j++)
            {
                itoa(m[i][j], v, 10);
                afisarecerc(cercx,cercy-2*raza-intrec,raza,8,culori(i,j));
                setfundal(culori(i,j));
                if(m[i][j]!=0)
                outtextxy(cercx,cercy-2*raza-intrec,v);
                cercx+=2*raza+intrec;
            }
            cercy+=2*raza+intrec; cercx=oriz;
        }
        cercy=vert+a;
        scor();
        swapbuffers();
        }

    }
    settextstyle(10, HORIZ_DIR,5);

}

void sumaa(int m[4][4])
{
    for(int i=0;i<4;i++)
        for(int j=1;j<4;j++)
            if((m[i][j]!=0)&&m[i][j-1]==0)
            {
                m[i][j-1]=m[i][j];
                m[i][j]=0;
            }

    for(int i=0;i<4;i++)
        for(int j=1;j<4;j++)
            if((m[i][j]!=0)&&m[i][j-1]==0)
            {
                m[i][j-1]=m[i][j];
                m[i][j]=0;
            }

    for(int i=0;i<4;i++)
        for(int j=1;j<4;j++)
            if((m[i][j]!=0)&&m[i][j-1]==0)
            {
                m[i][j-1]=m[i][j];
                m[i][j]=0;
            }
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(m[i][j]==m[i][j+1])
        {
            m[i][j]*=2;
            m[i][j+1]=0;
        for(int i=0;i<4;i++)
            for(int j=1;j<4;j++)
                if((m[i][j]!=0)&&m[i][j-1]==0)
            {
                m[i][j-1]=m[i][j];
                m[i][j]=0;
            }
        }

}

void sumad(int m[4][4])
{
    for(int i=0;i<4;i++)
        for(int j=2;j>=0;j--)
            if((m[i][j]!=0)&&m[i][j+1]==0)
            {
                m[i][j+1]=m[i][j];
                m[i][j]=0;
            }
    for(int i=0;i<4;i++)
        for(int j=2;j>=0;j--)
            if((m[i][j]!=0)&&m[i][j+1]==0)
            {
                m[i][j+1]=m[i][j];
                m[i][j]=0;
            }
    for(int i=0;i<4;i++)
        for(int j=2;j>=0;j--)
            if((m[i][j]!=0)&&m[i][j+1]==0)
            {
                m[i][j+1]=m[i][j];
                m[i][j]=0;
            }

    for(int i=0;i<4;i++)
        for(int j=3;j>=0;j--)
            if(m[i][j]==m[i][j-1])
        {
            m[i][j]*=2;
            m[i][j-1]=0;
        for(int i=0;i<4;i++)
            for(int j=2;j>=0;j--)
                if((m[i][j]!=0)&&m[i][j+1]==0)
            {
                m[i][j+1]=m[i][j];
                m[i][j]=0;
            }
        }

}

void sumaw(int m[4][4])
{
    for(int j=0;j<4;j++)
        for(int i=1;i<4;i++)
            if((m[i][j]!=0)&&m[i-1][j]==0)
            {
                m[i-1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=1;i<4;i++)
            if((m[i][j]!=0)&&m[i-1][j]==0)
            {
                m[i-1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=1;i<4;i++)
            if((m[i][j]!=0)&&m[i-1][j]==0)
            {
                m[i-1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=0;i<4;i++)
            if(m[i][j]==m[i+1][j])
        {
            m[i][j]*=2;
            m[i+1][j]=0;
        for(int j=0;j<4;j++)
            for(int i=1;i<4;i++)
            if((m[i][j]!=0)&&m[i-1][j]==0)
            {
                m[i-1][j]=m[i][j];
                m[i][j]=0;
            }
        }

        for(int j=0;j<4;j++)
            for(int i=0;i<4;i++)
            if(m[i][j]==2048) victorie();

}

void sumas(int m[4][4])
{
    for(int j=0;j<4;j++)
        for(int i=2;i>=0;i--)
            if((m[i][j]!=0)&&m[i+1][j]==0)
            {
                m[i+1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=2;i>=0;i--)
            if((m[i][j]!=0)&&m[i+1][j]==0)
            {
                m[i+1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=2;i>=0;i--)
            if((m[i][j]!=0)&&m[i+1][j]==0)
            {
                m[i+1][j]=m[i][j];
                m[i][j]=0;
            }
    for(int j=0;j<4;j++)
        for(int i=3;i>=0;i--)
            if(m[i][j]==m[i-1][j])
        {
            m[i][j]*=2;
            m[i-1][j]=0;
            for(int j=0;j<4;j++)
        for(int i=2;i>=0;i--)
            if((m[i][j]!=0)&&m[i+1][j]==0)
            {
                m[i+1][j]=m[i][j];
                m[i][j]=0;
            }
        }

}




int main()
{

int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "");
    initwindow(getmaxwidth( ), getmaxheight( ));

     meniu();

    setcolor(RGB(248,242,220));
    setfillstyle(SOLID_FILL, RGB(248,242,220));
    floodfill(2,2,RGB(248,242,220));//fundal

    setcolor(RGB(245,124,95));
    setfillstyle(SOLID_FILL,RGB(245,124,95));//cercuri
    setcolor(RGB(248,242,220));
    settextjustify(1,1);
    settextstyle(10, HORIZ_DIR,5);

    int i,j,a,cnt;

    int inaltime=getmaxy();//fereasra
    int lungime=getmaxx();//fereasra
    raza=lungime*4/100;//raza cercului
    int spatiux=lungime*16/100;//spatiul dintre cercuri si margine pe ox
    int spatiuy=inaltime*7/100;//spatiul dintre cercuri si margine pe oy
    intrec=inaltime*4/100;// spatiul dintre cercuri

    oriz=spatiux;
    vert=(spatiuy)*3;
    cercx=oriz;
    cercy=vert;

    while(1)
    {

         if (vmatrice())
                {
                    int r=rand03();
                    int c=rand03();

                if(m[r][c]==0)
                m[r][c]=rand24();
                else
                {
                    while(m[r][c]!=0)
                    {
                        r=rand03();
                        c=rand03();
                    }
                m[r][c]=rand24();
                }
            }

        cercx=oriz; cercy=vert;
        score=0;
        for(int f=0;f<=3;f++)
        {
            for(int p=0;p<=3;p++)
            {
                itoa(m[f][p], v, 10);
                afisarecerc(cercx,cercy,raza,2,culori(f,p));
                setfundal(culori(f,p));
                if(m[f][p]!=0)
                    outtextxy(cercx,cercy,v);
                cercx+=2*raza+intrec;
                score+=m[f][p];
            }
            cercy+=2*raza+intrec; cercx=oriz;
        }
        scor();
        actualizarescor();
        cercx=oriz; cercy=vert;

        tasta=readkey();
        switch(tasta)
            {
                case 75:{
                    liniea();
                    sumaa(m);
                    miscarecercuri(4);
                    scor();} break;
                case 77:{
                    linied();
                    sumad(m);
                    miscarecercuri(6);
                    scor();} break;
                case 72:{
                    liniew();
                    sumaw(m);
                    miscarecercuri(8);
                    scor();} break;
                case 80:{
                    linies();
                    sumas(m);
                    miscarecercuri(2);
                    scor();} break;
            }



    }
     getch();
     closegraph();
return 0;
}
