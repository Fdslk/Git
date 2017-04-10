import java.util.*;
public class dynamic_array {
	public static void main(String[] args){
		int count = 0, i;
		ArrayList<String> list = new ArrayList<String>();
		list.add("a");
		list.add("b");
		list.add("c");
		list.add("d");
		System.out.println("顺序添加： "+ list);
		//在一号元素后面添加一个元素
		list.add(1, "e");
		System.out.println("list:"+list);
		ArrayList<String> list2 = new ArrayList<String>();
		//将list中的所有元素添加到list2中
		list2.addAll(list);
		System.out.println("list2:"+list2);
		//将list中所有元素添加到list2中二号元素后面
		list2.addAll(1, list);
		System.out.println("list2:"+list2);
		//arraylist中元素是从下标0开始的，删除下标为一的元素
		list2.remove(1);
		System.out.println("list2:"+list2);
		//删除list中指定的元素
		list2.remove("b");
		System.out.println("list2:"+list2);
		//删除一个集合
//		list2.removeAll(list);
//		System.out.println(list2);
		//修改指定下标的值
		if(list.get(0) == "A")
		{
			list.set(0, "a");
		}
		else
		{
			list.set(0, "A");
		}
		System.out.println("list:"+list);
		//查询
		for(String value:list2){
			if(value == "b"){
				count ++;
			}
		}
		System.out.println("count: "+count);
		count = 0;
		for(i = 0; i < list2.size(); i++){
			if(list2.get(i) == "b"){
				count ++;
			}
		}
		System.out.println("count: "+ count);
	}
}

