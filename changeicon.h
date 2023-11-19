#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class changestarticon
{
	public:
	void changefile(char path1[256],char path2[256])
	{
		if (!remove(path1))
		{
			cout << "已删除原文件" << endl;
			ifstream infile;
			ofstream outfile;
			char temp;
			infile.open(path2,ios::in|ios::binary);
			outfile.open(path1,ios::out|ios::binary);
			cout << "正在复制......" << endl;
			outfile << infile.rdbuf();
/*			while(infile.get(temp))
			{
				outfile << temp;
				infile.close();
				outfile.close();
			} */
		}
		else
		{
			cout << "删除原文件失败" << endl;
			exit(1);
		}
	}
};