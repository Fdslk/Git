package file.com;

import java.io.BufferedInputStream; 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.io.Reader;

/*
 1.���Ȼ��һ���ļ������File file = new File(); file��Ϊ�ļ����������֮����ͨ�绰�����ˡ����������Կ�ʼ��绰�ˡ�

 2.ͨ��������·��ȡ�׷�����Ϣ��new FileInputStream(file) Ŀǰ�����Ϣ�Ѿ��������ڴ浱���ˡ���������Ҫ������ҷ��������Ķ���

 3.��Ȼ��ʹ����FileInputStream()����ô��Ӧ����Ҫʹ��InputStreamReader()����������н���ղ�װ�����ڴ浱�е�����

 4.�����ɺ�Ҫ���ѽ���ǵ�ȻҪת����IO����ʶ�������ѽ���Ǿ���Ҫ�����ֽ����ȡ�ķ���BufferedReader()��
 	ͬʱʹ��bufferedReader()��readline(��������ȡtxt�ļ��е�ÿһ�����ݹ�
*/
public class File_IO {
	
	public static void ReadTxtFile(String filePath){
		try{
			File file = new File(filePath);//����Ҫ��ȡ���ļ���file(�൱��C�����е�fopen)
			if(file.isFile() && file.exists()){//����ļ��Ƿ���ڣ����Ҽ���Ƿ����ļ�
				String coding = "GBK";//�ļ������ʽ
				//FileInputStream���ļ��е����ݶ������ڴ�  InputStreamReader����ڴ��е�����  
				InputStreamReader read = new InputStreamReader(new FileInputStream(file), coding);
				//ת����IO��ʶ�������
				BufferedReader bufferedReader = new BufferedReader(read);
				String readline = null;
				//�����ݰ������
				while((readline = bufferedReader.readLine()) != null){
					System.out.println(readline);
				}
			}else{
				System.out.println("can not find the releted file!");
			}
		}catch (Exception e) {
			// TODO: handle exception
			System.out.println("file open failed!");
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args){
		String filePath = "D:\\android\\workspace_teach\\IOfile\\��ʦ����.txt";
		ReadTxtFile(filePath);
	}
}
