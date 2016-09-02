/*
 作者:暴走的阿Sai
 时间：2016年8月30日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 控制LED每秒闪烁一次
 */
void setup() {
  // 初始化引脚8为输出
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // 设置引脚8为高电平
  delay(500);              // 延迟0.5秒
  digitalWrite(8, LOW);    // 设置引脚8为低电平
  delay(500);              // 延迟0.5秒
}
