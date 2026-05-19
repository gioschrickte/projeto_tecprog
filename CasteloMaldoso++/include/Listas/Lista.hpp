#pragma once
#include <iostream>

namespace Listas
{
    template <typename TL>
    class Lista {
    private:

        class Elemento {
        private:
            Elemento* pProx;
            TL* pinfo;

        public:
     
            Elemento() {
                pProx = nullptr;
                pinfo = nullptr;
            }

            
            ~Elemento() {}

            
            void incluir(TL* p) {
                pinfo = p;
            }

            void setProx(Elemento* pE) {
                pProx = pE;
            }

            Elemento* getProximo() const {
                return pProx;
            }

            TL* getInfo() const {
                return pinfo;
            }
        };
        
        Elemento* pPrimeiro;
        Elemento* pUltimo;

    public:
        // <<create>>
        Lista() {
            pPrimeiro = nullptr;
            pUltimo = nullptr;
        }

        // <<destroy>>
        ~Lista() {
            limpar();
        }

        // Inclui um novo dado no final da lista
        void incluir(TL* p) {
            Elemento* novoElemento = new Elemento();
            novoElemento->incluir(p);
            novoElemento->setProx(nullptr);

            if (pPrimeiro == nullptr) {
                pPrimeiro = novoElemento;
                pUltimo = novoElemento;
            }
            else {
                pUltimo->setProx(novoElemento);
                pUltimo = novoElemento;
            }
        }

        // Limpa a lista deletando os nós (Elementos) da memória
        void limpar() {
            Elemento* atual = pPrimeiro;
            while (atual != nullptr) {
                Elemento* proximo = atual->getProximo();
                delete atual;
                atual = proximo;
            }
            pPrimeiro = nullptr;
            pUltimo = nullptr;
        }

        Elemento* getPrimeiro()
        {
            return pPrimeiro;
        }
    };
}