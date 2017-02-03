package com.improve_grade;
import java.util.Scanner;//引入package

public class Demo_2 {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);//定义scanner对象
		int i, j;
		double avg, sum = 0;
		for(i = 0; i < 3; i ++)
		{
			for(j = 0; j < 4; j ++)
			{
				System.out.print("请输入第" + (i+1) + "班的第" + (j+1) + "个学生的成绩:");
				sum += input.nextInt();
			}
			avg = sum / 4;
			sum = 0;
			System.out.print("第" + (i+1) +"班的平均分为：" + avg);
			System.out.println();
		}
	}
}

