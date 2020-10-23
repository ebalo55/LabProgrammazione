#include <iostream>
#include "Chat.h"
#include "User.h"
#include "Register.h"
#include "Message.h"
#include "Notifier.h"

int main() {
    User user1("Marco");
    User user2("Luca");
    Chat* chat = user1.newChat(user2);
    Notifier notifier(chat);
    Message message1("Marco", "Luca", "Hello, how are you?");
    Message message2("Luca", "Marco", "Hey! It's all ok, what about you?");
    Message message3("Marco", "Luca", "I'm doing great, thank you!");
    chat->addMessage(message1);
    chat->addMessage(message2);
    chat->addMessage(message3);
    user1.removeChat(user2);
}
