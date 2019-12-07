/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {

	long long _family;
	long long _sessionCount;

}

@property (assign,nonatomic) long long sessionCount;              //@synthesize sessionCount=_sessionCount - In the implementation block
+(id)breathingTemplateWithFamily:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(long long)sessionCount;
-(void)setSessionCount:(long long)arg1 ;
@end
