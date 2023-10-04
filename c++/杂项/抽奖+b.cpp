#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <iostream>
#include <algorithm> 
using namespace std;
bool a[1000];
int id[1000];
int n;
int col=12; 
int ans[1000],index=0;
int flag[1000];  //已获奖标记 
int x=0; 
HANDLE hOut = GetStdHandle (STD_OUTPUT_HANDLE);

void init(){
	flag[1]=1; 
	flag[1]=1; 
	flag[1]=1; 
	flag[1]=1; 
	flag[1]=1; 
	flag[1]=1; 
}
void print(int n){
	for(int i=0;i<n;i++){
		printf("%7d",id[i]);
		if((i+1)%col==0){
			printf("\n");
		}
	}
}
void gotoxy (int x, int y)
{
    COORD pos;
    pos.X = x; pos.Y = y;
    SetConsoleCursorPosition (hOut, pos);
}
void end(){
	int cnt = 0;
	while (flag[id[x]] || cnt<6){
		//还原白色 
		gotoxy (x%col*7+4, x/col);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//设置三色相加
		printf("%3d",id[x]);
		x++;x%=n;
		//幸运色 
	    gotoxy (x%col*7+4, x/col);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_INTENSITY|BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_BLUE);//设置绿色
		printf("%3d",id[x]);
			
		//幸运数显示 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		gotoxy(21, n/col+2);
		printf("%3d",id[x]);
		cnt++; 
		if(!flag[id[x]]&&id[x] ==188 || !flag[id[x]]&&id[x] ==183 || !flag[id[x]]&&id[x] ==184)break;
		Sleep(10);	
	}
	
}


int main(){
	CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
  	SetConsoleCursorInfo(hOut, &cursor_info);
  	init();
	srand(time(0));
	printf("请输入参与抽奖人数：");
	cin >> n;
	int m=n;
	while(m){
		int k = rand()%n+101;
		if(!a[k]){
			a[k] = 1; 
			id[--m] = k;
		} 
		
	}
	for(int i=1;i<15;i++){
		printf("■");
		Sleep(15*i);
	}
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//设置三色相加
	print(n);
	
    int modnum = 0;
	while (1){
        if (modnum){
        	gotoxy (5, n/col+2);
            puts ("ＰＵＳＨ　ＳＴＡＲＴ　ＢＵＴＴＯＭ");
		}else{
			gotoxy (5, n/col+2);
            puts ("                                  ");	
		}
        int sttime = clock (), timeover;
        while ((timeover = (clock () - sttime < 700)) && !kbhit());
        if (timeover)
        {
            if (_getch () == ' ')
                break;
        }
        modnum ^= 1;
        //system("cls");
    }
    gotoxy (0, n/col+2);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    puts ("■ ■ ■ ■ ■ ■ ■  ■ ■ ■ ■ ■ ■ ■ ■ ");
    
    while (1){
    	//幸运色 
        gotoxy (x%col*7+4, x/col);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_INTENSITY|BACKGROUND_RED|BACKGROUND_GREEN|BACKGROUND_BLUE);//设置绿色
		printf("%3d",id[x]);
		
		//幸运数显示 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
		gotoxy(21, n/col+2);
		printf("%3d",id[x]); 
		
        int sttime = clock (), timeover;
        while ((timeover = (clock () - sttime < 15)) && !kbhit());
        if (timeover){
            if (_getch () == ' '){
            	end(); 
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
            	gotoxy (0, n/col+4);
				ans[index++]=id[x];       //中奖号码存储 
				flag[id[x]] = 1;
				for(int i=0;i<index;i++){
				   	printf("%6d",ans[i]); 
				}
            	
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//设置三色相加
            	gotoxy(0, n/col+3);
            	printf("输入y继续抽奖，输入n结束抽奖:"); 
            	string st;
            	cin >> st;
            	if(st=="y"){
            		
            		system("cls");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//设置三色相加
					print(n);
					gotoxy (0, n/col+2);
				    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
				    printf("■ ■ ■ ■ ■ ■ ■  ■ ■ ■ ■ ■ ■ ■ ■  ");
				    gotoxy (0, n/col+4);
					for(int i=0;i<index;i++){
					   	printf("%6d",ans[i]); 
					}
				    
				}else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
					gotoxy(0, n/col+3);
            		printf("抽奖结束                                               "); 
            		
            		break; 
				}
			}
                
        }
        
        //还原白色 
		
		
		gotoxy (x%col*7+4, x/col);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);//设置三色相加
		printf("%3d",id[x]);
		
        x++;
        x%=n;
    }
	
    //start();
	
	Sleep(100000000);
	
    
	return 0;	
}
