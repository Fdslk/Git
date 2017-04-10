package map.com;

import java.util.HashMap;
import java.util.Map;

public class TestClass {
	public static void main(String[] args){
		Map<String, String >map = new HashMap<String, String>();
		map.put("a", "hello1");
		map.put("b", "hello2");
		map.put("c", "hello3");
		map.put("d", "hello4");
		getkey(map);
		//���¸��ƻḲ��ԭֵ����С���ᷢ���仯
		map.put("d", "wang");
		length(map);
		getkey_value(map);
	}
	//���map��ȫ����ֵ
	public static void getkey(Map<String, String>map){
		for(String key:map.keySet()){
			System.out.println("value: "+key);
		}
	}
	//���map��ȫ����ֵ��Ӧ��ֵ
	public static void getvalue(Map<String, String>map){
		for(String value:map.values()){
			System.out.println("value: "+value);
		}
	}
	//��ü�ֵ��ֵͨ��key
	public static void getvalue_key(String key, Map<String, String>map){
		System.out.println(map.get(key));
	}
	//���map�ĳ���
	public static void length(Map<String, String>map){
		System.out.println(map.size());
	}
	//��ü�ֵ�����Ӧ��ֵ
	public static void getkey_value(Map<String, String>map)
	{
		for(Map.Entry<String, String>entry:map.entrySet()){
			System.out.println("key: " + entry.getKey() + " value: "+ entry.getValue());
		}
	}

}
