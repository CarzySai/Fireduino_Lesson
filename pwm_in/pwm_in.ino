/*
 作者:暴走的阿Sai
 时间：2016年9月9日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 用电位器控制LED作呼吸灯
 */
void setup() {
  // 初始化引脚8为输出
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int val,bl;
  val=analogRead(0); //读取模拟接口0
  bl=val/4;//将读取的数值转化为0~255的范围
  analogWrite(8, bl);   // 设置引脚8输出0到3V
  delay(10);              // 延迟10毫秒

}
