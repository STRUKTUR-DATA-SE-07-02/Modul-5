#include <iostream>

struct NODE
{
    int data;
    NODE *next;
};

// Buat daftar kosong
std::nullptr_t empty_element()
{
    return nullptr;
}

// Sisip elemen ke awal daftar
void insert_as_first(NODE *&head, NODE *&tail, int new_data)
{
    NODE *new_element = new NODE;
    new_element->data = new_data;

    // Buat lanjutan dari elemen new_element ke elemen awal sebelumnya
    new_element->next = head;

    // Jadikan elemen new_element sebagai head
    head = new_element;

    // Sekalian kalau tail ternyata kosong
    if (tail == empty_element())
    {
        tail = new_element;
    }
}

// Sisip elemen ke akhir dafar
void insert_as_last(NODE *&head, NODE *&tail, int new_data)
{
    NODE *new_element = new NODE;
    new_element->data = new_data;
    new_element->next = empty_element();

    if (head == empty_element())
    {
        head = new_element;
        tail = new_element;
    }
    else
    {
        // Buat lanjutan dari tail ke new_element
        tail->next = new_element;

        // Jadikan new_element sebagai tail
        tail = new_element;
    }
}

// Cari elemen
int find_element(NODE *head, int searched_data)
{
    NODE *current = head;
    int position = 0;

    while (current != empty_element())
    {
        if (current->data == searched_data)
        {
            return position;
        }

        current = current->next;
        position = position + 1;
    }

    return -1;
}

void delete_element(NODE *&head, int searched_data)
{
    if (head == empty_element())
    {
        std::cout << "The list is empty." << '\n';
        return;
    }

    // Jika head adalah yang dicari
    if (head->data == searched_data)
    {
        NODE *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    NODE *current = head;
    while (current->next != empty_element())
    {
        if (current->next->data == searched_data)
        {
            NODE *temp = current->next;
            current->next = temp->next;
            delete temp;
            return;
        }

        current = current->next;
    }
}

// Cetak daftar
void print_list(NODE *element)
{
    while (element != empty_element())
    {
        std::cout << element->data << " ";
        element = element->next;
    }

    std::cout << '\n';
}

int main() {
    NODE* head = empty_element();
    NODE* tail = empty_element();

    insert_as_first(head, tail, 53);
    insert_as_first(head, tail, 97);
    insert_as_first(head, tail, 41);

    insert_as_last(head, tail, 313);
    insert_as_last(head, tail, 283);
    insert_as_last(head, tail, 9109);

    std::cout << "Elements in list: ";
    print_list(head);

    int x;
    std::cout << "Search element: ";
    std::cin >> x;

    int result = find_element(head, x);

    if (result >= 0) {
        std::cout << "The data is located at index " << result << '\n';
    } else {
        std::cout << "The data is not found" << '\n';
    }

    std::cout << "Input element you wanted to delete: ";
    std::cin >> x;
    delete_element(head, x);

    std::cout << "Current list: ";
    print_list(head);

    return 0;
}
