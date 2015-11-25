//
//  main.cpp
//  sweep3
//
//  Created by 刘骁汉 on 15/11/25.
//  Copyright © 2015年 刘骁汉. All rights reserved.
//


Servo myservo;

int pos = 0;

void setup() {
    myservo.attach(9);
}

void loop() {
    for (pos = 0; pos <= 180; pos += 1)
    {
        myservo.write(pos);
        delay(15);
    }
    for (pos = 180; pos >= 0; pos -= 1)
    {
        myservo.write(pos);
        delay(15);
    }
}

