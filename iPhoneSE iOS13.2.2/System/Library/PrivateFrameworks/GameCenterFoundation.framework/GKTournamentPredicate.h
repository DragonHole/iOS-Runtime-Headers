/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate;

@interface GKTournamentPredicate : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForAvailableTournaments;
+(id)predicateForAvailableCustomTournaments;
+(id)predicateForAvailableAutoTournaments;
+(id)predicateForAvailableTournamentsPlayerRegisteredIn;
+(id)predicateForPastTournaments;
+(id)predicateForPastAutoTournaments;
+(id)predicateForPastCustomTournaments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
@end

