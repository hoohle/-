# STM32F103RBT6单片机音乐播放器课设

[拼凑历程](./musicbeep/NOTE.txt)

代码大部分来源于网络，如果让我自己写肯定是写不出来的，希(妄)望(想)以后我能变成用记事本编程得神人吧，奈何高山仰止，景行行止。虽不能至，心向往之。

### 使用说明

短接PA2至蜂鸣器口PA6，即可播放音乐。

### 基于官方最新固件库版本v3.5.0的工程模板

[搭建模板报错解决办法](./musicbeep/基于v3.5.0搭建工程模板报错的解决办法.docx)





###### 参考文献

零	★STM32F03RBT6参考手册（英文）
https://wenku.baidu.com/view/210f617931b765ce0508141b.html

一	数码管
CD4543四七译码器的技术资料
https://wenku.baidu.com/view/c0b8e9b665ce0508763213c7.html?tdsourcetag=s_pcqq_aiomsg&qq-pf-to=pcqq.c2c
在七段数码管上显示字母和符号的办法
https://wenku.baidu.com/view/1f5bdc513c1ec5da50e2705c.html
数码管LED常用接口电路
http://wenku.baidu.com/view/b8ab17f7dc3383c4bb4cf7ec4afe04a1b171b072
数码管显示控制
https://wenku.baidu.com/view/3e2daf57cc7931b765ce159f.html
★通过位带地址操作GPIO在数码管显示数字(STM32_05)
https://blog.csdn.net/fanxp66/article/details/80227611

二	蜂鸣器
★STM32F103通用定时器PWM应用例程--蜂鸣器演奏乐曲（百度文库）
https://wenku.baidu.com/view/6e3b371bb84ae45c3b358ca4.html?qq-pf-to=pcqq.c2c
基于STM32F103 蜂鸣器播放音乐（有低中高音） TIM PWM
https://blog.csdn.net/qq_41821562/article/details/82689892
STM32F103使用简单延时控制蜂鸣器发声播放音乐 
https://blog.csdn.net/qq_36355662/article/details/80606753

三	诺基亚LCD5110液晶显示器
LCD5110字模提取软件PCtoLCD2002使用指南
https://wenku.baidu.com/view/8552cf48fe4733687e21aa51.html
STM32f103系列诺基亚5110lcd液晶显示程序
https://m.doc.guandang.net/be487f6be22c3a03d74135717.html
★Nokia5110LCD详细资料及单片机驱动方法详解（资料全有源码可复制）
http://www.51hei.com/bbs/dpj-41477-1.html
LCD5110中文资料（只看前半段就好了）
https://wenku.baidu.com/view/b8a0ba4cfe4733687e21aac7.html
NOKIA5110 LCD使用心得之坐标与字模
http://blog.sina.com.cn/s/blog_a486791c0101fbj2.html

