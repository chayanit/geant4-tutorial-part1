//////////// Define Action to be taken ////////////

#include "action.hh"

MyActionInitialization::MyActionInitialization()
{}

MyActionInitialization::~MyActionInitialization()
{}

void MyActionInitialization::Build() const
{
    //SetUserAction(new MyPrimaryGenerator);

    MyPrimaryGenerator *generator = new MyPrimaryGenerator();
    SetUserAction(generator);
}
