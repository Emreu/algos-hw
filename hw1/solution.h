#ifndef SOLUTION_H
# define SOLUTION_H

// Здесь ваша реализация структуры (все заворачиваете в этот struct)
struct HW_STRUCT {
  struct HW_NODE *head;
};

// Здесь вы описываете элемент вашей структуры, для списка, напрмиер,
// тут должен быть ключ (int, для простоты) + необходимые указатели
struct HW_NODE {
  int key;
  struct HW_NODE *next;
};

#endif // SOLUTION_H

