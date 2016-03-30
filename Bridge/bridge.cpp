#include "bridge.h"
void main()
{
	Abstraction * ab = new RefinedAbstraction();
	ab->SetImplementor(new ConcreteImplementorA());
	ab->Operation();

	ab->SetImplementor(new ConcreteImplementorB());
	ab->Operation();
}