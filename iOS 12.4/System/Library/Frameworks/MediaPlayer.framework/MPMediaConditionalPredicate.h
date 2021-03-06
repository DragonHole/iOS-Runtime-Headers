/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	MPMediaPredicate* _conditionPredicate;
	MPMediaPredicate* _thenPredicate;
	MPMediaPredicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) MPMediaPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(MPMediaPredicate *)thenPredicate;
-(MPMediaPredicate *)elsePredicate;
-(MPMediaPredicate *)conditionPredicate;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

