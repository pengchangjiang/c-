
# 基本操作
1.生成 .so
g++ add.cpp -fPIC -shared -o libadd.so

2.生成可执行文件
g++ test.cpp -L. -ladd -o testAdd

3.查看连接情况
ldd testAdd

4.配置修改

4.1.临时
export LD_LIBRARY_PATH=./ 

4.2.永久
修改配置
vi /etc/ld.so.conf
~
include ld.so.conf.d/*.conf
/home/project/testcode/c-/linux/C++/add
~

使配置生效
ldconfig


# 编译参数

-shared 该选项指定生成动态连接库（让连接器生成T类型的导出符号表，有时候也生成弱连接W类型的导出符号），不用该标志外部程序无法连接。相当于一个可执行文件。

-fPIC：表示编译为位置独立的代码，不用此选项的话编译后的代码是位置相关的所以动态载入时是通过代码拷贝的方式来满足不同进程的需要，而不能达到真正代码段共享的目的。

-L.：表示要连接的库在当前目录中。

-ltest：编译器查找动态连接库时有隐含的命名规则，即在给出的名字前面加上lib，后面加上.so来确定库的名称

 LD_LIBRARY_PATH：这个环境变量指示动态连接器可以装载动态库的路径。