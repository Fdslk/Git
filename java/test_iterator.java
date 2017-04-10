
import java.util.ArrayList;
import java.util.Iterator;

public class test_iterator {
	public static void main(String[] args){
		ArrayList list = new ArrayList();
		String str;
        list.add("a");
        list.add("b");
        list.add("c");
        Iterator it = list.iterator();
        //hasNext检查是否还有下一个元素
        while(it.hasNext()){
            str = (String) it.next();//next将指针指向一下元素
            System.out.println(str);
            it.remove();//每次删除一次
        }
        //it.remove();//删除迭代器中的新返回的元素
        list.add("a");
        list.add("b");
        list.add("c");
        it = list.iterator();
        System.out.println();
        while(it.hasNext()){
            str = (String) it.next();
            System.out.println(str);
        }
	}
}
