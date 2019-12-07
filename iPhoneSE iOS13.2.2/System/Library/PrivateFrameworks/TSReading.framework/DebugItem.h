/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DebugItem : NSObject {

	NSString* _title;
	id _target;
	SEL _action;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(id)target;
-(NSString *)title;
-(SEL)action;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end
