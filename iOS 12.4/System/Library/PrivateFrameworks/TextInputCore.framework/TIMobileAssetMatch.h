/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TIMobileAssetMatch : NSObject {

	NSArray* _types;
	NSArray* _inputModeLevels;
	NSArray* _regions;

}

@property (nonatomic,readonly) NSArray * types;                        //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSArray * inputModeLevels;              //@synthesize inputModeLevels=_inputModeLevels - In the implementation block
@property (nonatomic,readonly) NSArray * regions;                      //@synthesize regions=_regions - In the implementation block
+(id)knownAssetRegionAttributes;
+(id)mobileAssetMatchWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(id)initWithTypes:(id)arg1 inputModeLevels:(id)arg2 regions:(id)arg3 ;
-(NSArray *)inputModeLevels;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)regions;
-(NSArray *)types;
@end
