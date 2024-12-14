#include <iostream>
#include "Subject.h"
#include "Observers.h"

class CustomEvent {
public:
    std::string id;
    std::string type;
    std::string payload;

    // Оператор вывода //
    friend std::ostream& operator<<(std::ostream& os, const CustomEvent& event) {
        os << "CustomEvent{id: " << event.id << ", type: " << event.type << ", payload: " << event.payload << "}";
        return os;
    }
};

int main() {
    // Это целочисленное событие //
    Subject<int> intSubject;
    auto intObserver = std::make_shared<ConsoleObserver<int>>();
    intSubject.attach(intObserver);
    intSubject.notify(42);

    // Строковое //
    Subject<std::string> stringSubject;
    auto stringObserver = std::make_shared<LoggingObserver<std::string>>();
    stringSubject.attach(stringObserver);
    stringSubject.notify("Hello, Observer!");

    // Состовное //
    Subject<CustomEvent> customEventSubject;
    auto customObserver = std::make_shared<ConsoleObserver<CustomEvent>>();
    customEventSubject.attach(customObserver);

    CustomEvent event{"1", "TypeA", "Payload data"};
    customEventSubject.notify(event);

    return 0;
}
