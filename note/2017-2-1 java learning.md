---
title: 2017-2-1 java learning
grammar_cjkRuby: true
---
JAVA_HOME 配置JDK安装路径
PATH 			 配置JDK命令文件的位置(bin文件夹)
CLASSPATH 配置类库文件的位置(lib文件夹)

file.java 的名字应该与建立的class名保持一致![enter description here][1]
使用cmd 执行java.class 文件时，在执行时要去掉.class后缀![enter description here][2]

使用eclipse开发Java 属于IDE integer development environment
开发步骤
*1.创建Java项目*
![enter description here][3]该目录下放置源代码文件
*2.创建程序包*  便于源代码文件的管理，避免重名问题
*3.编写Java源程序*
*4.运行Java程序*


  

#20170202 java grammer learning 
*1.变量自增*
统一写在变量的左边 ex: int a ； 自增 int b = ++a;

#20170203 java 数组的使用方法
*1.数据类型	[] 数组名*
int [] array
*2.数据类型  数组名[]*
int array[]
*3.给数组分配空间*
数组名 = new 数据类型 [数组长度];
array = new int[5];
或者还可以同时声明数组和规定数组的大小
int[] array = new int[5];

获取数组的长度 array.length

使用导包 import java.util.Arrays;
可以使用Arrays.sort(arrayname) 对数组进行排序
Arrays.toString(arrayname) 将数组成字符串输出

java 中的foreach语句
for (element type  element name : the object of the foreach)
{
	the running coding;
}
ex:![enter description here][4] result:![enter description here][5]

对于面向语言的封装，继承，多态新理解
*封装*将类的属性变为不可见性，需要使用方法来间接访问类的属性，这样更加的安全更加的规范
如果不使用getter和setter方法来进行，就无法进行访问
![enter description here][6]
ps：package的作用：管理java文件，解决同名文件冲突

this关键字
用来表示当前类；可以用来表示类中的方法和属性
![enter description here][7]

 如果外部类的静态成员与内部类的成员名称相同，可通过“类名.静态成员”访问外部类的静态成员；如果外部类的静态成员与内部类的成员名称不相同，则可通过“成员名”直接调用外部类的静态成员
 ![enter description here][8] ![enter description here][9]
 
 *继承*
 java中只能是单继承，所以说只有一个父类
继承好处，子类拥有父类的所有的属性和方法
class 子类 extends 父类
在继承了父类的方法和属性的时候，总是先构造父类的方法在构造子类的方法
![enter description here][10]
 
 final 关键字，修饰类时，不能被继承；
 修饰方法时，不予许重写；
 ![enter description here][11]
 修饰属性时，不会隐式赋值；
 修饰局部变量或普通变量时，不允许被修改；可称其为常量。
 
 super关键字，在对象内部使用，代表父类。可以调用父类的属性和方法，子类和父类的属性和方法没有联系。
 
 *多态*对象有多种形态
 1.引用多态：父类的引用可以指向子类的引用，反之不行
 2.方法多态：创建本类对象时，调用方法为本类方法；创建子类对象时，调用的方法为子类重写方法或者继承的方法。

引用类型转换：1向上，小类型到大类型的装换2.向下（强制）大类型到小类型
避免类型转换的安全性问题，instanceof预算符

抽象类
1.abstract定义抽象类
2.abstract定义抽象方法，只有声明，不需要实现
3.包含抽象方法的类是抽象类
4.抽象类中可以包含普通的方法，也可以没有抽象方法
5.抽象类不能直接创建，可以定义引用变量
一般是把父类作为抽象类，这样就可以约束其子类的属性及方法，就是说在子类中，必须要有父类的所有方法和属性
 
 *接口 interface* 接口就是用来被继承、被实现的，修饰符一般建议用public
 不能使用private和protected修饰接口
 语法格式 [修饰符] interface 接口名 [extends 父接口1， 父接口2 ......]{
  常量或者是抽象方法
 }(接口可以多继承，和类不同)，**定义方法不能有方法体**
 ![enter description here][12]
 
 [修饰符] class 类名 extends 父类 implements 接口1， 就扣2......
 {
 	如果继承了抽象类，需要实现继承的抽象方法，要实现接口中的抽象方法。
 }如果要继承父类，继承父类必须在实现接口之前
 ![enter description here][13]
 使用方法
 ![enter description here][14]
  
  匿名内部类直接在类中使用接口
  ![enter description here][15]
  
  **UML unified Modeling Language**
 1. 用例图 
 2. 序列图
 3. 类图，业务逻辑，描述类与类之间的关系(可以根据关系直接生成代码)
 
 jsp 基本语法：
 <%%>在这个里面可以编写一些java的脚本语言
 <%!%>声明变量和声明函数
 <%=%>等式标签
 ![enter description here][16]
 
 *jsp 内置对象:(这些对象不需要new，直接可以使用）*
 1.out（JSPWriter类的实例）
1）void println()向客户端打印字符串
2）void clear()清除缓冲区的内容，如果在flush之后调用会抛出异常
3）void clearBuffer()清除缓冲区的内容，如果在flush之后调用不会抛出异常
4）void flush()将缓冲区内容输出到客户端
5）int getBufferSize()返回缓冲区以字节数的大小，如不设缓冲区则为0
6）int getRemaining()返回缓冲区还剩多少可用
7）boolean isAutoFlush()返回缓冲区满时，是自动清空还是抛出异常
8）void close()关闭输出流

 2.request（用户请求）/response（服务器相应）
 request 常用方法
 ![enter description here][17]
 
 response 即访问一个页面时该页面内的response对象只能对这次访问有效
 sendRedirect（）页面重定向 从本质上说，相当于两次请求，URL会改变（请求重定向），不会保存上次页面的内容，页面跳转
 getRequstDispatcher（）请求转发，URL不会改变，只算第一次请求
  ![enter description here][18]
  
 解决传递参数乱码问题是一个使用setCharacterEnocoding()方法
 而一个就是修改Tomcat服务器中的server.xml文件，设置编码方式
 Connecter标签加上一个URIEncoding属性并设置为utf-8
 
 3.session 表示客户端和服务器的一次会话，用户浏览一个网站所花的时间（与用户的一一对应）
session 会保存在服务器的内存中
session 的小销毁invalidate(),session过期，服务器关闭

 4.application 
 常用方法，setAttribute(),getAttribute(),getServerInfo()
 
 5.page指向当前jsp页面本身
 6.pageContext 中的getsession()可以得到当前页面中的session
 include方法可以在页面中包含其他页面，相当于可以内嵌页面
 
表单提交方式get（明文）post（暗文）


*javabeans*
该类为public
该类中属性要是private
三个比较重要的标签
jsp的动作标签
![enter description here][19]
1.<jsp:useBeans>
在jsp页面中实例化或者在指定范围内使用javabeans
grammar：<jsp:useBean id="id" class="java class name" scope="作用范围/">
2.<jsp:getProperty>
给已经实例化的javaBean对象的属相赋值，一共有四种形式
![enter description here][20]
3.<jsp:setProperty>


*毕设中解决的问题*
待导入的文件：
![enter description here][21]
导入后出现得问题：
![enter description here][22]
解决方法：找到project中的classpath文件打开，就可以发现缺少的包，修改其正确路径就可以解决这个问题。
![enter description here][23]
#### 4.10
在cmd命令中编译***.java出现错误
![enter description here][24]
原因：
![enter description here][25]
解觉方法：http://jingyan.baidu.com/article/6c67b1d6a7cda32787bb1e9c.html


  [1]: ./images/1485920252353.jpg "1485920252353.jpg"
  [2]: ./images/1485920504124.jpg "1485920504124.jpg"
  [3]: ./images/1485921757421.jpg "1485921757421.jpg"
  [4]: ./images/1486099852750.jpg "1486099852750.jpg"
  [5]: ./images/1486099883447.jpg "1486099883447.jpg"
  [6]: ./images/1486537718900.jpg "1486537718900.jpg"
  [7]: ./images/1486541383430.jpg "1486541383430.jpg"
  [8]: ./images/1486543342540.jpg "1486543342540.jpg"
  [9]: ./images/1486543394483.jpg "1486543394483.jpg"
  [10]: ./images/1486628668879.jpg "1486628668879.jpg"
  [11]: ./images/1486628872175.jpg "1486628872175.jpg"
  [12]: ./images/1486709290971.jpg "1486709290971.jpg"
  [13]: ./images/1486709259734.jpg "1486709259734.jpg"
  [14]: ./images/1486709462783.jpg "1486709462783.jpg"
  [15]: ./images/1486710064416.jpg "1486710064416.jpg"
  [16]: ./images/1486559508297.jpg "1486559508297.jpg"
  [17]: ./images/1486640970702.jpg "1486640970702.jpg"
  [18]: ./images/1486804158672.jpg "1486804158672.jpg"
  [19]: ./images/1487749665717.jpg "1487749665717.jpg"
  [20]: ./images/1487752075305.jpg "1487752075305.jpg"
  [21]: ./images/1490407998620.jpg "1490407998620.jpg"
  [22]: ./images/1490408056522.jpg "1490408056522.jpg"
  [23]: ./images/1490408108276.jpg "1490408108276.jpg"
  [24]: ./images/1491788958335.jpg "1491788958335.jpg"
  [25]: ./images/1491789021310.jpg "1491789021310.jpg"