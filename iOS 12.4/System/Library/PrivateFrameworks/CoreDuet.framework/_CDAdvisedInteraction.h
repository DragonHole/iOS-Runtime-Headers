/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, _CDContact, NSString, NSSet;

@interface _CDAdvisedInteraction : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _reasons;
	_CDContact* _contact;
	NSString* _account;
	NSString* _bundleId;
	long long _mechanism;
	double _score;
	long long _similarOutgoingInteractionsCount;
	long long _similarIncomingInteractionsCount;
	long long _similarBidirectionalInteractionsCount;

}

@property (retain) _CDContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (retain) NSString * account;                                           //@synthesize account=_account - In the implementation block
@property (retain) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (assign) long long mechanism;                                          //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) double score;                                                 //@synthesize score=_score - In the implementation block
@property (retain) NSSet * reasons; 
@property (assign) long long similarOutgoingInteractionsCount;                   //@synthesize similarOutgoingInteractionsCount=_similarOutgoingInteractionsCount - In the implementation block
@property (assign) long long similarIncomingInteractionsCount;                   //@synthesize similarIncomingInteractionsCount=_similarIncomingInteractionsCount - In the implementation block
@property (assign) long long similarBidirectionalInteractionsCount;              //@synthesize similarBidirectionalInteractionsCount=_similarBidirectionalInteractionsCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addReason:(long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(id)descriptionOfReasons:(id)arg1 ;
-(long long)similarOutgoingInteractionsCount;
-(void)setSimilarOutgoingInteractionsCount:(long long)arg1 ;
-(long long)similarIncomingInteractionsCount;
-(void)setSimilarIncomingInteractionsCount:(long long)arg1 ;
-(long long)similarBidirectionalInteractionsCount;
-(void)setSimilarBidirectionalInteractionsCount:(long long)arg1 ;
-(long long)mechanism;
-(void)setContact:(_CDContact *)arg1 ;
-(double)score;
-(_CDContact *)contact;
-(void)setMechanism:(long long)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)addReasons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)reasons;
-(void)setReasons:(NSSet *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
@end

