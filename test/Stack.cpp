#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Initialization) {
  Stack* s = new Stack();
  EXPECT_EQ(0, s->size());
}

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);
  
  EXPECT_EQ(6, s->peek());
  delete s;
}

TEST(StackTest, PushPastCapacity) {
  Stack* s = new Stack();
  //s->push(6);
  for (int i=0; i<10; ++i) {
  	s->push(i);
  }
  EXPECT_EQ(9, s->peek());
  //delete s;
}

TEST(StackTest, Resize) {
  Stack* s = new Stack(3);
  s->push(1);
  s->push(2);
  s->push(3);
  s->push(4);
  s->push(5);
  s->push(6);
  
  //EXPECT_EQ(6, s->peek());
  EXPECT_EQ(6, s->size());
  delete s;
}
