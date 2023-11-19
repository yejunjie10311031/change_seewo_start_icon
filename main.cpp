#include <iostream>
#include <fstream>
#include "checkseewoicon.h"
#include "checkchangeicon.h"
#include "changeicon.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char file_path1[256];
	char file_path2[256];
	checkseewostarticon yjj_checkseewostarticon;
	cout << "请输入希沃白板的文件路径：";
	cin.getline(file_path1,256);
	cout << "希沃路径：" << file_path1 << endl;
	strcpy(yjj_checkseewostarticon.seewo_icon_path,file_path1);
	yjj_checkseewostarticon.checkseewofile();
	cout << "请输入要替换的图片路径：";
	cin.getline(file_path2,256);
	cout << "新的图片路径：" << file_path2 << endl;
	checkchangestarticon yjj_checkchangestarticon;
	strcpy(yjj_checkchangestarticon.change_icon_path,file_path2);
	yjj_checkchangestarticon.checkchangefile();
	cout << "正在替换新的图片......" << endl;
	changestarticon yjj_changestarticon;
	yjj_changestarticon.changefile(yjj_checkseewostarticon.seewo_icon_path,yjj_checkchangestarticon.change_icon_path);
	cout << "已成功替换希沃启动图片" << endl;
	return 0;
}