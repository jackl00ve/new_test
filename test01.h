#pragma once

class Poseidon;

class Base
{
public:
    Poseidon& GetPoseidon();
private:
    Poseidon*_poseidon;

};


