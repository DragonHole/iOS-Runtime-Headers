/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETScalarEventTracker : PETEventTracker {

	NSString* _event;

}

@property (nonatomic,readonly) NSString * event;              //@synthesize event=_event - In the implementation block
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)_setValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)trackEventWithPropertyValues:(id)arg1 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 ;
-(void)trackEventWithPropertyValues:(id)arg1 value:(unsigned long long)arg2 ;
-(void)trackEventWithPropertyValues:(id)arg1 setValue:(unsigned long long)arg2 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
-(NSString *)event;
@end

