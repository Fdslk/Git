
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
        //hasNext����Ƿ�����һ��Ԫ��
        while(it.hasNext()){
            str = (String) it.next();//next��ָ��ָ��һ��Ԫ��
            System.out.println(str);
            it.remove();//ÿ��ɾ��һ��
        }
        //it.remove();//ɾ���������е��·��ص�Ԫ��
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
