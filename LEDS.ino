/*
 作者:暴走的阿Sai
 时间：2016年8月30日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 控制多个LED闪烁
 */
void setup() {
  // 初始化引脚8,9,10,11为输出
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int i;
  for(i=8;i<=11;i++)
 {
  digitalWrite(i, HIGH);   // 设置引脚i为高电平
  delay(200);              // 延迟200毫秒
  delay(200);              // 延迟200毫秒
 }
}
