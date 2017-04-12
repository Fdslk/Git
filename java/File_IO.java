package file.com;

import java.io.BufferedInputStream; 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.io.Reader;

/*
 1.首先获得一个文件句柄。File file = new File(); file即为文件句柄。两人之间连通电话网络了。接下来可以开始打电话了。

 2.通过这条线路读取甲方的信息：new FileInputStream(file) 目前这个信息已经读进来内存当中了。接下来需要解读成乙方可以理解的东西

 3.既然你使用了FileInputStream()。那么对应的需要使用InputStreamReader()这个方法进行解读刚才装进来内存当中的数据

 4.解读完成后要输出呀。那当然要转换成IO可以识别的数据呀。那就需要调用字节码读取的方法BufferedReader()。
 	同时使用bufferedReader()的readline(）方法读取txt文件中的每一行数据哈
*/
public class File_IO {
	
	public static void ReadTxtFile(String filePath){
		try{
			File file = new File(filePath);//把需要读取的文件给file(相当于C语言中的fopen)
			if(file.isFile() && file.exists()){//检查文件是否存在，并且检查是否是文件
				String coding = "GBK";//文件编码格式
				//FileInputStream将文件中的内容读入置内存  InputStreamReader解读内存中的数据  
				InputStreamReader read = new InputStreamReader(new FileInputStream(file), coding);
				//转换成IO可识别的数据
				BufferedReader bufferedReader = new BufferedReader(read);
				String readline = null;
				//将数据按行输出
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
		String filePath = "D:\\android\\workspace_teach\\IOfile\\陕师大复试.txt";
		ReadTxtFile(filePath);
	}
}
