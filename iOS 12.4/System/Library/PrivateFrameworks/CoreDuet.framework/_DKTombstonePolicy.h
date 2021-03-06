/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,retain) NSArray * requirements;                                                   //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,retain) NSPredicate * predicateForEventsRequiredToBeTombstoned;                   //@synthesize predicateForEventsRequiredToBeTombstoned=_predicateForEventsRequiredToBeTombstoned - In the implementation block
@property (nonatomic,retain) NSPredicate * eventPredicateForEventsRequiredToBeTombstoned;              //@synthesize eventPredicateForEventsRequiredToBeTombstoned=_eventPredicateForEventsRequiredToBeTombstoned - In the implementation block
@property (nonatomic,retain) NSArray * propertiesToFetchForTombstones;                                 //@synthesize propertiesToFetchForTombstones=_propertiesToFetchForTombstones - In the implementation block
+(id)defaultPolicy;
-(id)initWithRequirements:(id)arg1 ;
-(NSPredicate *)eventPredicateForEventsRequiredToBeTombstoned;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(NSArray *)propertiesToFetchForTombstones;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(void)setPredicateForEventsRequiredToBeTombstoned:(NSPredicate *)arg1 ;
-(void)setEventPredicateForEventsRequiredToBeTombstoned:(NSPredicate *)arg1 ;
-(void)setPropertiesToFetchForTombstones:(NSArray *)arg1 ;
-(id)init;
-(void)setRequirements:(NSArray *)arg1 ;
-(NSArray *)requirements;
@end

