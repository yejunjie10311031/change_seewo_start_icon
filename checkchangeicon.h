#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class checkchangestarticon
{
	public:
		char change_icon_path[256];
		void checkchangefile()
		{
			ifstream ifile(change_icon_path);
			cout << "文件路径："<< change_icon_path << endl;
			if (!ifile.fail())
			{
				cout << "已检测到新的图片" << endl;
			}
			if (ifile.fail())
			{
				cout << "未检测到该图片，请检查路径是否正确。" << endl;
				cout << ifile.rdstate() << endl;
				exit(1);
			}
		}
};