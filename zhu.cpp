#include <iostream>
#include <fstream>
using namespace std ;
int main(int argc, char *argv[]){
//��һ������argc��ʾ��main�������ݵĲ����ĸ�����
/*�ڶ�������argv��������������Ĳ���ֵ
argv[0]ָ�������������Ŀ¼·���ͳ�������
argv[1]ָ�������DOS������ִ�г�������ĵ�һ���ַ���
argv[2]ָ��ڶ����ַ���
.......
argv[argc] ΪNULL
*/
	char buf[256];
	fstream f(argv[1]) ;//�򿪵�ǰ���ļ�·�� 
	while(!f.eof()){
		f.getline(buf,256,'\n');
	}
	f.close();
	fstream of;//�����ڶ������� 
	if(of){
		of.open(argv[2],ios::out);//����Ҫ���Ƶ����ļ�·�� 
		for ( int i = 0 ; i != '\n';i++){
			of << buf[i] ;	
		}
		cout << "���Ƴɹ�" << endl;
	}
 	else{
 		cout << "����ʧ��" << endl;
	 }
	of.close();
	system("pause");
	return 0 ;
	
	
}
 
