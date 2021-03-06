// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Boost_EnergyDrink_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.BoostGaugeUp
// (Public, BlueprintCallable, BlueprintEvent)

void UItem_Boost_EnergyDrink_C::BoostGaugeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.BoostGaugeUp");

	UItem_Boost_EnergyDrink_C_BoostGaugeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.IsCastable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ATslCharacter**          Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem_Boost_EnergyDrink_C::IsCastable(class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.IsCastable");

	UItem_Boost_EnergyDrink_C_IsCastable_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.PrintCastingTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItem_Boost_EnergyDrink_C::PrintCastingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.PrintCastingTime");

	UItem_Boost_EnergyDrink_C_PrintCastingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.UseBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter**          Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem_Boost_EnergyDrink_C::UseBy(class ATslCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C.UseBy");

	UItem_Boost_EnergyDrink_C_UseBy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
