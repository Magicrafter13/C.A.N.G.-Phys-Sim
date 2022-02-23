/* Ray (Extends Simulation Object) - Class Declaration
   Written by Amethyst Skye */

#ifndef RAY_H
#define RAY_H

#include "../include/simulationObject.hpp"
#include <glm/glm.hpp>
#include <iostream>

class Ray : public SimulationObject{
public: glm::vec2 Position, Tail, Size, Velocity;
        glm::vec4 Color;
        bool Destroyed;
        float Mass;
        Texture2D Texture;

        /* Constructor */
        Ray(glm::vec2 position, glm::vec4 color = glm::vec4(1.0f),
                     glm::vec2 size = glm::vec2(5),
                     Texture2D texture = ResourceManager::GetTexture("laser"),
                     glm::vec2 velocity = glm::vec2(0.0f), bool Destroyed = false) :

                     SimulationObject(Position, Color, Size,
                     Texture, Velocity, Destroyed) {}
        /* Methods */
        void printRayCoords();
        glm::vec2 setPosition(double, double);
        glm::vec2 setTail(double, double);
        glm::vec2 setSize(glm::vec2, glm::vec2);
        void successfulDraw(int);
        void init();
};
#endif
