/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAssistiveTouch.framework/AccessoryAssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCAssistiveTouchAccessory : NSObject {

	BOOL _desiredAssistiveTouchState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                      //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredAssistiveTouchState;              //@synthesize desiredAssistiveTouchState=_desiredAssistiveTouchState - In the implementation block
-(BOOL)desiredAssistiveTouchState;
-(void)setDesiredAssistiveTouchState:(BOOL)arg1 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(id)initWithAccessoryUID:(id)arg1 ;
@end
