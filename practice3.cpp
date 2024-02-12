// Animal Inheritance:

/*Create a base class Animal with attributes like name and sound.
Derive two classes, Dog and Cat, from Animal. Add specific attributes like breed for the dog and litterSize for the cat.
Implement a method in the base class to make the animal sound and override it in each derived class to incorporate specific sounds for dogs and cats.*/

#include <iostream>
using namespace std;
class Animal
{
public:
    string name, sound;
    Animal(string n, string s) : name(n), sound(s) {}
    virtual void display() const
    {
        cout<<endl;
        cout << "the name of the animal is " << name << endl;
        cout << "the sound of the animal is " << sound << endl;
    }
};
class Cat : public Animal
{
public:
    float litter_size;
    Cat(string n, string s, float l_s) : Animal(n, s), litter_size(l_s) {}
    void display() const override
    {
        cout << endl;
        Animal::display();
        cout << "the littersize of the cat is " << litter_size << endl;
    }
};
class Dog : public Animal
{
public:
    string breed;
    Dog(string n, string s, string b) : Animal(n, s), breed(b) {}
    void display() const override
    {
        cout << endl;
        Animal::display();
        cout << "the breed of dog is " << breed << endl;
    }
};
int main()
{
    Animal a1("Cat", "meow");
    a1.display();
    Cat c1("Cat", "meow", 1.2);
    c1.display();
    Dog d1("Dog", "Bark", "german_shephard");
    d1.display();
    return 0;
}