#include <iostream>
#include <fstream>
using namespace std ;
int main(int argc, char *argv[]){
//第一个参数argc表示向main函数传递的参数的个数，
/*第二个参数argv保存命令行输入的参数值
argv[0]指向程序自身运行目录路径和程序名，
argv[1]指向程序在DOS命令中执行程序名后的第一个字符串
argv[2]指向第二个字符串
.......
argv[argc] 为NULL
*/
	char buf[256];
	fstream f(argv[1]) ;//打开当前的文件路径 
	while(!f.eof()){
		f.getline(buf,256,'\n');
	}
	f.close();
	fstream of;//创建第二个对象 
	if(of){
		of.open(argv[2],ios::out);//打开需要复制到的文件路径 
		for ( int i = 0 ; i != '\n';i++){
			of << buf[i] ;	
		}
		cout << "复制成功" << endl;
	}
 	else{
 		cout << "复制失败" << endl;
	 }
	of.close();
	system("pause");
	return 0 ;
	
	
}
 
