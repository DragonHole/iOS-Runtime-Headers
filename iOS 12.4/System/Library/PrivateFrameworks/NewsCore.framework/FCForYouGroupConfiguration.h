/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCForYouGroupConfiguration : NSObject <NSCopying> {

	BOOL _allowsNativeAds;
	long long _groupType;
	NSString* _identifier;
	unsigned long long _groupPosition;
	unsigned long long _precedingGroupsCountForFirstGroup;
	unsigned long long _precedingGroupsCount;

}

@property (assign,nonatomic) long long groupType;                                               //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL allowsNativeAds;                                              //@synthesize allowsNativeAds=_allowsNativeAds - In the implementation block
@property (assign,nonatomic) unsigned long long groupPosition;                                  //@synthesize groupPosition=_groupPosition - In the implementation block
@property (assign,nonatomic) unsigned long long precedingGroupsCount;                           //@synthesize precedingGroupsCount=_precedingGroupsCount - In the implementation block
@property (assign,nonatomic) unsigned long long precedingGroupsCountForFirstGroup;              //@synthesize precedingGroupsCountForFirstGroup=_precedingGroupsCountForFirstGroup - In the implementation block
-(long long)groupType;
-(unsigned long long)precedingGroupsCount;
-(long long)compareGroupPosition:(id)arg1 ;
-(unsigned long long)precedingGroupsCountForFirstGroup;
-(void)setGroupType:(long long)arg1 ;
-(unsigned long long)groupPosition;
-(BOOL)allowsNativeAds;
-(void)setAllowsNativeAds:(BOOL)arg1 ;
-(void)setGroupPosition:(unsigned long long)arg1 ;
-(void)setPrecedingGroupsCountForFirstGroup:(unsigned long long)arg1 ;
-(void)setPrecedingGroupsCount:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end
