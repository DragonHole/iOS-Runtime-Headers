/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKStandingQuery.h>

@class NSString;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {

	NSString* queryIdentifier;

}

@property (nonatomic,retain) NSString * queryIdentifier; 
-(id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2 ;
-(void)setQueryIdentifier:(NSString *)arg1 ;
-(NSString *)queryIdentifier;
-(double)_deviceActivityEphemerality;
-(void)executeWithStorage:(id)arg1 referenceDate:(id)arg2 ;
-(id)_customIdentifierForDayOfWeek:(long long)arg1 ;
-(id)_predicateForDeletedEventsWithReferenceDate:(id)arg1 ;
-(long long)_computeSlotForDate:(id)arg1 ;
-(id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3 ;
-(id)fetchResultForDayOfWeek:(long long)arg1 ;
-(void)executeWithStorage:(id)arg1 ;
-(id)fetchResultFromStorage:(id)arg1 ;
-(id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2 ;
-(id)fetchResult;
-(id)init;
@end

