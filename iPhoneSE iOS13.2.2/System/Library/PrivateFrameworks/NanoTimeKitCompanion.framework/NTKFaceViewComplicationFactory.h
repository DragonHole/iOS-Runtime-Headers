/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKFaceViewComplicationFactory <NSObject>
@optional
-(long long)complicationPickerStyleForSlot:(id)arg1;
-(void)curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6;
-(id)pickerMaskForSlot:(id)arg1;
-(id)customEditOptionContainerViewForSlot:(id)arg1;
-(long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
-(BOOL)slotSupportsCurvedText:(id)arg1;

@required
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
-(id)keylineViewForComplicationSlot:(id)arg1;
-(void)loadLayoutRules;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;

@end
