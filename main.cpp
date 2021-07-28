#include <iostream>
#include <vector>
int hashfunction1(int input){
    return input % 13;
}
int hashfunction2(int input){
    return 7 - (input % 13);
}
void insert (int *array, int input) {
    int index;
    int i = 0;
    while (true) {
        index = hashfunction1(input) + i * hashfunction2(input);
        if(index > 12)
            index = index - 13;
        if (array[index] == NULL) {
            array[index] = input;
            return ;
        } else
            i++;
    }
}
void search (int *array, int input){
    int index;
    int i = 0;
    while(true){
        index = hashfunction1(input) + i * hashfunction2(input);
        if(index > 12)
            index = index - 13;
        if(array[index] == input) {
            std::cout << "found at index " << index << '\n';
            return;
        }
        else if (array[index] == NULL){
            std::cout << "not found!" << '\n';
            return;
        } else i++;
    }
}
int main() {
    int array[13]={NULL};
    insert(array,18);
    insert(array,41);
    insert(array,22);
    insert(array,44);
    for (size_t i = 0; i < 13; i++) {
        std::cout << array[i] << '\n';
    }
    search(array,12);
    return 0;
}
