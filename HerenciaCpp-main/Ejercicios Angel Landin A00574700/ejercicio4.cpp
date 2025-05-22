#include <iostream>
using namespace std;

class ReproductorAudio {
    public:
    string formatoAudio;
    ReproductorAudio(string formatoAudio) : formatoAudio(formatoAudio){}
    virtual void reproducir() {
        cout << "Reproduciendo un audio en formato: " << formatoAudio <<endl;
    }
};

class ReproductorVideo {
public:
    string formatoVideo;
    ReproductorVideo(string formatoVideo) : formatoVideo(formatoVideo){}
   
    virtual void mostrar(){
        cout << "Formato de video: " << formatoVideo << endl;
    }
};

class ReproductorMultimedia : public ReproductorAudio, public ReproductorVideo{
    public:
        string resolucion;
        int volumen;
        ReproductorMultimedia(string formatoAudio, string formatoVideo, string resolucion, int volumen ) : ReproductorAudio(formatoAudio), ReproductorVideo(formatoVideo),  
        resolucion(resolucion), volumen(volumen) {}

        void reproducir() override {
            cout << "Reproduciendo un archivo/recurso multimedia" <<endl;
        }

        void mostrar() override {
            cout << "---------------------Archivo multimedia-----------------------" << endl << "Formato Video: " << formatoVideo << ", Formato Audio: " << formatoAudio <<endl;
        }

};

int main() {
    ReproductorMultimedia* reproMulti = new ReproductorMultimedia("mp3", "mp4", "1080 p", 85);
    reproMulti->mostrar();
    reproMulti->reproducir();

    ReproductorAudio reproAudio("AAC");
    ReproductorVideo reproVideo("AVI");

    reproAudio.reproducir();
    reproVideo.mostrar();

    ReproductorAudio* ptrAudio = reproMulti;
    ptrAudio->reproducir(); // Llama al override en ReproductorMultimedia

    delete reproMulti;


}