/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PPAssetABWrapper : NSObject {

	BOOL _nonWatchOnly;
	NSString* _abGroupOverride;

}

@property (nonatomic,readonly) BOOL nonWatchOnly;                       //@synthesize nonWatchOnly=_nonWatchOnly - In the implementation block
@property (nonatomic,readonly) NSString * abGroupOverride;              //@synthesize abGroupOverride=_abGroupOverride - In the implementation block
+(id)dictionaryForCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)dictionaryForNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)filesystemPathForNonPlistCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)filesystemPathForNonPlistNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
-(NSString *)abGroupOverride;
-(id)dictionaryForAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 naturalABGroupIdentifier:(id*)arg3 abGroupsInAsset:(id*)arg4 ;
-(id)filesystemPathForNonPlistDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 naturalABGroupIdentifier:(id*)arg3 abGroupsInAsset:(id*)arg4 ;
-(id)_filesystemPathForRelativePath:(id)arg1 ;
-(id)_rawDictionaryForAssetDataRelativePath:(id)arg1 ;
-(id)initCommonAssetWithABGroupOverride:(id)arg1 ;
-(id)initNonWatchAssetWithABGroupOverride:(id)arg1 ;
-(id)initWithABGroupOverride:(id)arg1 nonWatchOnly:(BOOL)arg2 ;
-(BOOL)nonWatchOnly;
@end

