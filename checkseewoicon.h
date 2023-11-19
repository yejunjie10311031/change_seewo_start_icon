#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class checkseewostarticon
{
	public:
		char seewo_icon_path[256];
		char temp1[128] = "\\Main\\Assets\\SplashScreen.png";
		void checkseewofile()
		{
			strcat(seewo_icon_path,temp1);
			ifstream ifile(seewo_icon_path);
			cout << "文件路径："<< seewo_icon_path << endl;
			if (!ifile.fail())
			{
				cout << "已检测到希沃的SplashScreen.png" << endl;
			}
			if (ifile.fail())
			{
				cout << "未检测到希沃的SplashScreen.png，请检查路径是否正确。" << endl;
				cout << ifile.rdstate() << endl;
				exit(1);
			}
		}
};