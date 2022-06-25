//
// Created by Maria on 22/05/2022.
//

#include "gtest/gtest.h"
#include "../Chat.h"

class ChatTest : public ::testing::Test {
protected:
    User a{"Maria"};
    User b{"Chiara"};

};

TEST_F(ChatTest,GetterSetter){
    Chat c (a, b);
    ASSERT_EQ(c.getMyName(), "Maria");
    c.setMyName("Chiara");
    
    ASSERT_EQ(c.getMyName(), "Chiara");
    c.setOtherName("Sara");
    ASSERT_EQ(c.getOtherName(),"Sara");
    c.setOtherName("Francesca");
    ASSERT_EQ(c.getOtherName(), "Francesca");
}

TEST_F(ChatTest,functions){
    Chat c (a, b);
    const Message mes ("Chiara","Maria", "Hi Maria, how are you?");
    c.addMessage (mes);
    ASSERT_EQ(c.lastMessage(),mes);
    ASSERT_THROW(c.readMessage(2), std::out_of_range);
    ASSERT_THROW(c.readMessage(0), std::out_of_range);
}

TEST_F(ChatTest, SwappedMessages) {
    Chat c(a,b);
    Message foo("Maria", "Chiara", "Hi Chiara, how's it going?");
    c.addMessage(foo);
    Message bar("Chiara", "Maria", "Great. What about you?");
    c.addMessage(bar);
    ASSERT_EQ(c.getUnreadMessages(),1);
    c.readMessage(1);
    Message  fooBar("Maria", "Chiara", "I'm pretty well too.");
    c.addMessage(fooBar);
    ASSERT_EQ(c.getUnreadMessages(),0);
    ASSERT_EQ(c.getTotalMessages(),3);
    ASSERT_EQ(c.getReadMessages(),1);
}
