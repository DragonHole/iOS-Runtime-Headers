/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFavorited;
	BOOL _isAutoFavorited;
	BOOL _isGroupable;
	NSString* _identifier;
	unsigned long long _whitelistLevel;
	double _specificity;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long whitelistLevel;              //@synthesize whitelistLevel=_whitelistLevel - In the implementation block
@property (assign,nonatomic) double specificity;                             //@synthesize specificity=_specificity - In the implementation block
@property (assign,nonatomic) BOOL isFavorited;                               //@synthesize isFavorited=_isFavorited - In the implementation block
@property (assign,nonatomic) BOOL isAutoFavorited;                           //@synthesize isAutoFavorited=_isAutoFavorited - In the implementation block
@property (assign,nonatomic) BOOL isGroupable;                               //@synthesize isGroupable=_isGroupable - In the implementation block
+(id)orphanID;
+(id)discardedOrphanID;
+(BOOL)supportsSecureCoding;
-(id)initWithID:(id)arg1 ;
-(void)setWhitelistLevel:(unsigned long long)arg1 ;
-(void)setSpecificity:(double)arg1 ;
-(void)setIsFavorited:(BOOL)arg1 ;
-(void)setIsAutoFavorited:(BOOL)arg1 ;
-(void)setIsGroupable:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 subscibedTags:(id)arg2 autoFavoritedTags:(id)arg3 groupableTags:(id)arg4 whitelistLevel:(unsigned long long)arg5 rules:(id)arg6 ;
-(unsigned long long)whitelistLevel;
-(double)specificity;
-(BOOL)isFavorited;
-(BOOL)isAutoFavorited;
-(BOOL)isGroupable;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end

