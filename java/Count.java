public class Count{
	public static void main(String[] args){
		int num = 2;
		int sum = 0;
		do{
			sum += num;
			num = num + 2;
		}while(num <= 50);
		System.out.println("50以内的偶数和为：" + sum);
	}
}
