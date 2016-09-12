/*
 作者:暴走的阿Sai
 时间：2016年9月6日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 PWM控制LED作呼吸灯
 */
void setup() {
  // 初始化引脚8为输出
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int i,j;
  for(i=0;i<=255;i++)
  {
    analogWrite(8, i);   // 设置引脚8输出0到3V
    delay(10);              // 延迟10毫秒
  }

  for(j=255;j>=0;j--)
  {
    analogWrite(8, j);   // 设置引脚8输出3到0V
    delay(10);              // 延迟10毫秒
  }
  delay(500);
}
