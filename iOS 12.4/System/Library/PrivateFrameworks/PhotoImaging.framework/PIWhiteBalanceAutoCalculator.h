/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>

@class PIFaceBalanceAutoCalculator, NUImagePropertiesClient;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator {

	PIFaceBalanceAutoCalculator* _faceAutoCaculator;
	NUImagePropertiesClient* _imagePropertiesClient;
	CGColorRef _grayColor;
	CGColorRef _grayColorXY;
	BOOL _isRAW;

}
-(void)calculate:(/*^block*/id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(SCD_Struct_PI5)_chooseNeutralGrayForNonSushi:(SCD_Struct_PI6)arg1 ;
-(SCD_Struct_PI7)_chooseTempTintForSushi:(SCD_Struct_PI6)arg1 RAWProperties:(id)arg2 brightness:(double)arg3 ;
-(SCD_Struct_PI5)_correctedRGBResultFromResult:(SCD_Struct_PI5)arg1 ;
-(BOOL)_useTempTint:(SCD_Struct_PI5)arg1 ;
@end
