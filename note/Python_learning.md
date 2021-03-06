---
title: Python_learning  
grammar_cjkRuby: true
---
### *2017/6/18*
字典 dict 如果使用copy方法赋值给一个新的字典
原始数据字典中的数据发生变化时新的字典中的数据也会跟着变化

但是如果使用deepcopy方法时，重新赋值的字典中的数据就不会随着原始字典中的数据的改变而改变。
![enter description here][1]


  
  ### *2017/7/16*
  ## 正则表达式
  1：使用单个字符串来描述匹配一系列符合某个句法的字符串
  2：对字符串操作的一中逻辑公式
  3： 处理文本和数据
  4：一次拿出表达式和文本中的字符比较，如果每一非字符都能匹配，则匹配成功；否则匹配失败
  
  ![enter description here][2]
  r表示源字符串
  
  import re 导入正则表达式的包
  pa = re.compile(r'str')正则表达式所检查的字符串
  ma = pa.match('match_str') 正则表达式所匹配的字符串
  ma.group() 输出所匹配到的对象 否则输出NONE
  
  在compile添加参数 re.I 表示忽略所要匹配字符串的大小写
  
  ## *2017/7/17*
  
  ### Python的继承
  总是从某个类继承 如果没有合适的类的，就可以从object类继承
  class MyClass(object):
  	pass
  super().__init__
  def __init__(self, args):
  	super(SubClass, self).__init__(args) 父类的初始化，如果忘记的话，就无法继承父类的属性，在此过程中还需要初始化父类的参数 这里用args表示
	pass
	
 
  动态语言与静态语言最大的差别之一：动态语言调用实例方法，不检查类型，只要方法存在，参数正确，就可以调用
  
  python获取对象信息的方法：
  1.type()获取变量的类型
  ex：type（123） return type 'int'
  2.dir()获取变量的所有属性
  3.已知一个属性名称，要获取或者设置对象的属性，就需要用getattr（）和setattr（）函数
  ![enter description here][3]

### 正则表达式语法（一）
匹配单个字符
1.import re.match(r'.','str') '.'表示可以匹配任意的字符串
需要匹配多个任意字符
2.[...]匹配字符集，匹配字符集中的任意一个字符
3.\d/\D 匹配数字/非数字
4.\s/\S 匹配空白/非空白字符
5.\w/\W 匹配单词字符[a-zA-Z0-9]/非单词字符
6.如果要匹配一个中括号之间的字符，需要给中括号加上转义字符
![enter description here][4]

匹配多个字符
1. * 匹配前一个字符0次或者无限次 前一个字符：可以代表某一个字符，数字也可以，加上*之后就可以匹配其出现的次数，如果出现了不是要匹配的字符，往后的字符就无法匹配。
2. +匹配前一个字符一次或者无限次 常用来判断变量名称
3. ？匹配前一个字符0次 或者一次
4. {m}/{m,n}匹配一个字符m次或者m到n次 如果超过固定长度就无法匹配
5. *？/+?/?? 匹配模式变为非贪婪（尽可能少匹配字符）按照不同的匹配模式中最少的次数进行匹配
 ![enter description here][5]


### *2017/7/21*
Python 定义了__str__()和__repr__()两种方法，__str__()用于显示给用户，而__repr__()用于显示给开发人员 

__slots__指一个类允许的属性列表

目的是限制当前类所能拥有的属性，如果不需要添加任意动态的属性，使用__slots__也能节省内存。

一个类实例也可以变成一个可调试对象，只需要实现一个特殊方法__call__()

#### *正则表达式的使用（三）*
^: 匹配字符串开头
$:匹配字符串结尾
\A/\Z:指定的字符串必须出现在开头/结尾
|：匹配左右任意一个表达式
（ab）：括号中表达式作为一个分组
\<number>:引用编号为num的分组匹配到的字符串
（？P name）:分组起一个别名
(?P=name):引用别名为那么的分组匹配字符串

### *2017/7/28*
 python正则表达式-re模块其他方法
 1.search 在一个字符串中查找匹配
可以在子字符串中匹配所需要匹配的内容
![enter description here][6]
2.findall 找到匹配，返回所有匹配部分的列表
![enter description here][7]
3.sub 将字符串中匹配正则表达式的部分替换为其他值
![enter description here][8]
4.split 根据匹配分割字符串，返回分割字符串组成的列表
![enter description here][9]


抓取web中的数据
1.获取网页信息
import urllib2 导入URL包
req = urllib2.urlopen（‘url’）
buf = req.read()将内容读取到内存缓存中
2.进行匹配
ma  = re.findall(r'http:.+\.jpg', buf)，匹配的列表
3.将对应url中图片下载保存在本地
int 0
for url in ma:
f = open(str(i)+'.jpg', 'w') *创建一个文件如果不存在*
req = urllib2.open(url) *将文件下载下来*
buf = req.read() *将文件保存在内存中的缓存中*
f.write(buf) *写入本地文件*
i+=1

### *2017/7/30*
### python 操作mysql数据库
1.Python DB API：Python访问数据库的统一接口规范
http://www.python.org/dev/peps/pep-0249/
数据库连接对象connection
数据库交互对象 cursor
数据库异常处理 exception
![enter description here][10]
最后不关闭数据库连接，就会造成资源被占用的问题，使得程序的应用性能变差。
![enter description here][11]
在安装 MySQL-Python 出现错误： python version 2.7 required,which was not found in the registry
解决方案：http://www.cnblogs.com/thinksasa/archive/2013/08/26/3283695.html
在eclipse安装PyDev出现错误：
![enter description here][12]
重启一下  or close the automatically update 
在eclipse中配置pydev
http://www.cnblogs.com/Bonker/p/3584707.html
导入错误import MySqldb
![enter description here][13]
解决方法：
https://stackoverflow.com/questions/30881402/importerror-this-is-mysqldb-version-1-2-4-beta-4-but-mysql-is-version
把之前的版本卸载掉，安装新的版本，使用pip uninstall 本机的MySqldb然后在重新安装it




  [1]: ./images/1497757118434.jpg "1497757118434.jpg"
  [2]: ./images/1500174337526.jpg "1500174337526.jpg"
  [3]: ./images/1500281317537.jpg "1500281317537.jpg"
  [4]: ./images/1500283074368.jpg "1500283074368.jpg"
  [5]: ./images/1500284562966.jpg "150028562966.jpg"
  [6]: ./images/1501232556729.jpg "1501232556729.jpg"
  [7]: ./images/1501232860217.jpg "1501232860217.jpg"
  [8]: ./images/1501233385192.jpg "1501233385192.jpg"
  [9]: ./images/1501233561125.jpg "1501233561125.jpg"
  [10]: ./images/1501399437921.jpg "1501399437921.jpg"
  [11]: ./images/1501399726019.jpg "1501399726019.jpg"
  [12]: ./images/1501402396888.jpg "1501402396888.jpg"
  [13]: ./images/1501406501265.jpg "1501406501265.jpg"