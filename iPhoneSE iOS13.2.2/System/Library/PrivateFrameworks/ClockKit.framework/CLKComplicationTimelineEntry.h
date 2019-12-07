/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class NSDate, CLKComplicationTemplate, NSString;

@interface CLKComplicationTimelineEntry : NSObject <NSCopying, NSSecureCoding, CLKTimelineEntry> {

	BOOL _finalized;
	NSDate* _date;
	CLKComplicationTemplate* _complicationTemplate;
	NSString* _timelineAnimationGroup;

}

@property (nonatomic,retain) NSDate * date;                                             //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) CLKComplicationTemplate * complicationTemplate;              //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (nonatomic,copy) NSString * timelineAnimationGroup;                           //@synthesize timelineAnimationGroup=_timelineAnimationGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3 ;
+(id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)validate;
-(id)finalizedCopy;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(void)setTimelineAnimationGroup:(NSString *)arg1 ;
-(void)validateComplicationFamily:(long long)arg1 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(NSString *)timelineAnimationGroup;
@end
