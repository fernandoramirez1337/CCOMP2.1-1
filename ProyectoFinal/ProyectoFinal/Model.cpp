#include "Model.h"


void Model::colision(Ladrillo1 &a, Ladrillo2 &b, Circulo &ball) {
	for (int i = 0; i<13; i++)
		for (int j = 0; j < 13; j++) {
			a.actualizar(ball, i, j, h);
			b.actualizar(ball, i, j, a, h);
		}
}
Model::Model() {
	h = 0;
}
void Model::paredes(Circulo &ball) {
	int aux = ball.circle.getPosition().x;
	if (aux > 640 || aux < 0) {
		ball.ballx *= -1;
	}
	aux = ball.circle.getPosition().y;
	if (aux < 0) {
		ball.bally *= -1.5;
	}
}
void Model::barrapelota(Circulo &ball, Barra &barra) {
	if (ball.circle.getGlobalBounds().intersects(barra.rect.getGlobalBounds()))
		ball.bally = -(abs)(ball.bally);
}