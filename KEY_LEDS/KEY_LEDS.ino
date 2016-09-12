/*
 作者:暴走的阿Sai
 时间：2016年9月5日
 发表地址：[url]www.t-firefly.com[/url]
 程序说明： 
 通过按键控制LED流水方向
 */
void setup() {
  // 初始化引脚8,9,10,11为输出
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  //初始化2,13引脚为输入
  pinMode(7, INPUT);
  pinMode(12, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int i,j;//设置变量i与变量j用于循环
  if(digitalRead(12) == HIGH )//检测12引脚为高的时候执行
  {
  for(i=8;i<=11;i++)
   {
    digitalWrite(i, HIGH);   // 设置引脚i为高电平
    delay(200);              // 延迟200毫秒
    digitalWrite(i, LOW);    // 设置引脚i为低电平
    delay(200);              // 延迟200毫秒
   }
  }

  if(digitalRead(7) == HIGH )//检测7引脚为高的时候执行
  {
  for(j=11;j>=8;j--)
   {
    digitalWrite(j, HIGH);   // 设置引脚j为高电平
    delay(200);              // 延迟200毫秒
    digitalWrite(j, LOW);    // 设置引脚j为低电平
    delay(200);              // 延迟200毫秒
   }
  }
}
