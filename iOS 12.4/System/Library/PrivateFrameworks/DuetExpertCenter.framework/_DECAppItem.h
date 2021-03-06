/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECAppItem : _DECItem {

	NSString* _bundleIdentifier;
	long long _sources;
	long long _reason;
	id _atxResponse;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long sources;                        //@synthesize sources=_sources - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) id atxResponse;                           //@synthesize atxResponse=_atxResponse - In the implementation block
+(BOOL)isSearchFoundationCompliant;
+(id)fromSearchResult:(id)arg1 ;
+(id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 atxResponse:(id)arg3 ;
+(id)appWithBundleIdentifier:(id)arg1 ;
+(id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(unsigned long long)category;
-(long long)sources;
-(void)setReason:(long long)arg1 ;
-(id)toSearchResult;
-(id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 atxResponse:(id)arg3 ;
-(BOOL)_isEqualToDECAppItem:(id)arg1 ;
-(id)atxResponse;
-(BOOL)isEquivalent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)reason;
@end

