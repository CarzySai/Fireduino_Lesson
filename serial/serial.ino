/*
 作者:暴走的阿Sai
 时间：2016年8月30日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 每隔一秒串口打印一句Hello world
 */
void setup() {
  Serial.begin(9600); //设置串口波特率
}

void loop() {
  Serial.println("Hello world!"); //每隔一秒打印一句Hello world
  delay(1000); 
}
