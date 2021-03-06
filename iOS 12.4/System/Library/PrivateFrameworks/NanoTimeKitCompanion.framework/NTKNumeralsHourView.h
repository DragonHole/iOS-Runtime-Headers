/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView {

	long long _hour;
	unsigned long long _style;
	NTKNumeralsAnalogFaceConfiguration* _faceConfiguration;
	UIColor* _appliedColor;
	BOOL _isLoaded;

}

@property (readonly) BOOL isLoaded;              //@synthesize isLoaded=_isLoaded - In the implementation block
-(id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2 ;
-(void)applyFaceColorFromFaceConfiguration:(id)arg1 ;
-(id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3 ;
-(void)_applyTintColor:(id)arg1 ;
-(id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4 ;
-(BOOL)isLoaded;
-(void)load;
-(void)layoutSubviews;
@end

