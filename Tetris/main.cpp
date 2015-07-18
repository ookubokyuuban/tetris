#include <iostream>
#include<stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
int rm(void);
  /*    while(kbhit()){
        a=getch();
      }
}*/
using namespace std;

int main()
{
    int lp=0;
    int l=0;
    int wait=60000;
    int line=0;
    int ks=0;
    int x,y;
    int ih=0,bb=0;
    int ab=0;
    int tm=0,rl=0;
    int mn,ge=0;
    int i,j,k;
    int r;
    int mx=5,my=0;
    char a;
    int mino[4][7][4][4]={
    1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,  //横4
    1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,  //左下折れ
    0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,  //くねくね右上
    0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,  //ブロック
    0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0,  //T
    1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,  //右下折れ
    1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,  //くねくね左上

    0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,
    1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,
    1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,
    0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,
    0,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,
    0,0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,
    0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,

    1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,
    0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,
    0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,
    0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,
    1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,
    1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,

    0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,
    1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,
    1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,
    0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,
    0,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,
    1,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
    0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,
    };
    printf("\t\t");
    int map[22][14]={0};
    for(i=0;i<22;i++){
      map[i][1]=2;
      map[i][12]=2;
    }
    for(i=0;i<13;i++){
      map[21][i]=2;
    }
    i=0;
    j=0;
    map[20][14]=0;
    while(i!=21||j!=13){
      if(map[i][j]==1||map[i][j]==2)
      printf("■");
      else
      printf("  ");
      if(j==13){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
    }
    printf("%d",lp);
      printf("\n\t\t→スタート");
      while(a!=' ')
      a=getch();
      a=0;
      system("cls");

srand((unsigned) time(NULL));
      //ゲーム whiletimer
      while(ge!=1){
          rl=0;
          system("cls");
      mn=rm();                                        //１ます
     // printf("%d\n",mn);
      for(j=0;j<4;j++){
      for(i=0;i<4;i++){
      if(mino[rl][mn][j][i]==1)
      map[j][i+mx]=3;
      }
      }
      printf("\t\t");
    i=1;
    j=0;
    while(i!=21||j!=14){
      if(map[i][j]==1||map[i][j]==2||map[i][j]==3)
      printf("■");
      else
      printf("  ");
      if(j==14){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
    }
    printf("%d",lp);
    ab=0;
    while(ab!=1){
        tm=0;
    while(tm<wait){
      while(kbhit()){
        a=getch();
      }
      if(a=='a'){
          a=0;
        for(i=0;i<22;i++){
          for(j=0;j<14;j++){
          if(map[i][j]==3){
            if(map[i][j-1]==1||map[i][j-1]==2)
            ih=1;
          }
        }}
        if(ih==0){
            mx--;
          for(i=0;i<22;i++){
            for(j=0;j<14;j++){
              if(map[i][j]==3){
                map[i][j]=0;
                map[i][j-1]=3;
              }
            }
          }
        }
        ih=0;
    system("cls");
    i=1;
    j=0;
    printf("\t\t");
    while(i!=21||j!=14){
      if(map[i][j]==1||map[i][j]==2||map[i][j]==3)
      printf("■");
      else
      printf("  ");
      if(j==14){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
    }
    printf("%d",lp);
      }
      if(a=='d'){
          a=0;
        for(i=0;i<22;i++){
          for(j=0;j<14;j++){
          if(map[i][j]==3){
            if(map[i][j+1]==1||map[i][j+1]==2)
            ih=1;
          }
        }}
        if(ih==0){
            mx++;
          for(i=22;i>=0;i--){
            for(j=14;j>=0;j--){
              if(map[i][j]==3){
                map[i][j]=0;
                map[i][j+1]=3;
              }
            }
          }
        }
        ih=0;
    system("cls");
    i=1;                                    //描写距離
    j=0;
    printf("\t\t");
    while(i!=21||j!=14){
      if(map[i][j]==1||map[i][j]==2||map[i][j]==3)
      printf("■");
      else
      printf("  ");
      if(j==14){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
    }
    printf("%d",lp);
      }
 if(a=='s'){
          tm=wait;
          a=0;
      }
    if(a==' '){
      a=0;
      rl++;
      if(rl==4)
      rl=0;
      for(y=0;y<4;y++){
          for(x=0;x<4;x++){
            if(mino[rl][mn][y][x]==1){
              if(map[my+y][mx+x]==1||map[my+y][mx+x]==2){
                ks++;
              }
            }
          }
      }
      if(ks==0){
        for(y=0;y<22;y++){
          for(x=0;x<14;x++){
              if(map[y][x]==3){
                map[y][x]=0;
              }
          }}
        for(y=0;y<4;y++){
          for(x=0;x<4;x++){
            if(mino[rl][mn][y][x]==1){
              map[my+y][mx+x]=3;
            }
          }
      }}
      if(ks>0)
      rl--;
      ks=0;
      system("cls");
    i=1;                                    //描写距離
    j=0;
    printf("\t\t");
    while(i!=21||j!=14){
      if(map[i][j]==1||map[i][j]==2||map[i][j]==3){
      printf("■");
      }else
      printf("  ");
      if(j==14){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
      }
      printf("%d",lp);
      }
      tm++;
    }
    tm=0;
      for(i=0;i<22;i++){                                  //自動落下
          for(j=0;j<14;j++){
          if(map[i][j]==3){
            if(map[i+1][j]==1||map[i+1][j]==2)
            ih=1;
          }
        }}
        if(ih==0){
            my++;
          for(i=22;i>=0;i--){
            for(j=14;j>=0;j--){
              if(map[i][j]==3){
                map[i][j]=0;
                map[i+1][j]=3;
              }
              }
          }
          for(i=0;i<22;i++){                                  //直前
          for(j=0;j<14;j++){
          if(map[i][j]==3){
            if(map[i+1][j]==1||map[i+1][j]==2)
            ih=1;
          }
        }}
            if(ih==1){
               // printf("\a");
              tm=-400000;
              ih=0;
            }
        }
        if(ih==1){
            my=0;
            mx=5;
            ab=1;
            ih=0;
        }
    system("cls");
    i=1;                                    //描写距離
    j=0;
    printf("\t\t");
    while(i!=21||j!=14){
      if(map[i][j]==1||map[i][j]==2||map[i][j]==3)
      printf("■");
      else
      printf("  ");
      if(j==14){
        j=0;
        i++;
        printf("\n\t\t  ");
      }
      j++;
    }
    printf("%d\ttime=%d",lp,wait);
    }
    ab=0;
      for(i=1;i<22;i++){
            for(j=0;j<14;j++){
              if(map[i][j]==3){
                  map[i][j]=1;
      }
      }}
      i=0;
      while(i!=21){
          line=0;
        for(j=0;j<13;j++){
          if(map[i][j]==1){
            line++;
          }}
          if(line==10){
              l++;
              wait-=1500;
            for(x=0;x<13;x++){
              if(map[i][x]==1){
                map[i][x]=0;
              }
            }
            for(y=i;y>=0;y--){
              for(x=0;x<=13;x++){
                if(map[y][x]==1){
                  map[y][x]=0;
                  map[y+1][x]=1;
                }
              }
            }
          }
          i++;
      }
      lp+=l*l*10;
      l=0;
      printf("\n%d",lp);
      if(map[1][5]==1||map[1][6]==1){
      ge=1;
    }
      }
      printf("\nよっわｗ");
      while(1){}
    return 0;
}
int d=0;
int rm(void)
{
  int r;
  r=rand();
      r%=7;
      return r;
}

