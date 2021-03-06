/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CEKLightingControlItem : NSObject {

	long long _lightingType;
	NSString* _displayName;
	UIImage* _displayImage;
	UIImage* _displayShadowImage;
	UIImage* _displayOutlineImage;
	UIImage* _selectionBackgroundImage;

}

@property (nonatomic,readonly) long long lightingType;                          //@synthesize lightingType=_lightingType - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * displayImage;                          //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayShadowImage;                    //@synthesize displayShadowImage=_displayShadowImage - In the implementation block
@property (nonatomic,readonly) UIImage * displayOutlineImage;                   //@synthesize displayOutlineImage=_displayOutlineImage - In the implementation block
@property (nonatomic,readonly) UIImage * selectionBackgroundImage;              //@synthesize selectionBackgroundImage=_selectionBackgroundImage - In the implementation block
+(id)_defaultOutlineImage;
-(NSString *)displayName;
-(id)initWithType:(long long)arg1 ;
-(UIImage *)displayImage;
-(long long)lightingType;
-(UIImage *)displayShadowImage;
-(UIImage *)displayOutlineImage;
-(UIImage *)selectionBackgroundImage;
@end

