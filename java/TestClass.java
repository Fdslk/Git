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
		//重新复制会覆盖原值，大小不会发生变化
		map.put("d", "wang");
		length(map);
		getkey_value(map);
	}
	//获得map的全部键值
	public static void getkey(Map<String, String>map){
		for(String key:map.keySet()){
			System.out.println("value: "+key);
		}
	}
	//获得map的全部键值对应的值
	public static void getvalue(Map<String, String>map){
		for(String value:map.values()){
			System.out.println("value: "+value);
		}
	}
	//获得键值的值通过key
	public static void getvalue_key(String key, Map<String, String>map){
		System.out.println(map.get(key));
	}
	//获得map的长度
	public static void length(Map<String, String>map){
		System.out.println(map.size());
	}
	//获得键值及其对应的值
	public static void getkey_value(Map<String, String>map)
	{
		for(Map.Entry<String, String>entry:map.entrySet()){
			System.out.println("key: " + entry.getKey() + " value: "+ entry.getValue());
		}
	}

}
