#pragma once


#include <Forms/TESBoundObject.h>
#include <Components/BGSKeywordForm.h>
#include <Components/TESFullName.h>

struct EffectSetting;

struct MagicItem : TESBoundObject
{
    TESFullName fullName;
    BGSKeywordForm keyword;
    GameArray<EffectSetting*> listOfEffects;
    int32_t iHostileCount;
    EffectSetting* pAVEffectSetting;
    uint32_t unk48;
    uint32_t unk4C;
};
