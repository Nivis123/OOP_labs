#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
#include <list>
#include "IObserver.h"

//Класс реализации
template <typename T>
class SubjectImpl;

template <typename T>
class Subject {
public:
    Subject();
    ~Subject();

    void attach(std::shared_ptr<IObserver<T>> observer);
    void detach(std::shared_ptr<IObserver<T>> observer);
    void notify(const T& eventData);

private:
    std::unique_ptr<SubjectImpl<T>> impl; 
};


template <typename T>
class SubjectImpl {
public:
    void attach(std::shared_ptr<IObserver<T>> observer) {
        observers_.push_back(observer);
    }

    void detach(std::shared_ptr<IObserver<T>> observer) {
        observers_.remove(observer);
    }

    void notify(const T& eventData) {
        for (const auto& observer : observers_) {
            observer->onEvent(eventData);
        }
    }

private:
    std::list<std::shared_ptr<IObserver<T>>> observers_; 
};


template <typename T>
Subject<T>::Subject() : impl(std::make_unique<SubjectImpl<T>>()) {}

template <typename T>
Subject<T>::~Subject() = default;

template <typename T>
void Subject<T>::attach(std::shared_ptr<IObserver<T>> observer) {
    impl->attach(observer);
}

template <typename T>
void Subject<T>::detach(std::shared_ptr<IObserver<T>> observer) {
    impl->detach(observer);
}

template <typename T>
void Subject<T>::notify(const T& eventData) {
    impl->notify(eventData);
}

#endif
