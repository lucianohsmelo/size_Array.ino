String topics[] = {"keepAlive","outTopic","door","respDoor","tempInter","tempExter"};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  int numTopics = (sizeof(topics)/sizeof(String)) - 1;
  for (int i = 0; i <= numTopics; i++)
    Serial.println(topics[i]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
