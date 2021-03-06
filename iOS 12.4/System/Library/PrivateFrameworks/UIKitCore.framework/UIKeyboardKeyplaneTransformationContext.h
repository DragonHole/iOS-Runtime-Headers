/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIKBScreenTraits;

@interface UIKeyboardKeyplaneTransformationContext : NSObject {

	BOOL _usesScriptSwitch;
	NSString* _currentKeyplaneName;
	UIKBScreenTraits* _screenTraits;

}

@property (nonatomic,retain) NSString * currentKeyplaneName;               //@synthesize currentKeyplaneName=_currentKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;              //@synthesize screenTraits=_screenTraits - In the implementation block
@property (assign,nonatomic) BOOL usesScriptSwitch;                        //@synthesize usesScriptSwitch=_usesScriptSwitch - In the implementation block
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setCurrentKeyplaneName:(NSString *)arg1 ;
-(void)setUsesScriptSwitch:(BOOL)arg1 ;
-(UIKBScreenTraits *)screenTraits;
-(NSString *)currentKeyplaneName;
-(BOOL)usesScriptSwitch;
@end

