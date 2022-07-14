byte LED[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
byte i = 0, k = 0;
short j = 1, Delay = 100;

void setup()
{
    for (i = 0; i < sizeof(LED) / sizeof(byte); i++)
        pinMode(LED[i], OUTPUT);
}

void loop()
{
    for (i = 0; i < sizeof(LED) / sizeof(byte); i++)
    {
        digitalWrite(LED[i], HIGH);
        if (i == k)
            digitalWrite(LED[i], LOW);
    }
    k += j;
    if (k == 11)
        j = -1;
    else if (k == 0)
        j = 1;
    delay(Delay);
}