#pragma once

class Nota
{
    int nota;

    void editarNota(int nota)
    {
        if (nota > 0 && nota <= 10)
            this->nota = nota;
    }
};