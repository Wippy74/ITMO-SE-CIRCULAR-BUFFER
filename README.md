# Curcular Buffer

## Задача

STL-совместимый контейнер для [Циклического буфера](https://en.wikipedia.org/wiki/Circular_buffer) с возможностью расширения

## Требования

Контейнер представляет из себя шаблон класса, праметризируемый типом хранимых объектов и аллокатором, максимальное количество хранимых элементов передается в конструкторе. Контейнер обладает функциональностью для расширения своего максимального размера. Реализовано следующее поведение: в случае достижения максимального размера кольцевого буфера, значение максимального размера должно удваиваться. Также частично(см ниже) удовлетворяет следующим требованиям к stl-совместимым контейнерам:

  - [контейнер](https://en.cppreference.com/w/cpp/named_req/Container)
  - [последовательный контейнер](https://en.cppreference.com/w/cpp/named_req/SequenceContainer) (за исключением следующих методов):
     - ~~emplace~~
     - ~~assign_range~~
     - ~~emplace_front~~
     - ~~emplace_back~~
     - ~~prepend_range~~
  - [контейнер с обратным итератором](https://en.cppreference.com/w/cpp/named_req/ReversibleContainer)
  - [контейнер поддерживающий аллокатор](https://en.cppreference.com/w/cpp/named_req/AllocatorAwareContainer)
  - [oбладать итератором произвольного доступа](https://en.cppreference.com/w/cpp/named_req/RandomAccessIterator)


Обладает следующими методами:

| Метод     |  Алгоримическая сложность        |
| --------  | -------                          |
| clear     |  O(N)                            |
| push_back |  O(1)                            |
| pop_back  |  O(1)                            |
| push_front |  O(1)                            |
| pop_front  |  O(1)                            |
| insert     |  O(N)                            |
| erase      |  O(N)                            |


## Тесты

Все указанные выше требования покрыты тестами, с помощью фреймворка [Google Test](http://google.github.io/googletest).

