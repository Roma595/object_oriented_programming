#include "Bird.h"


void Bird::input_animal(){
	Animal_kotkov::input_animal();
	std::cout << "����� ����� ������? (1 - ��, 0 - ���)" << std::endl;
	Can_fly = validity_enter_interactive<bool>(0, 1);
}
void Bird::print(std::ostream& stream, bool pretty){
	Animal_kotkov::print(stream, pretty);
	print_value(stream, Can_fly, "����� ������ (1 - ��, 0 - ���): ", pretty);
}