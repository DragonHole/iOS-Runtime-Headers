/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@interface GCControllerElement : NSObject

@property (nonatomic,__weak,readonly) GCControllerElement * collection; 
@property (getter=isAnalog,nonatomic,readonly) BOOL analog; 
-(GCControllerElement *)collection;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(float)value;
-(id)controller;
-(BOOL)_setValue:(float)arg1 ;
@end

