#include <iostream>
#include <Person.h>
#include <Creature.h>
#include <Gender.h>
#include <Dog.h>
#include <iostream>
#include <ctime>
#include <new>
#include <string>
#include <stdio.h>

//for static : use "."
//for dymanic : use "->"

using namespace std;

int main()
{
      //EXEMPLE AVEC USER1
    printf("Hello User !\nEnter your first name please \n");
    //ici on utilise le constructeur par défaut Person() qui ne prend pas de paramètres
    Person User1;
    //on donne la valeur entrée par l'utilisateur à l'attribut "firstname" de la classe parent "Creature"
    cin>>User1.firstName;
    printf("Enter your lastname please\n");
    cin>>User1.lastName;
    printf("Enter the date of birth\n");
    cin>>User1.birthday;
    printf("Enter the month of birth\n");
    cin>>User1.birthmonth;
    printf("Enter the year of birth\n");
    cin>>User1.birthyear;

    /*
    on appelle la méthode getdate() de la classe parent "Creature" qui prend les différent valeurs de type
    int renseignés par l'utilisateur et renvoie une date sous format de string
    */
    User1.getdate(User1.birthday, User1.birthmonth, User1.birthyear);
    cout<<"Your firstname:"+User1.firstName+"\nYour lastname:"+User1.lastName+"\nYour date:"+User1.res+"\n";

    //EXEMPLE AVEC USER2
    //ici on utilise un autre constructeur de la classe Person de type static qui prend 2 paramètres
    Person User2("jack", "locenid");
    cout<<"User2 name :"<< User2.firstName<<endl;

    //EXEMPLE AVEC USER3
    //ici on utilise un autre constructeur de la classe Person de type dynamique
    Person *User3 = new Person("toto","hoho");
    //on utilise "->" pour accéder à la valeur de l'attribut firstname de l'objet User3
    cout<<"User3 name :"<< User3->getfirstname()<<endl;

    cout<<User3->displayneedsair()<<endl;

    Dog *SnoopDoggyDog = new Dog("SnoopDoggyDog");
    cout<<SnoopDoggyDog->firstName<<endl;
    cout<<SnoopDoggyDog->bark()<<endl;

    Gender *Coco = new Gender("mâle");
    //Person *User4 = new Person("Jean","Mich", Coco);

    //EXEMPLE AVEC USER4
    Person *User4 = new Person("Jean","Mich", Coco->thegender);
    User4->getgender();
    cout<<User4->firstName<<endl;
    cout<<User4->thegender<<endl;

    //EXEMPLE AVEC USER5

    string temporaryname;
    string temporaryspecies;

    cout<<"Enter your dogs name:"<<endl;
    cin>>temporaryname;
    cout<<"Enter your dogs specie:"<<endl;
    cin>>temporaryspecies;
    Dog *UsersDog = new Dog(temporaryname,temporaryspecies);
    cout<<"your dogs name:"+UsersDog->getfirstname()<<endl;

    cout<<"Your dogs says"+UsersDog->bark()<<endl;
    string tempSpecie;
    string yesno;
    cout<<"Do you want to change the specie of your dog ?"<<endl;
    cin>>yesno;
    if (yesno == "yes"|| yesno == "y"|| yesno == "Y" || yesno == "YES" ){
        cout<<"Enter new specie"<<endl;
        cin>>tempSpecie;
        //Acces au setteur pour donner une nouvelle valeur
        UsersDog->setspecie(tempSpecie);
        //Acces au getteur pour aller chercher la nouvelle valeur
        cout<<"your dogs new specie is"+UsersDog->getspecie()<<endl;
    }

    cout<<"END OF THE SHOW";

    return 0;
}
