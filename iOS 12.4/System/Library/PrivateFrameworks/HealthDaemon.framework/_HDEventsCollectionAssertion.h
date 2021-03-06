/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAssertion.h>

@class NSSet;

@interface _HDEventsCollectionAssertion : HDAssertion {

	NSSet* _eventCollectors;

}

@property (nonatomic,retain) NSSet * eventCollectors;              //@synthesize eventCollectors=_eventCollectors - In the implementation block
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(NSSet *)eventCollectors;
-(void)setEventCollectors:(NSSet *)arg1 ;
@end

