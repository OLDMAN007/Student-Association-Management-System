#include<iostream>
#include<string>
using namespace std;
string stu[10][9] = { { "1", "Zhang", "Man", "computer", "1", "dance", "project1", "computer", "project0" },      //定义二维数组，用于存放学生社团信息 
					{ "2", "Zhao", "Woman", "computer", "1", "sing", "project1", "computer", "project0" } };          //初始化两个学生社团信息 
string pro[10][10]={{"project0","Zhang","Zhao"},{"project1","Zhang","Zhao"}};
string xin[10][2];
int n = 1,z=3,h=0;                        //用n来控制数组的行 
string m = "1";                   //用于查找学号 
void tianjia()                   //添加学生信息函数
{
	cout << "请输入该学生的学号："  << endl;
	cin >> stu[n][0];
	cout << "请输入该学生的姓名：" << endl;
	cin >> stu[n][1];
	cout << "请输入该学生的性别：" << endl;
	cin >> stu[n][2];
	cout << "请输入该学生的专业：" << endl;
	cin >> stu[n][3];
	cout << "请输入该学生的班级：" << endl;
	cin >> stu[n][4];
	cout << "请输入该学生的特长：" << endl;
	cin >> stu[n][5];
	cout << "请输入该学生当前的项目：" << endl;
	cin >> stu[n][6];
	if(stu[n][6]==stu[0][6])             //及时对当前项目进行操作 
	{
		pro[1][z]=stu[n][1];
	}
	cout << "请输入该学生当前的职务：" << endl;
	cin >> stu[n][7];
	cout << "请输入该学生以往的项目：" << endl;
	cin >> stu[n][8];
	if(stu[n][8]==stu[0][8])             //及时对以往项目进行操作 
	{
		pro[0][z]=stu[n][1];
	}
	cout << "学号为" << stu[n][0] << "的学生的信息已添加成功！" << endl;
}
void shanchu()                                        //删除学生信息函数
{
	cout << "请输入您要删除学生信息的学号：" << endl;
	cin >> m;         
	for (int j = 0; j <= n; j++)           //变量j用于循环数组 
	{
		if (stu[j][0] == m)                 //查找相应的学号 
		{
			stu[j][0] = ""; 
			stu[j][1] = ""; 
			stu[j][2] = ""; 
			stu[j][3] = "";                              //删除数组信息 
			stu[j][4] = ""; 
			stu[j][5] = ""; 
			stu[j][6] = ""; 
			stu[j][7] = ""; 
			stu[j][8] = "";
			cout << "学号为" << m << "的学生的信息已成功删除！" << endl;
			break;
		}
	}
}
void chazhao()                                   //查找学生信息函数
{
	cout << "请输入您要查找学生信息的学号：" << endl;
	cin >> m;
	for (int j = 0; j <= n; j++)                //变量j用于循环数组 
	{
		if (stu[j][0] == m)                       //查找相应的学号 
		{
			cout << "学号：" << stu[j][0] << endl;
			cout << "姓名：" << stu[j][1] << endl;
			cout << "性别：" << stu[j][2] << endl;
			cout << "专业：" << stu[j][3] << endl;
			cout << "班级：" << stu[j][4] << endl;
			cout << "特长：" << stu[j][5] << endl;
			cout << "当前项目：" << stu[j][6] << endl;
			cout << "当前职务：" << stu[j][7] << endl;
			cout << "以往项目：" << stu[j][8] << endl;
			break;
		}
	}
}
void xiugai()                         //修改学生信息函数
{
	char b = '0';
	cout << "请输入您要修改学生信息的学号" << endl;
	cin >> m;
	for (int j = 0; j <= n; j++)
	{
		if (stu[j][0] == m)               //找到m学号对应的数组
		{
			while (b != 'q')               //声明变量b用于控制循环 
			{
				cout<<"****************************************"<<endl;
				cout << "1、学号\n2、姓名\n3、性别\n4、专业\n5、班级\n6、特长\n7、当前项目\n8、当前职务\n9、以往项目\n请输入您要修改的内容的序号(输入q返回上一层)：" << endl;
				cout<<"****************************************"<<endl;
				cin >> b;
				if (b == '1')              //修改学号 
				{
					cout << "请输入学号：" << endl;
					cin >> stu[j][0];
					cout << "修改成功！" << endl;
				}
				else if (b == '2')            //修改姓名 
				{
					cout << "请输入姓名：" << endl;
					cin >> stu[j][1];
					cout << "修改成功！" << endl;
				}
				else if (b == '3')                 //修改性别 
				{
					cout << "请输入性别：" << endl;
					cin >> stu[j][2];
					cout << "修改成功！" << endl;
				}
				else if (b == '4')                 //修改专业 
				{
					cout << "请输入专业：" << endl;
					cin >> stu[j][3];
					cout << "修改成功！" << endl;
				}
				else if (b == '5')           //修改班级 
				{
					cout << "请输入班级：" << endl;
					cin >> stu[j][4];
					cout << "修改成功！" << endl;
				}
				else if (b == '6')           //修改特长 
				{
					cout << "请输入特长：" << endl;
					cin >> stu[j][5];
					cout << "修改成功！" << endl;
				}
				else if (b == '7')        //修改当前项目 
				{
					cout << "请输入当前项目：" << endl;
					cin >> stu[j][6];
					cout << "修改成功！" << endl;
				}
				else if (b == '8')           //修改项目职务 
				{
					cout << "请输入项目职务：" << endl;
					cin >> stu[j][7];
					cout << "修改成功！" << endl;
				}
				else if (b == '9')              //修改以往项目 
				{
					cout << "请输入以往项目：" << endl;
					cin >> stu[j][8];
					cout << "修改成功！" << endl;
				}
				else if (b == 'q')        //返回上一层，退出循环 
					break;
				else
				{
					cout << "输入错误，请重新输入：" << endl;
					continue;
				}
			}
		}
	}
}
void quanbu()                    //查找全部学生信息函数 
{
		for(int j=0;j<=n;j++)
		{
			cout << "学号：" << stu[j][0] << endl;
			cout << "姓名：" << stu[j][1] << endl;
			cout << "性别：" << stu[j][2] << endl;
			cout << "专业：" << stu[j][3] << endl;
			cout << "班级：" << stu[j][4] << endl;
			cout << "特长：" << stu[j][5] << endl;
			cout << "当前项目：" << stu[j][6] << endl;
			cout << "当前职务：" << stu[j][7] << endl;
			cout << "以往项目：" << stu[j][8] << endl;
			cout<<"****************************************"<<endl;
		}
}
void xiangmu()                     //项目管理功能函数 
{
	char b='0';
	while(b!='q')
	{
		cout<<"1、查看当前项目情况\n2、对当前项目进行操作\n3、添加一个新项目\n请输入您要操作的序号（输入q返回上一层）："<<endl;
		cout<<"****************************************"<<endl;
		cin>>b;
		if(b=='1')            //查看当前项目情况 
		{
			for(int i=1;i<=1;i++)
			{
				cout<<"项目名："<<pro[i][0]<<endl;
				cout<<"项目负责人："; 
				for(int j=1;j<=9;j++)            //循环输出当前项目情况 
				{
					cout<<" "<<pro[i][j];
				}
				cout<<endl;
			}
		}
		else if(b=='2')            //对当前项目进行操作 
		{
			bool c;
			cout<<"当前项目是否完成？完成请输入"<<1<<"，没完成请输入"<<0<<endl;
			cin>>c;
			if(c==1)               //完成项目 
			{
				for(int i=1;i<=9;i++)
				{
					if(stu[i][6]==stu[0][6])
					{
						stu[i][8]=stu[i][8]+stu[i][6];        //将当前项目添加到以往项目中 
						stu[i][6]="";                         //清除当前项目 
					}
				} 
				stu[0][8]=stu[0][8]+stu[0][6];
				stu[0][6]="";
			}
			else if(c==0)        //没有完成 
			{
				for(int i=1;i<=9;i++)
				{
					if(stu[i][6]==stu[0][6])
					{
						stu[i][6]="";       //清除 
					}
				}
				stu[0][6]=" ";
			}
			else 
			cout<<"输入错误！"<<endl;
		}
		else if(b=='3')              //添加新项目 
		{
			cout<<"请输入项目名：";
			cin>>xin[h][0];
			cout<<"请输入承担该项目同学的学号(输入e结束)："<<endl;
			for(;m!="e";)
			{
				cin>>m;
				for(int j=0;j<=n;j++)
				{
					if(stu[j][0]==m)           //利用循环找到指定同学 
					{
						stu[j][6]=xin[h][0];
						xin[h][1]=stu[j][1];
						h++;
						xin[h][0]=xin[h-1][0];
					}
				} 
			}
			cout<<"新建情况："<<endl;                     //输出新建项目情况 
			cout<<"新建项目名："<<xin[h][0]<<endl; 
			cout<<"项目承担同学：";
			for(int i=0;i<h;i++)
			{
				cout<<xin[i][1]<<"	";
			}
			cout<<endl;
		}
	}
 } 
int main()
{
	cout << "					欢迎使用山科男神用户智能管理系统" << endl;
	cout << "			为您提供服务的是学生社团信息智能管理系统，很高兴能为您服务。" << endl;
	char a = 'a';
	cout << "现在您可对学生社团信息进行管理，包括\n";
	while (a != 'q')             //循环，用于控制主程序操作 
	{
		cout<<"****************************************\n****************************************\n";
		cout << "1、添加学生社团信息\n2、删除学生社团信息\n3、查找学生社团信息\n4、修改学生社团信息\n5、查看全部学生社团信息\n6、启动项目管理功能\n请输入您要操作的序号（输入q退出系统）：\n";
		cout<<"****************************************\n****************************************\n";
		cin >> a;
		if (a == 'q')
			break;
		else if (a == '1')
		{
			n++;
			tianjia();            //调用添加学生社团信息函数 
		}
		else if (a == '2')
		{
			shanchu();           //调用删除学生社团信息函数 
		}
		else if (a == '3')
		{
			chazhao();           //调用查找学生社团信息函数 
		}
		else if (a == '4')
		{
			xiugai();           //调用修改学生社团信息函数 
		}
		else if (a=='5')
		{
			quanbu();            //调用查看全部学生社团信息函数 
		}
		else if(a=='6')
		{
			xiangmu();           //调用项目管理功能函数 
		}
		else
		{
			cout << "输入错误，请重新输入:" << endl;
			continue;
		}
	}
}
    



