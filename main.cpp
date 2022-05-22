#include <iostream>

#include "Chat.h"
#include "Message.h"
#include "MessageNotifier.h"
#include "IconBadgeMonitor.h"
#include "User.h"


int main() {
    User maria("Maria");
    User chiara ("Chiara");
    maria.createChat(chiara);
    Chat Maria_Chiara(maria, chiara);
    User g("Gianluca");
    Message foo("Maria", "Chiara", "Hi Chiara, how's it going?"), bar("Chiara", "Maria", "Great. What about you?"), fooBar(
            "Maria", "Chiara", "I'm pretty well too.");
    MessageNotifier messageNotifier(true, &Maria_Chiara);
    IconBadgeMonitor iconBadgeMonitor(&Maria_Chiara);
    messageNotifier.attach();
    iconBadgeMonitor.attach();
    Maria_Chiara.addMessage(foo);
    Maria_Chiara.addMessage(bar);
    Maria_Chiara.addMessage(fooBar);
    try {
        Maria_Chiara.readMessage(1);
        Maria_Chiara.readMessage(5);
    }
    catch (std::out_of_range &e) {
        std::cerr << "Out of range error:" << e.what() << std::endl;
    }
    maria.removeChat(chiara);
}