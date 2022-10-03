#pragma once
class Scene
{
protected:
    //コンストラクタ
    Scene(){}
public:
    Scene(const Scene&) = delete;
    Scene& operator=(const Scene&) = delete;

    //仮想化したデストラクタ
    virtual ~Scene() = delete;

    virtual Scene* Update() = 0;
    virtual void Draw() const = 0;
};