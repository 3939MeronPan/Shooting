#pragma once
class Scene
{
protected:
    //�R���X�g���N�^
    Scene(){}
public:
    Scene(const Scene&) = delete;
    Scene& operator=(const Scene&) = delete;

    //���z�������f�X�g���N�^
    virtual ~Scene() = delete;

    virtual Scene* Update() = 0;
    virtual void Draw() const = 0;
};