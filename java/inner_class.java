public class inner_class{
	private String name = "Tony";

	public class Inner{
		String name = "Fang";
		public void show(){
			System.out.println("outer name:" + inner_class.this.name);
			System.out.println("inner name:" + name);
		}
	}
	
	public static void main(String[] args){
		inner_class inn = new inner_class();
		Inner in = inn.new Inner();
		in.show();
	}
}


