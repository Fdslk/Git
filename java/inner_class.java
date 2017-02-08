public class inner_class{
	private String name = "Tony";
	private static String nick = "Tony";

	public class Inner{
		String name = "Fang";
		public void show(){
			System.out.println("outer name:" + inner_class.this.name);
			System.out.println("inner name:" + name);
		}
	}

	public static class SInner{
		String nick = "Fang";
		public void show (){
			System.out.println("static outer name:" + inner_class.nick);
			System.out.println("static inner name:" + nick);
		}
	}
	
	public static void main(String[] args){
		inner_class inn = new inner_class();
		Inner in = inn.new Inner();

		SInner si = new SInner();
		in.show();
		si.show();
	}
}


