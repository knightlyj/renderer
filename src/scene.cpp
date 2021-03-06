#include "stdafx.h"
#include "scene.h"
#include "FbxModel.h"

using namespace MyMath;

const char* modelFile = "teapot.FBX";
FbxModel *model;
Scene::Scene() : camera(-1, -1000, 1, 90)
{
	model = FbxModel::ImportFbxModel(modelFile);
	model->transform.position = Vector3(0, -30, -100);
	model->transform.rotation.EulerAngles(-90, 0, 0);
}

Scene::~Scene()
{

}

void Scene::Render(RenderTexture* pRenderTexture) {
	this->camera.RenderModel(pRenderTexture, model);
}